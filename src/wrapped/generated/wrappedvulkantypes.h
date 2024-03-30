/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedvulkanTYPES_H_
#define __wrappedvulkanTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);
typedef void* (*pFpp_t)(void*, void*);
typedef void (*vFpUp_t)(void*, uint64_t, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFpUp_t)(void*, uint64_t, void*);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFpUup_t)(void*, uint64_t, uint32_t, void*);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef void (*vFpupup_t)(void*, uint32_t, void*, uint32_t, void*);
typedef int32_t (*iFpuppp_t)(void*, uint32_t, void*, void*, void*);
typedef int32_t (*iFpUppp_t)(void*, uint64_t, void*, void*, void*);
typedef int32_t (*iFpUuppp_t)(void*, uint64_t, uint32_t, void*, void*, void*);
typedef int32_t (*iFpUUuppp_t)(void*, uint64_t, uint64_t, uint32_t, void*, void*, void*);
typedef void (*vFpiiiiipp_t)(void*, int32_t, int32_t, int32_t, int32_t, int32_t, void*, void*);
typedef void (*vFpiiiupupup_t)(void*, int32_t, int32_t, int32_t, uint32_t, void*, uint32_t, void*, uint32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(vkDestroyDevice, vFpp_t) \
	GO(vkDestroyInstance, vFpp_t) \
	GO(vkGetPhysicalDeviceMemoryProperties, vFpp_t) \
	GO(vkGetPhysicalDeviceProperties, vFpp_t) \
	GO(vkGetDeviceProcAddr, pFpp_t) \
	GO(vkGetInstanceProcAddr, pFpp_t) \
	GO(vkDestroyAccelerationStructureKHR, vFpUp_t) \
	GO(vkDestroyAccelerationStructureNV, vFpUp_t) \
	GO(vkDestroyBuffer, vFpUp_t) \
	GO(vkDestroyBufferView, vFpUp_t) \
	GO(vkDestroyCommandPool, vFpUp_t) \
	GO(vkDestroyCuFunctionNVX, vFpUp_t) \
	GO(vkDestroyCuModuleNVX, vFpUp_t) \
	GO(vkDestroyCudaFunctionNV, vFpUp_t) \
	GO(vkDestroyCudaModuleNV, vFpUp_t) \
	GO(vkDestroyDeferredOperationKHR, vFpUp_t) \
	GO(vkDestroyDescriptorPool, vFpUp_t) \
	GO(vkDestroyDescriptorSetLayout, vFpUp_t) \
	GO(vkDestroyDescriptorUpdateTemplate, vFpUp_t) \
	GO(vkDestroyDescriptorUpdateTemplateKHR, vFpUp_t) \
	GO(vkDestroyEvent, vFpUp_t) \
	GO(vkDestroyFence, vFpUp_t) \
	GO(vkDestroyFramebuffer, vFpUp_t) \
	GO(vkDestroyImage, vFpUp_t) \
	GO(vkDestroyImageView, vFpUp_t) \
	GO(vkDestroyIndirectCommandsLayoutNV, vFpUp_t) \
	GO(vkDestroyMicromapEXT, vFpUp_t) \
	GO(vkDestroyOpticalFlowSessionNV, vFpUp_t) \
	GO(vkDestroyPipeline, vFpUp_t) \
	GO(vkDestroyPipelineCache, vFpUp_t) \
	GO(vkDestroyPipelineLayout, vFpUp_t) \
	GO(vkDestroyPrivateDataSlot, vFpUp_t) \
	GO(vkDestroyPrivateDataSlotEXT, vFpUp_t) \
	GO(vkDestroyQueryPool, vFpUp_t) \
	GO(vkDestroyRenderPass, vFpUp_t) \
	GO(vkDestroySampler, vFpUp_t) \
	GO(vkDestroySamplerYcbcrConversion, vFpUp_t) \
	GO(vkDestroySamplerYcbcrConversionKHR, vFpUp_t) \
	GO(vkDestroySemaphore, vFpUp_t) \
	GO(vkDestroyShaderEXT, vFpUp_t) \
	GO(vkDestroyShaderModule, vFpUp_t) \
	GO(vkDestroySurfaceKHR, vFpUp_t) \
	GO(vkDestroySwapchainKHR, vFpUp_t) \
	GO(vkDestroyValidationCacheEXT, vFpUp_t) \
	GO(vkDestroyVideoSessionKHR, vFpUp_t) \
	GO(vkDestroyVideoSessionParametersKHR, vFpUp_t) \
	GO(vkDestroyDebugUtilsMessengerEXT, vFppp_t) \
	GO(vkFreeMemory, iFpUp_t) \
	GO(vkCreateDeferredOperationKHR, iFppp_t) \
	GO(vkCreateInstance, iFppp_t) \
	GO(vkDestroyDebugReportCallbackEXT, iFppp_t) \
	GO(vkGetPhysicalDeviceDisplayPropertiesKHR, iFppp_t) \
	GO(vkGetDisplayPlaneCapabilitiesKHR, iFpUup_t) \
	GO(vkAllocateMemory, iFpppp_t) \
	GO(vkCreateAccelerationStructureKHR, iFpppp_t) \
	GO(vkCreateAccelerationStructureNV, iFpppp_t) \
	GO(vkCreateBuffer, iFpppp_t) \
	GO(vkCreateBufferView, iFpppp_t) \
	GO(vkCreateCommandPool, iFpppp_t) \
	GO(vkCreateCuFunctionNVX, iFpppp_t) \
	GO(vkCreateCuModuleNVX, iFpppp_t) \
	GO(vkCreateCudaFunctionNV, iFpppp_t) \
	GO(vkCreateCudaModuleNV, iFpppp_t) \
	GO(vkCreateDebugReportCallbackEXT, iFpppp_t) \
	GO(vkCreateDebugUtilsMessengerEXT, iFpppp_t) \
	GO(vkCreateDescriptorPool, iFpppp_t) \
	GO(vkCreateDescriptorSetLayout, iFpppp_t) \
	GO(vkCreateDescriptorUpdateTemplate, iFpppp_t) \
	GO(vkCreateDescriptorUpdateTemplateKHR, iFpppp_t) \
	GO(vkCreateDevice, iFpppp_t) \
	GO(vkCreateDisplayPlaneSurfaceKHR, iFpppp_t) \
	GO(vkCreateEvent, iFpppp_t) \
	GO(vkCreateFence, iFpppp_t) \
	GO(vkCreateFramebuffer, iFpppp_t) \
	GO(vkCreateHeadlessSurfaceEXT, iFpppp_t) \
	GO(vkCreateImage, iFpppp_t) \
	GO(vkCreateImageView, iFpppp_t) \
	GO(vkCreateIndirectCommandsLayoutNV, iFpppp_t) \
	GO(vkCreateMicromapEXT, iFpppp_t) \
	GO(vkCreateOpticalFlowSessionNV, iFpppp_t) \
	GO(vkCreatePipelineCache, iFpppp_t) \
	GO(vkCreatePipelineLayout, iFpppp_t) \
	GO(vkCreatePrivateDataSlot, iFpppp_t) \
	GO(vkCreatePrivateDataSlotEXT, iFpppp_t) \
	GO(vkCreateQueryPool, iFpppp_t) \
	GO(vkCreateRenderPass, iFpppp_t) \
	GO(vkCreateRenderPass2, iFpppp_t) \
	GO(vkCreateRenderPass2KHR, iFpppp_t) \
	GO(vkCreateSampler, iFpppp_t) \
	GO(vkCreateSamplerYcbcrConversion, iFpppp_t) \
	GO(vkCreateSamplerYcbcrConversionKHR, iFpppp_t) \
	GO(vkCreateSemaphore, iFpppp_t) \
	GO(vkCreateShaderModule, iFpppp_t) \
	GO(vkCreateSwapchainKHR, iFpppp_t) \
	GO(vkCreateValidationCacheEXT, iFpppp_t) \
	GO(vkCreateVideoSessionKHR, iFpppp_t) \
	GO(vkCreateVideoSessionParametersKHR, iFpppp_t) \
	GO(vkCreateWaylandSurfaceKHR, iFpppp_t) \
	GO(vkCreateXcbSurfaceKHR, iFpppp_t) \
	GO(vkCreateXlibSurfaceKHR, iFpppp_t) \
	GO(vkRegisterDeviceEventEXT, iFpppp_t) \
	GO(vkUpdateDescriptorSets, vFpupup_t) \
	GO(vkCreateShadersEXT, iFpuppp_t) \
	GO(vkCreateSharedSwapchainsKHR, iFpuppp_t) \
	GO(vkCreateDisplayModeKHR, iFpUppp_t) \
	GO(vkRegisterDisplayEventEXT, iFpUppp_t) \
	GO(vkCreateComputePipelines, iFpUuppp_t) \
	GO(vkCreateGraphicsPipelines, iFpUuppp_t) \
	GO(vkCreateRayTracingPipelinesNV, iFpUuppp_t) \
	GO(vkCreateRayTracingPipelinesKHR, iFpUUuppp_t) \
	GO(vkGetPhysicalDeviceSparseImageFormatProperties, vFpiiiiipp_t) \
	GO(vkCmdPipelineBarrier, vFpiiiupupup_t)

#endif // __wrappedvulkanTYPES_H_
