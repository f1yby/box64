export CC=aarch64-linux-gnu-gcc

# use mold (2m2s)
# cmake -B build -DWITH_MOLD=1 -DARM_DYNAREC=1
# cd build; mold -run make -j; cd ..

# use gnu ld (2m4s)
cmake -B build -DARM_DYNAREC=1
cd build; make -j; cd ..
