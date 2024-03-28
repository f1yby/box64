#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(aligned_alloc, pFuu)
GO(calloc, pFLL)
GO(cfree, vFp)
// GO(_fini,
GO(free, vFp)
// GO(_init,
GO(__libc_calloc, pFLL)
GO(__libc_cfree, vFp)
GO(__libc_free, vFp)
GO(__libc_malloc, pFL)
GO(__libc_memalign, pFLL)
GO(__libc_pvalloc, pFL)
GO(__libc_realloc, pFpL)
GO(__libc_valloc, pFL)
GOM(mallinfo, pFEp)
GO(malloc, pFL)
// GO(MallocExtension_GetAllocatedSize,
// GO(MallocExtension_GetEstimatedAllocatedSize,
// GO(MallocExtension_GetNumericProperty,
// GO(MallocExtension_GetOwnership,
// GO(MallocExtension_GetStats,
// GO(MallocExtension_GetThreadCacheSize,
// GO(MallocExtension_MallocMemoryStats,
// GO(MallocExtension_MarkThreadBusy,
// GO(MallocExtension_MarkThreadIdle,
// GO(MallocExtension_MarkThreadTemporarilyIdle,
// GO(MallocExtension_ReleaseFreeMemory,
// GO(MallocExtension_ReleaseToSystem,
// GO(MallocExtension_SetNumericProperty,
// GO(MallocExtension_VerifyAllMemory,
// GO(MallocExtension_VerifyArrayNewMemory,
// GO(MallocExtension_VerifyMallocMemory,
// GO(MallocExtension_VerifyNewMemory,
// GO(MallocHook_AddDeleteHook,
// GO(MallocHook_AddMmapHook,
// GO(MallocHook_AddMremapHook,
// GO(MallocHook_AddMunmapHook,
// GO(MallocHook_AddNewHook,
// GO(MallocHook_AddPreMmapHook,
// GO(MallocHook_AddPreSbrkHook,
// GO(MallocHook_AddSbrkHook,
// GO(MallocHook_GetCallerStackTrace,
// GO(MallocHook_RemoveDeleteHook,
// GO(MallocHook_RemoveMmapHook,
// GO(MallocHook_RemoveMmapReplacement,
// GO(MallocHook_RemoveMremapHook,
// GO(MallocHook_RemoveMunmapHook,
// GO(MallocHook_RemoveMunmapReplacement,
// GO(MallocHook_RemoveNewHook,
// GO(MallocHook_RemovePreMmapHook,
// GO(MallocHook_RemovePreSbrkHook,
// GO(MallocHook_RemoveSbrkHook,
// GO(MallocHook_SetDeleteHook,
// GO(MallocHook_SetMmapHook,
// GO(MallocHook_SetMmapReplacement,
// GO(MallocHook_SetMremapHook,
// GO(MallocHook_SetMunmapHook,
// GO(MallocHook_SetMunmapReplacement,
// GO(MallocHook_SetNewHook,
// GO(MallocHook_SetPreMmapHook,
// GO(MallocHook_SetPreSbrkHook,
// GO(MallocHook_SetSbrkHook,
GO(malloc_size, LFp)
GO(malloc_stats, vFv)
GO(malloc_usable_size, LFp)
GO(mallopt, iFii)
GO(memalign, pFuu)
GOM(mmap, pFEpLiiil) // use the my_mmap from wrappedlibc.c
GOM(mmap64, pFEpLiiil)
GO(mremap, pFpuuip)
GOM(munmap, iFEpL)
GO(nallocx, LFLi)
GO(__posix_memalign, iFpuu)
GO(posix_memalign, iFpuu)
// GO(RunningOnValgrind,
GO(sbrk, pFl)
// GO(tc_calloc,
// GO(tc_cfree,
// GO(tc_delete,
// GO(tc_delete_aligned,
// GO(tc_delete_aligned_nothrow,
// GO(tc_deletearray,
// GO(tc_deletearray_aligned,
// GO(tc_deletearray_aligned_nothrow,
// GO(tc_deletearray_nothrow,
// GO(tc_deletearray_sized,
// GO(tc_deletearray_sized_aligned,
// GO(tc_delete_nothrow,
// GO(tc_delete_sized,
// GO(tc_delete_sized_aligned,
// GO(tc_free,
// GO(tc_free_sized,
// GO(tc_mallinfo,
// GO(tc_malloc,
// GO(TCMallocGetenvSafe,
// GO(tc_malloc_size,
// GO(tc_malloc_skip_new_handler,
// GO(tc_malloc_stats,
// GO(tc_mallopt,
// GO(tc_memalign,
// GO(tc_nallocx,
// GO(tc_new,
// GO(tc_new_aligned,
// GO(tc_new_aligned_nothrow,
// GO(tc_newarray,
// GO(tc_newarray_aligned,
// GO(tc_newarray_aligned_nothrow,
// GO(tc_newarray_nothrow,
// GO(tc_new_nothrow,
// GO(tc_posix_memalign,
// GO(tc_pvalloc,
// GO(tc_query_new_mode,
// GO(tc_realloc,
// GO(tc_set_new_mode,
// GO(tc_valloc,
// GO(tc_version,
// GO(ValgrindSlowdown,
GO(valloc, pFu)


// GO(_Z16GetenvBeforeMainPKc,
// GO(_Z17RawOpenForWritingPKc,
// GO(_Z18GetSystemCPUsCountv,
// GO(_Z20GetUniquePathFromEnvPKcPc,
// GO(_Z20InitSystemAllocatorsv,
// GO(_Z20SleepForMillisecondsi,
// GO(_Z20TCMalloc_SystemAllocjPjj,
// GO(_Z21TCMalloc_SystemCommitPvj,
// GO(_Z22perftools_pthread_oncePiPFvvE,
// GO(_Z22TCMalloc_SystemReleasePvj,
// GO(_Z24perftools_pthread_atforkPFvvES0_S0_,
// GO(_Z28perftools_pthread_key_createPjPFvPvE,
// GO(_Z28perftools_pthread_key_deletej,
// GO(_Z29perftools_pthread_getspecificj,
// GO(_Z29perftools_pthread_setspecificjPv,
// GO(_Z8RawClosei,
// GO(_Z8RawWriteiPKcj,
// GO(_ZdaPv,
// GO(_ZdaPvj,
// GO(_ZdaPvjSt11align_val_t,
// GO(_ZdaPvRKSt9nothrow_t,
// GO(_ZdaPvSt11align_val_t,
// GO(_ZdaPvSt11align_val_tRKSt9nothrow_t,
// GO(_ZdlPv,
// GO(_ZdlPvj,
// GO(_ZdlPvjSt11align_val_t,
// GO(_ZdlPvRKSt9nothrow_t,
// GO(_ZdlPvSt11align_val_t,
// GO(_ZdlPvSt11align_val_tRKSt9nothrow_t,
// GO(_ZN10MallocHook12UnhookedMMapEPvjiiil,
// GO(_ZN10MallocHook14UnhookedMUnmapEPvj,
// GO(_ZN10MallocHook17InvokeNewHookSlowEPKvj,
// GO(_ZN10MallocHook18InvokeMmapHookSlowEPKvS1_jiiil,
// GO(_ZN10MallocHook18InvokeSbrkHookSlowEPKvi,
// GO(_ZN10MallocHook20InvokeDeleteHookSlowEPKv,
// GO(_ZN10MallocHook20InvokeMremapHookSlowEPKvS1_jjiS1_,
// GO(_ZN10MallocHook20InvokeMunmapHookSlowEPKvj,
// GO(_ZN10MallocHook21InvokePreMmapHookSlowEPKvjiiil,
// GO(_ZN10MallocHook21InvokePreSbrkHookSlowEi,
// GO(_ZN10MallocHook25InvokeMmapReplacementSlowEPKvjiiilPPv,
// GO(_ZN10MallocHook27InvokeMunmapReplacementSlowEPKvjPi,
// GO(_ZN11SymbolTable3AddEPKv,
// GO(_ZN11SymbolTable9GetSymbolEPKv,
// GO(_ZN11SymbolTable9SymbolizeEv,
// GO(_ZN12SysAllocatorD0Ev,
// GO(_ZN12SysAllocatorD1Ev,
// GO(_ZN12SysAllocatorD2Ev,
// GO(_ZN13TCMallocGuardC1Ev,
// GO(_ZN13TCMallocGuardC2Ev,
// GO(_ZN13TCMallocGuardD1Ev,
// GO(_ZN13TCMallocGuardD2Ev,
// GO(_ZN15MallocExtension10InitializeEv,
// GO(_ZN15MallocExtension12GetOwnershipEPKv,
// GO(_ZN15MallocExtension13GetHeapSampleEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,
// GO(_ZN15MallocExtension14MarkThreadBusyEv,
// GO(_ZN15MallocExtension14MarkThreadIdleEv,
// GO(_ZN15MallocExtension15ReadStackTracesEPi,
// GO(_ZN15MallocExtension15ReleaseToSystemEj,
// GO(_ZN15MallocExtension15VerifyAllMemoryEv,
// GO(_ZN15MallocExtension15VerifyNewMemoryEPKv,
// GO(_ZN15MallocExtension16GetAllocatedSizeEPKv,
// GO(_ZN15MallocExtension16GetFreeListSizesEPSt6vectorINS_12FreeListInfoESaIS1_EE,
// GO(_ZN15MallocExtension17MallocMemoryStatsEPiPjS0_,
// GO(_ZN15MallocExtension17ReleaseFreeMemoryEv,
// GO(_ZN15MallocExtension18GetNumericPropertyEPKcPj,
// GO(_ZN15MallocExtension18GetSystemAllocatorEv,
// GO(_ZN15MallocExtension18GetThreadCacheSizeEv,
// GO(_ZN15MallocExtension18SetNumericPropertyEPKcj,
// GO(_ZN15MallocExtension18SetSystemAllocatorEP12SysAllocator,
// GO(_ZN15MallocExtension18VerifyMallocMemoryEPKv,
// GO(_ZN15MallocExtension19GetHeapGrowthStacksEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,
// GO(_ZN15MallocExtension20GetMemoryReleaseRateEv,
// GO(_ZN15MallocExtension20SetMemoryReleaseRateEd,
// GO(_ZN15MallocExtension20VerifyArrayNewMemoryEPKv,
// GO(_ZN15MallocExtension25GetEstimatedAllocatedSizeEj,
// GO(_ZN15MallocExtension25MarkThreadTemporarilyIdleEv,
// GO(_ZN15MallocExtension25ReadHeapGrowthStackTracesEv,
// GO(_ZN15MallocExtension6RangesEPvPFvS0_PKN4base11MallocRangeEE,
// GO(_ZN15MallocExtension8GetStatsEPci,
// GO(_ZN15MallocExtension8instanceEv,
// GO(_ZN15MallocExtension8RegisterEPS_,
// GO(_ZN15MallocExtensionD0Ev,
// GO(_ZN15MallocExtensionD1Ev,
// GO(_ZN15MallocExtensionD2Ev,
// GO(_ZN16MmapSysAllocator5AllocEjPjj,
// GO(_ZN16ProcMapsIterator10FormatLineEPciyyPKcyxS2_y,
// GO(_ZN16ProcMapsIterator4InitEiPNS_6BufferEb,
// GO(_ZN16ProcMapsIterator4NextEPyS0_PPcS0_PxS2_,
// GO(_ZN16ProcMapsIterator7NextExtEPyS0_PPcS0_PxS2_S0_S0_S0_S0_S0_,
// GO(_ZN16ProcMapsIteratorC1Ei,
// GO(_ZN16ProcMapsIteratorC1EiPNS_6BufferE,
// GO(_ZN16ProcMapsIteratorC1EiPNS_6BufferEb,
// GO(_ZN16ProcMapsIteratorC2Ei,
// GO(_ZN16ProcMapsIteratorC2EiPNS_6BufferE,
// GO(_ZN16ProcMapsIteratorC2EiPNS_6BufferEb,
// GO(_ZN16ProcMapsIteratorD1Ev,
// GO(_ZN16ProcMapsIteratorD2Ev,
// GO(_ZN16SbrkSysAllocator5AllocEjPjj,
// GO(_ZN16TCMalloc_Printer6printfEPKcz,
// GO(_ZN18DevMemSysAllocator5AllocEjPjj,
// GO(_ZN19DefaultSysAllocator5AllocEjPjj,
// GO(_ZN19HugetlbSysAllocator10InitializeEv,
// GO(_ZN19HugetlbSysAllocator13AllocInternalEjPjj,
// GO(_ZN19HugetlbSysAllocator5AllocEjPjj,
// GO(_ZN22TCMallocImplementation14MarkThreadBusyEv,
// GO(_ZN22TCMallocImplementation16GetAllocatedSizeEPKv,
// GO(_ZN22TCMallocImplementation25GetEstimatedAllocatedSizeEj,
// GO(_ZN4base8internal12SpinLockWakeEPVib,
// GO(_ZN4base8internal13SpinLockDelayEPViii,
// GO(_ZN8SpinLock10SlowUnlockEv,
// GO(_ZN8SpinLock8SlowLockEv,
// GO(_ZN8SpinLock8SpinLoopEv,
// GO(_ZN8tcmalloc10DeleteSpanEPNS_4SpanE,
// GO(_ZN8tcmalloc10DLL_LengthEPKNS_4SpanE,
// GO(_ZN8tcmalloc10DLL_RemoveEPNS_4SpanE,
// GO(_ZN8tcmalloc10malloc_oomEj,
// GO(_ZN8tcmalloc11DLL_PrependEPNS_4SpanES1_,
// GO(_ZN8tcmalloc11ThreadCache10BecomeIdleEv,
// GO(_ZN8tcmalloc11ThreadCache10InitModuleEv,
// GO(_ZN8tcmalloc11ThreadCache11DeleteCacheEPS0_,
// GO(_ZN8tcmalloc11ThreadCache11ListTooLongEPNS0_8FreeListEj,
// GO(_ZN8tcmalloc11ThreadCache14GetThreadStatsEPyS1_,
// GO(_ZN8tcmalloc11ThreadCache15GetSamplePeriodEv,
// GO(_ZN8tcmalloc11ThreadCache18DestroyThreadCacheEPv,
// GO(_ZN8tcmalloc11ThreadCache18IncreaseCacheLimitEv,
// GO(_ZN8tcmalloc11ThreadCache21BecomeTemporarilyIdleEv,
// GO(_ZN8tcmalloc11ThreadCache21FetchFromCentralCacheEjiPFPvjE,
// GO(_ZN8tcmalloc11ThreadCache21ReleaseToCentralCacheEPNS0_8FreeListEji,
// GO(_ZN8tcmalloc11ThreadCache22CreateCacheIfNecessaryEv,
// GO(_ZN8tcmalloc11ThreadCache24IncreaseCacheLimitLockedEv,
// GO(_ZN8tcmalloc11ThreadCache27RecomputePerThreadCacheSizeEv,
// GO(_ZN8tcmalloc11ThreadCache29set_overall_thread_cache_sizeEj,
// GO(_ZN8tcmalloc11ThreadCache4InitEm,
// GO(_ZN8tcmalloc11ThreadCache7CleanupEv,
// GO(_ZN8tcmalloc11ThreadCache7InitTSDEv,
// GO(_ZN8tcmalloc11ThreadCache7NewHeapEm,
// GO(_ZN8tcmalloc11ThreadCache8ScavengeEv,
// GO(_ZN8tcmalloc13cpp_throw_oomEj,
// GO(_ZN8tcmalloc13MetaDataAllocEj,
// GO(_ZN8tcmalloc15CentralFreeList11InsertRangeEPvS1_i,
// GO(_ZN8tcmalloc15CentralFreeList11RemoveRangeEPPvS2_i,
// GO(_ZN8tcmalloc15CentralFreeList11ShrinkCacheEib,
// GO(_ZN8tcmalloc15CentralFreeList13OverheadBytesEv,
// GO(_ZN8tcmalloc15CentralFreeList14MakeCacheSpaceEv,
// GO(_ZN8tcmalloc15CentralFreeList14ReleaseToSpansEPv,
// GO(_ZN8tcmalloc15CentralFreeList17FetchFromOneSpansEiPPvS2_,
// GO(_ZN8tcmalloc15CentralFreeList18ReleaseListToSpansEPv,
// GO(_ZN8tcmalloc15CentralFreeList20EvictRandomSizeClassEib,
// GO(_ZN8tcmalloc15CentralFreeList21FetchFromOneSpansSafeEiPPvS2_,
// GO(_ZN8tcmalloc15CentralFreeList4InitEj,
// GO(_ZN8tcmalloc15CentralFreeList8PopulateEv,
// GO(_ZN8tcmalloc15CentralFreeList9tc_lengthEv,
// GO(_ZN8tcmalloc15cpp_nothrow_oomEj,
// GO(_ZN8tcmalloc15StackTraceTable23ReadStackTracesAndClearEv,
// GO(_ZN8tcmalloc15StackTraceTable8AddTraceERKNS_10StackTraceE,
// GO(_ZN8tcmalloc15StackTraceTableC1Ev,
// GO(_ZN8tcmalloc15StackTraceTableC2Ev,
// GO(_ZN8tcmalloc15StackTraceTableD1Ev,
// GO(_ZN8tcmalloc15StackTraceTableD2Ev,
// GO(_ZN8tcmalloc16AlignmentForSizeEj,
// GO(_ZN8tcmalloc16DumpProcSelfMapsEi,
// GO(_ZN8tcmalloc16FillProcSelfMapsEPciPb,
// GO(_ZN8tcmalloc19CentralCacheLockAllEv,
// GO(_ZN8tcmalloc21CentralCacheUnlockAllEv,
// GO(_ZN8tcmalloc21metadata_system_bytesEv,
// GO(_ZN8tcmalloc24allocate_full_malloc_oomEj,
// GO(_ZN8tcmalloc27allocate_full_cpp_throw_oomEj,
// GO(_ZN8tcmalloc29allocate_full_cpp_nothrow_oomEj,
// GO(_ZN8tcmalloc3LogENS_7LogModeEPKciNS_7LogItemES3_S3_S3_,
// GO(_ZN8tcmalloc6Logger3AddERKNS_7LogItemE,
// GO(_ZN8tcmalloc6Logger6AddNumEyi,
// GO(_ZN8tcmalloc6Logger6AddStrEPKci,
// GO(_ZN8tcmalloc6Static14InitStaticVarsEv,
// GO(_ZN8tcmalloc6Static22InitLateMaybeRecursiveEv,
// GO(_ZN8tcmalloc7NewSpanEjj,
// GO(_ZN8tcmalloc7Sampler15GetSamplePeriodEv,
// GO(_ZN8tcmalloc7Sampler20RecordAllocationSlowEj,
// GO(_ZN8tcmalloc7Sampler21PickNextSamplingPointEv,
// GO(_ZN8tcmalloc7Sampler4InitEy,
// GO(_ZN8tcmalloc7SizeMap11NumMoveSizeEj,
// GO(_ZN8tcmalloc7SizeMap4InitEv,
// GO(_ZN8tcmalloc8DLL_InitEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap10AllocLargeEj,
// GO(_ZN8tcmalloc8PageHeap10CommitSpanEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap11EnsureLimitEjb,
// GO(_ZN8tcmalloc8PageHeap11ReleaseSpanEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap12DecommitSpanEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap12GetNextRangeEjPN4base11MallocRangeE,
// GO(_ZN8tcmalloc8PageHeap14CheckExpensiveEv,
// GO(_ZN8tcmalloc8PageHeap17GetLargeSpanStatsEPNS0_14LargeSpanStatsE,
// GO(_ZN8tcmalloc8PageHeap17GetSmallSpanStatsEPNS0_14SmallSpanStatsE,
// GO(_ZN8tcmalloc8PageHeap17MergeIntoFreeListEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap17PrependToFreeListEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap17RegisterSizeClassEPNS_4SpanEj,
// GO(_ZN8tcmalloc8PageHeap18RemoveFromFreeListEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap19IncrementalScavengeEj,
// GO(_ZN8tcmalloc8PageHeap20ReleaseAtLeastNPagesEj,
// GO(_ZN8tcmalloc8PageHeap22CheckAndHandlePreMergeEPNS_4SpanES2_,
// GO(_ZN8tcmalloc8PageHeap23SearchFreeAndLargeListsEj,
// GO(_ZN8tcmalloc8PageHeap3NewEj,
// GO(_ZN8tcmalloc8PageHeap5CarveEPNS_4SpanEj,
// GO(_ZN8tcmalloc8PageHeap5CheckEv,
// GO(_ZN8tcmalloc8PageHeap5SplitEPNS_4SpanEj,
// GO(_ZN8tcmalloc8PageHeap6DeleteEPNS_4SpanE,
// GO(_ZN8tcmalloc8PageHeap8CheckSetEPSt3setINS_17SpanPtrWithLengthENS_15SpanBestFitLessENS_20STLPageHeapAllocatorIS2_vEEEji,
// GO(_ZN8tcmalloc8PageHeap8GrowHeapEj,
// GO(_ZN8tcmalloc8PageHeap9CheckListEPNS_4SpanEjji,
// GO(_ZN8tcmalloc8PageHeapC1Ev,
// GO(_ZN8tcmalloc8PageHeapC2Ev,
// GO(_Znaj,
// GO(_ZnajRKSt9nothrow_t,
// GO(_ZnajSt11align_val_t,
// GO(_ZnajSt11align_val_tRKSt9nothrow_t,
// GO(_ZNK16ProcMapsIterator5ValidEv,
// GO(_ZNK8tcmalloc15StackTraceTable6Bucket8KeyEqualEjRKNS_10StackTraceE,
// GO(_Znwj,
// GO(_ZnwjRKSt9nothrow_t,
// GO(_ZnwjSt11align_val_t,
// GO(_ZnwjSt11align_val_tRKSt9nothrow_t,

// DATAB(tcmalloc_sys_alloc,
// DATAB(TCMalloc_SystemTaken,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead22FLAGS_malloc_skip_mmapE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead22FLAGS_malloc_skip_sbrkE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead24FLAGS_nomalloc_skip_mmapE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead24FLAGS_nomalloc_skip_sbrkE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead30FLAGS_memfs_malloc_map_privateE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead32FLAGS_memfs_malloc_abort_on_failE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead32FLAGS_nomemfs_malloc_map_privateE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead34FLAGS_nomemfs_malloc_abort_on_failE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead35FLAGS_malloc_disable_memory_releaseE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead35FLAGS_memfs_malloc_ignore_mmap_failE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead37FLAGS_nomalloc_disable_memory_releaseE,
// DATAB(_ZN60FLAG__namespace_do_not_use_directly_use_DECLARE_bool_instead37FLAGS_nomemfs_malloc_ignore_mmap_failE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int32_instead13FLAGS_verboseE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int32_instead15FLAGS_noverboseE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int32_instead25FLAGS_malloc_devmem_limitE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int32_instead25FLAGS_malloc_devmem_startE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int32_instead27FLAGS_nomalloc_devmem_limitE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int32_instead27FLAGS_nomalloc_devmem_startE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead27FLAGS_memfs_malloc_limit_mbE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead28FLAGS_tcmalloc_heap_limit_mbE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead29FLAGS_nomemfs_malloc_limit_mbE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead30FLAGS_notcmalloc_heap_limit_mbE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead31FLAGS_tcmalloc_sample_parameterE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead33FLAGS_notcmalloc_sample_parameterE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead43FLAGS_tcmalloc_large_alloc_report_thresholdE,
// DATAB(_ZN61FLAG__namespace_do_not_use_directly_use_DECLARE_int64_instead45FLAGS_notcmalloc_large_alloc_report_thresholdE,
// DATAB(_ZN62FLAG__namespace_do_not_use_directly_use_DECLARE_double_instead27FLAGS_tcmalloc_release_rateE,
// DATAB(_ZN62FLAG__namespace_do_not_use_directly_use_DECLARE_double_instead29FLAGS_notcmalloc_release_rateE,
// DATAB(_ZN62FLAG__namespace_do_not_use_directly_use_DECLARE_string_instead21FLAGS_symbolize_pprofB5cxx11E,
// DATAB(_ZN62FLAG__namespace_do_not_use_directly_use_DECLARE_string_instead23FLAGS_memfs_malloc_pathB5cxx11E,
// DATAB(_ZN62FLAG__namespace_do_not_use_directly_use_DECLARE_string_instead23FLAGS_nosymbolize_pprofE,
// DATAB(_ZN62FLAG__namespace_do_not_use_directly_use_DECLARE_string_instead25FLAGS_nomemfs_malloc_pathE,
// DATAB(_ZN8tcmalloc11ThreadCache13thread_heaps_E,
// DATAB(_ZN8tcmalloc11ThreadCache17threadlocal_data_E,
// DATAB(_ZN8tcmalloc11ThreadCache18next_memory_steal_E,
// DATAB(_ZN8tcmalloc11ThreadCache18thread_heap_count_E,
// DATAB(_ZN8tcmalloc11ThreadCache9heap_key_E,
// DATAB(_ZN8tcmalloc21threadcache_allocatorE,
// DATAB(_ZN8tcmalloc6Static14pageheap_lock_E,
// DATAB(_ZN8tcmalloc6Static7inited_E,

// GOW(MallocHook_InitAtFirstAllocation_HeapLeakChecker,
// GOW(_Z24tc_get_sysalloc_overrideP12SysAllocator,
// GOW(_Z7RAW_LOGiPKcz,
// GOW(_Z8RAW_VLOGiPKcz,
// GOW(_Z9LogPrintfiPKcSt9__va_list,
// GOW(_ZN16MmapSysAllocatorD0Ev,
// GOW(_ZN16MmapSysAllocatorD1Ev,
// GOW(_ZN16MmapSysAllocatorD2Ev,
// GOW(_ZN16SbrkSysAllocatorD0Ev,
// GOW(_ZN16SbrkSysAllocatorD1Ev,
// GOW(_ZN16SbrkSysAllocatorD2Ev,
// GOW(_ZN17GoogleInitializerD1Ev,
// GOW(_ZN17GoogleInitializerD2Ev,
// GOW(_ZN18DevMemSysAllocatorD0Ev,
// GOW(_ZN18DevMemSysAllocatorD1Ev,
// GOW(_ZN18DevMemSysAllocatorD2Ev,
// GOW(_ZN19DefaultSysAllocatorD0Ev,
// GOW(_ZN19DefaultSysAllocatorD1Ev,
// GOW(_ZN19DefaultSysAllocatorD2Ev,
// GOW(_ZN19HugetlbSysAllocatorD0Ev,
// GOW(_ZN19HugetlbSysAllocatorD1Ev,
// GOW(_ZN19HugetlbSysAllocatorD2Ev,
// GOW(_ZN22TCMallocImplementation12GetOwnershipEPKv,
// GOW(_ZN22TCMallocImplementation13GetHeapSampleEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,
// GOW(_ZN22TCMallocImplementation14MarkThreadIdleEv,
// GOW(_ZN22TCMallocImplementation15ReadStackTracesEPi,
// GOW(_ZN22TCMallocImplementation15ReleaseToSystemEj,
// GOW(_ZN22TCMallocImplementation16GetFreeListSizesEPSt6vectorIN15MallocExtension12FreeListInfoESaIS2_EE,
// GOW(_ZN22TCMallocImplementation18GetNumericPropertyEPKcPj,
// GOW(_ZN22TCMallocImplementation18GetSystemAllocatorEv,
// GOW(_ZN22TCMallocImplementation18GetThreadCacheSizeEv,
// GOW(_ZN22TCMallocImplementation18SetNumericPropertyEPKcj,
// GOW(_ZN22TCMallocImplementation18SetSystemAllocatorEP12SysAllocator,
// GOW(_ZN22TCMallocImplementation20GetMemoryReleaseRateEv,
// GOW(_ZN22TCMallocImplementation20SetMemoryReleaseRateEd,
// GOW(_ZN22TCMallocImplementation25MarkThreadTemporarilyIdleEv,
// GOW(_ZN22TCMallocImplementation25ReadHeapGrowthStackTracesEv,
// GOW(_ZN22TCMallocImplementation6RangesEPvPFvS0_PKN4base11MallocRangeEE,
// GOW(_ZN22TCMallocImplementation8GetStatsEPci,
// GOW(_ZN22TCMallocImplementationD0Ev,
// GOW(_ZN22TCMallocImplementationD1Ev,
// GOW(_ZN22TCMallocImplementationD2Ev,
// GOW(_ZN4base8internal8HookListIPFvPKvjEE16ExchangeSingularES5_,
// GOW(_ZN4base8internal8HookListIPFvPKvjEE18FixupPrivEndLockedEv,
// GOW(_ZN4base8internal8HookListIPFvPKvjEE3AddES5_,
// GOW(_ZN4base8internal8HookListIPFvPKvjEE6RemoveES5_,
// GOW(_ZN8SpinLock4LockEv,
// GOW(_ZN8SpinLock6UnlockEv,
// GOW(_ZNK4base8internal8HookListIPFvPKvjEE11GetSingularEv,
// GOW(_ZNK4base8internal8HookListIPFvPKvjEE5emptyEv,
// GOW(_ZNK4base8internal8HookListIPFvPKvjEE8TraverseEPS5_i,
// GOW(_ZNSt6vectorIN15MallocExtension12FreeListInfoESaIS1_EE17_M_realloc_insertIJRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_,
// GOW(_ZNSt8_Rb_treeIN8tcmalloc17SpanPtrWithLengthES1_St9_IdentityIS1_ENS0_15SpanBestFitLessENS0_20STLPageHeapAllocatorIS1_vEEE16_M_insert_uniqueIS1_EESt4pairISt17_Rb_tree_iteratorIS1_EbEOT_,
// GOW(_ZNSt8_Rb_treeIN8tcmalloc17SpanPtrWithLengthES1_St9_IdentityIS1_ENS0_15SpanBestFitLessENS0_20STLPageHeapAllocatorIS1_vEEE8_M_eraseEPSt13_Rb_tree_nodeIS1_E,
// GOW(_ZNSt8_Rb_treeIPKvSt4pairIKS1_PKcESt10_Select1stIS6_ESt4lessIS1_ESaIS6_EE24_M_get_insert_unique_posERS3_,
