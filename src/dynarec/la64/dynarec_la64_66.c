#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>

#include "debug.h"
#include "box64context.h"
#include "dynarec.h"
#include "emu/x64emu_private.h"
#include "emu/x64run_private.h"
#include "x64run.h"
#include "x64emu.h"
#include "box64stack.h"
#include "callback.h"
#include "emu/x64run_private.h"
#include "x64trace.h"
#include "dynarec_native.h"
#include "custommem.h"

#include "la64_printer.h"
#include "dynarec_la64_private.h"
#include "dynarec_la64_helper.h"
#include "dynarec_la64_functions.h"


uintptr_t dynarec64_66(dynarec_la64_t* dyn, uintptr_t addr, uintptr_t ip, int ninst, rex_t rex, int rep, int* ok, int* need_epilog)
{
    uint8_t opcode = F8;
    uint8_t nextop, u8;
    int16_t i16;
    uint16_t u16;
    uint64_t u64;
    int32_t i32;
    int64_t j64;
    uint8_t gd, ed;
    uint8_t wback, wb1;
    int64_t fixedaddress;
    int unscaled;
    int lock;
    MAYUSE(u8);
    MAYUSE(u16);
    MAYUSE(u64);
    MAYUSE(j64);
    MAYUSE(lock);

    while ((opcode == 0x2E) || (opcode == 0x36) || (opcode == 0x66)) // ignoring CS:, SS: or multiple 0x66
        opcode = F8;

    while ((opcode == 0xF2) || (opcode == 0xF3)) {
        rep = opcode - 0xF1;
        opcode = F8;
    }

    GETREX();

    if (rex.w && !(opcode == 0x0f || opcode == 0xf0 || opcode == 0x64 || opcode == 0x65)) // rex.w cancels "66", but not for 66 0f type of prefix
        return dynarec64_00(dyn, addr - 1, ip, ninst, rex, rep, ok, need_epilog);         // addr-1, to "put back" opcode

    switch (opcode) {

        case 0x0F:
            switch (rep) {
                case 0: addr = dynarec64_660F(dyn, addr, ip, ninst, rex, ok, need_epilog); break;
                default:
                    DEFAULT;
            }
            break;
        case 0x89:
            INST_NAME("MOV Ew, Gw");
            nextop = F8;
            GETGD;
            if (MODREG) {
                ed = TO_LA64((nextop & 7) + (rex.b << 3));
                if (ed != gd) {
                    BSTRINS_W(ed, gd, 15, 0);
                    ZEROUP(ed);
                }
            } else {
                addr = geted(dyn, addr, ninst, nextop, &ed, x2, x1, &fixedaddress, rex, &lock, 1, 0);
                ST_H(gd, ed, fixedaddress);
                SMWRITELOCK(lock);
            }
            break;
        case 0x90:
        case 0x91:
        case 0x92:
        case 0x93:
        case 0x94:
        case 0x95:
        case 0x96:
        case 0x97:
            gd = TO_LA64((opcode & 0x07) + (rex.b << 3));
            if (gd == xRAX) {
                INST_NAME("NOP");
            } else {
                INST_NAME("XCHG AX, Reg");
                MV(x2, xRAX);
                BSTRPICK_D(xRAX, gd, 15, 0);
                BSTRPICK_D(gd, x2, 15, 0);
            }
            break;
        default:
            DEFAULT;
    }
    return addr;
}
