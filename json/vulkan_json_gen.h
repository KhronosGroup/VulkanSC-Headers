
/*
** Copyright 2020-2025 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/


/********************************************************************************************/
/** This code is generated. To make changes, please modify the scripts or the relevant xml **/
/********************************************************************************************/

#pragma once

#include <stdio.h>
#include <vulkan/vulkan.h>

const char* getJSONOutput(void);
void resetJSONOutput(void);

/*************************************** Begin prototypes ***********************************/
void print_VkSampleMask(const VkSampleMask* obj, const char* str, int commaNeeded);
void print_VkBool32(const VkBool32* obj, const char* str, int commaNeeded);
void print_VkFlags(const VkFlags* obj, const char* str, int commaNeeded);
#ifdef VK_KHR_synchronization2
void print_VkFlags64(const VkFlags64* obj, const char* str, int commaNeeded);
#endif
void print_VkDeviceSize(const VkDeviceSize* obj, const char* str, int commaNeeded);
void print_VkDeviceAddress(const VkDeviceAddress* obj, const char* str, int commaNeeded);
void print_VkFramebufferCreateFlags(const VkFramebufferCreateFlags* obj, const char* str, int commaNeeded);
void print_VkQueryPoolCreateFlags(const VkQueryPoolCreateFlags* obj, const char* str, int commaNeeded);
void print_VkRenderPassCreateFlags(const VkRenderPassCreateFlags* obj, const char* str, int commaNeeded);
void print_VkSamplerCreateFlags(const VkSamplerCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineLayoutCreateFlags(const VkPipelineLayoutCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineCacheCreateFlags(const VkPipelineCacheCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineDepthStencilStateCreateFlags(const VkPipelineDepthStencilStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineDynamicStateCreateFlags(const VkPipelineDynamicStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineColorBlendStateCreateFlags(const VkPipelineColorBlendStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineMultisampleStateCreateFlags(const VkPipelineMultisampleStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineRasterizationStateCreateFlags(const VkPipelineRasterizationStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineViewportStateCreateFlags(const VkPipelineViewportStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineTessellationStateCreateFlags(const VkPipelineTessellationStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineInputAssemblyStateCreateFlags(const VkPipelineInputAssemblyStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineVertexInputStateCreateFlags(const VkPipelineVertexInputStateCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineShaderStageCreateFlags(const VkPipelineShaderStageCreateFlags* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetLayoutCreateFlags(const VkDescriptorSetLayoutCreateFlags* obj, const char* str, int commaNeeded);
void print_VkBufferViewCreateFlags(const VkBufferViewCreateFlags* obj, const char* str, int commaNeeded);
void print_VkInstanceCreateFlags(const VkInstanceCreateFlags* obj, const char* str, int commaNeeded);
void print_VkDeviceCreateFlags(const VkDeviceCreateFlags* obj, const char* str, int commaNeeded);
void print_VkDeviceQueueCreateFlags(const VkDeviceQueueCreateFlags* obj, const char* str, int commaNeeded);
void print_VkQueueFlags(const VkQueueFlags* obj, const char* str, int commaNeeded);
void print_VkMemoryPropertyFlags(const VkMemoryPropertyFlags* obj, const char* str, int commaNeeded);
void print_VkMemoryHeapFlags(const VkMemoryHeapFlags* obj, const char* str, int commaNeeded);
void print_VkAccessFlags(const VkAccessFlags* obj, const char* str, int commaNeeded);
void print_VkBufferUsageFlags(const VkBufferUsageFlags* obj, const char* str, int commaNeeded);
void print_VkBufferCreateFlags(const VkBufferCreateFlags* obj, const char* str, int commaNeeded);
void print_VkShaderStageFlags(const VkShaderStageFlags* obj, const char* str, int commaNeeded);
void print_VkImageUsageFlags(const VkImageUsageFlags* obj, const char* str, int commaNeeded);
void print_VkImageCreateFlags(const VkImageCreateFlags* obj, const char* str, int commaNeeded);
void print_VkImageViewCreateFlags(const VkImageViewCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineCreateFlags(const VkPipelineCreateFlags* obj, const char* str, int commaNeeded);
void print_VkColorComponentFlags(const VkColorComponentFlags* obj, const char* str, int commaNeeded);
void print_VkFenceCreateFlags(const VkFenceCreateFlags* obj, const char* str, int commaNeeded);
void print_VkSemaphoreCreateFlags(const VkSemaphoreCreateFlags* obj, const char* str, int commaNeeded);
void print_VkFormatFeatureFlags(const VkFormatFeatureFlags* obj, const char* str, int commaNeeded);
void print_VkQueryControlFlags(const VkQueryControlFlags* obj, const char* str, int commaNeeded);
void print_VkQueryResultFlags(const VkQueryResultFlags* obj, const char* str, int commaNeeded);
void print_VkEventCreateFlags(const VkEventCreateFlags* obj, const char* str, int commaNeeded);
void print_VkCommandPoolCreateFlags(const VkCommandPoolCreateFlags* obj, const char* str, int commaNeeded);
void print_VkCommandPoolResetFlags(const VkCommandPoolResetFlags* obj, const char* str, int commaNeeded);
void print_VkCommandBufferResetFlags(const VkCommandBufferResetFlags* obj, const char* str, int commaNeeded);
void print_VkCommandBufferUsageFlags(const VkCommandBufferUsageFlags* obj, const char* str, int commaNeeded);
void print_VkQueryPipelineStatisticFlags(const VkQueryPipelineStatisticFlags* obj, const char* str, int commaNeeded);
void print_VkMemoryMapFlags(const VkMemoryMapFlags* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_4
void print_VkMemoryUnmapFlags(const VkMemoryUnmapFlags* obj, const char* str, int commaNeeded);
#endif
void print_VkImageAspectFlags(const VkImageAspectFlags* obj, const char* str, int commaNeeded);
void print_VkSubpassDescriptionFlags(const VkSubpassDescriptionFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineStageFlags(const VkPipelineStageFlags* obj, const char* str, int commaNeeded);
void print_VkSampleCountFlags(const VkSampleCountFlags* obj, const char* str, int commaNeeded);
void print_VkAttachmentDescriptionFlags(const VkAttachmentDescriptionFlags* obj, const char* str, int commaNeeded);
void print_VkStencilFaceFlags(const VkStencilFaceFlags* obj, const char* str, int commaNeeded);
void print_VkCullModeFlags(const VkCullModeFlags* obj, const char* str, int commaNeeded);
void print_VkDescriptorPoolCreateFlags(const VkDescriptorPoolCreateFlags* obj, const char* str, int commaNeeded);
void print_VkDescriptorPoolResetFlags(const VkDescriptorPoolResetFlags* obj, const char* str, int commaNeeded);
void print_VkDependencyFlags(const VkDependencyFlags* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_1
void print_VkSubgroupFeatureFlags(const VkSubgroupFeatureFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPrivateDataSlotCreateFlags(const VkPrivateDataSlotCreateFlags* obj, const char* str, int commaNeeded);
void print_VkPipelineCreationFeedbackFlags(const VkPipelineCreationFeedbackFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_performance_query
void print_VkPerformanceCounterDescriptionFlagsKHR(const VkPerformanceCounterDescriptionFlagsKHR* obj, const char* str, int commaNeeded);
void print_VkAcquireProfilingLockFlagsKHR(const VkAcquireProfilingLockFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkSemaphoreWaitFlags(const VkSemaphoreWaitFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_object_refresh
void print_VkRefreshObjectFlagsKHR(const VkRefreshObjectFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkAccessFlags2(const VkAccessFlags2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkAccessFlags2KHR(const VkAccessFlags2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPipelineStageFlags2(const VkPipelineStageFlags2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkPipelineStageFlags2KHR(const VkPipelineStageFlags2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkFormatFeatureFlags2(const VkFormatFeatureFlags2* obj, const char* str, int commaNeeded);
void print_VkRenderingFlags(const VkRenderingFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPipelineCreateFlags2(const VkPipelineCreateFlags2* obj, const char* str, int commaNeeded);
void print_VkBufferUsageFlags2(const VkBufferUsageFlags2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_surface
void print_VkCompositeAlphaFlagsKHR(const VkCompositeAlphaFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_display
void print_VkDisplayPlaneAlphaFlagsKHR(const VkDisplayPlaneAlphaFlagsKHR* obj, const char* str, int commaNeeded);
void print_VkSurfaceTransformFlagsKHR(const VkSurfaceTransformFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_swapchain
void print_VkSwapchainCreateFlagsKHR(const VkSwapchainCreateFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_display
void print_VkDisplayModeCreateFlagsKHR(const VkDisplayModeCreateFlagsKHR* obj, const char* str, int commaNeeded);
void print_VkDisplaySurfaceCreateFlagsKHR(const VkDisplaySurfaceCreateFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_headless_surface
void print_VkHeadlessSurfaceCreateFlagsEXT(const VkHeadlessSurfaceCreateFlagsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPeerMemoryFeatureFlags(const VkPeerMemoryFeatureFlags* obj, const char* str, int commaNeeded);
void print_VkMemoryAllocateFlags(const VkMemoryAllocateFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_swapchain
void print_VkDeviceGroupPresentModeFlagsKHR(const VkDeviceGroupPresentModeFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkExternalMemoryHandleTypeFlags(const VkExternalMemoryHandleTypeFlags* obj, const char* str, int commaNeeded);
void print_VkExternalMemoryFeatureFlags(const VkExternalMemoryFeatureFlags* obj, const char* str, int commaNeeded);
void print_VkExternalSemaphoreHandleTypeFlags(const VkExternalSemaphoreHandleTypeFlags* obj, const char* str, int commaNeeded);
void print_VkExternalSemaphoreFeatureFlags(const VkExternalSemaphoreFeatureFlags* obj, const char* str, int commaNeeded);
void print_VkSemaphoreImportFlags(const VkSemaphoreImportFlags* obj, const char* str, int commaNeeded);
void print_VkExternalFenceHandleTypeFlags(const VkExternalFenceHandleTypeFlags* obj, const char* str, int commaNeeded);
void print_VkExternalFenceFeatureFlags(const VkExternalFenceFeatureFlags* obj, const char* str, int commaNeeded);
void print_VkFenceImportFlags(const VkFenceImportFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_display_surface_counter
void print_VkSurfaceCounterFlagsEXT(const VkSurfaceCounterFlagsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_discard_rectangles
void print_VkPipelineDiscardRectangleStateCreateFlagsEXT(const VkPipelineDiscardRectangleStateCreateFlagsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_debug_utils
void print_VkDebugUtilsMessageSeverityFlagsEXT(const VkDebugUtilsMessageSeverityFlagsEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsMessageTypeFlagsEXT(const VkDebugUtilsMessageTypeFlagsEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsMessengerCreateFlagsEXT(const VkDebugUtilsMessengerCreateFlagsEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsMessengerCallbackDataFlagsEXT(const VkDebugUtilsMessengerCallbackDataFlagsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_conservative_rasterization
void print_VkPipelineRasterizationConservativeStateCreateFlagsEXT(const VkPipelineRasterizationConservativeStateCreateFlagsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkDescriptorBindingFlags(const VkDescriptorBindingFlags* obj, const char* str, int commaNeeded);
void print_VkResolveModeFlags(const VkResolveModeFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_depth_clip_enable
void print_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(const VkPipelineRasterizationDepthClipStateCreateFlagsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkToolPurposeFlags(const VkToolPurposeFlags* obj, const char* str, int commaNeeded);
void print_VkSubmitFlags(const VkSubmitFlags* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkSubmitFlagsKHR(const VkSubmitFlagsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkHostImageCopyFlags(const VkHostImageCopyFlags* obj, const char* str, int commaNeeded);
#endif
void print_VkInstance(const VkInstance* obj, const char* str, int commaNeeded);
void print_VkPhysicalDevice(const VkPhysicalDevice* obj, const char* str, int commaNeeded);
void print_VkDevice(const VkDevice* obj, const char* str, int commaNeeded);
void print_VkQueue(const VkQueue* obj, const char* str, int commaNeeded);
void print_VkCommandBuffer(const VkCommandBuffer* obj, const char* str, int commaNeeded);
void print_VkDeviceMemory(const VkDeviceMemory* obj, const char* str, int commaNeeded);
void print_VkCommandPool(const VkCommandPool* obj, const char* str, int commaNeeded);
void print_VkBuffer(const VkBuffer* obj, const char* str, int commaNeeded);
void print_VkBufferView(const VkBufferView* obj, const char* str, int commaNeeded);
void print_VkImage(const VkImage* obj, const char* str, int commaNeeded);
void print_VkImageView(const VkImageView* obj, const char* str, int commaNeeded);
void print_VkShaderModule(const VkShaderModule* obj, const char* str, int commaNeeded);
void print_VkPipeline(const VkPipeline* obj, const char* str, int commaNeeded);
void print_VkPipelineLayout(const VkPipelineLayout* obj, const char* str, int commaNeeded);
void print_VkSampler(const VkSampler* obj, const char* str, int commaNeeded);
void print_VkDescriptorSet(const VkDescriptorSet* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetLayout(const VkDescriptorSetLayout* obj, const char* str, int commaNeeded);
void print_VkDescriptorPool(const VkDescriptorPool* obj, const char* str, int commaNeeded);
void print_VkFence(const VkFence* obj, const char* str, int commaNeeded);
void print_VkSemaphore(const VkSemaphore* obj, const char* str, int commaNeeded);
void print_VkEvent(const VkEvent* obj, const char* str, int commaNeeded);
void print_VkQueryPool(const VkQueryPool* obj, const char* str, int commaNeeded);
void print_VkFramebuffer(const VkFramebuffer* obj, const char* str, int commaNeeded);
void print_VkRenderPass(const VkRenderPass* obj, const char* str, int commaNeeded);
void print_VkPipelineCache(const VkPipelineCache* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_1
void print_VkSamplerYcbcrConversion(const VkSamplerYcbcrConversion* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPrivateDataSlot(const VkPrivateDataSlot* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_display
void print_VkDisplayKHR(const VkDisplayKHR* obj, const char* str, int commaNeeded);
void print_VkDisplayModeKHR(const VkDisplayModeKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_surface
void print_VkSurfaceKHR(const VkSurfaceKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_swapchain
void print_VkSwapchainKHR(const VkSwapchainKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_debug_utils
void print_VkDebugUtilsMessengerEXT(const VkDebugUtilsMessengerEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_sci_sync2
void print_VkSemaphoreSciSyncPoolNV(const VkSemaphoreSciSyncPoolNV* obj, const char* str, int commaNeeded);
#endif
void print_VkAttachmentLoadOp(const VkAttachmentLoadOp* obj, const char* str, int commaNeeded);
void print_VkAttachmentStoreOp(const VkAttachmentStoreOp* obj, const char* str, int commaNeeded);
void print_VkBlendFactor(const VkBlendFactor* obj, const char* str, int commaNeeded);
void print_VkBlendOp(const VkBlendOp* obj, const char* str, int commaNeeded);
void print_VkBorderColor(const VkBorderColor* obj, const char* str, int commaNeeded);
void print_VkFramebufferCreateFlagBits(const VkFramebufferCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkQueryPoolCreateFlagBits(const VkQueryPoolCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkRenderPassCreateFlagBits(const VkRenderPassCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkSamplerCreateFlagBits(const VkSamplerCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkPipelineCacheHeaderVersion(const VkPipelineCacheHeaderVersion* obj, const char* str, int commaNeeded);
#ifdef VKSC_VERSION_1_0
void print_VkPipelineCacheCreateFlagBits(const VkPipelineCacheCreateFlagBits* obj, const char* str, int commaNeeded);
#endif
void print_VkPipelineShaderStageCreateFlagBits(const VkPipelineShaderStageCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetLayoutCreateFlagBits(const VkDescriptorSetLayoutCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkInstanceCreateFlagBits(const VkInstanceCreateFlagBits* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_1
void print_VkDeviceQueueCreateFlagBits(const VkDeviceQueueCreateFlagBits* obj, const char* str, int commaNeeded);
#endif
void print_VkBufferCreateFlagBits(const VkBufferCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkBufferUsageFlagBits(const VkBufferUsageFlagBits* obj, const char* str, int commaNeeded);
void print_VkColorComponentFlagBits(const VkColorComponentFlagBits* obj, const char* str, int commaNeeded);
void print_VkComponentSwizzle(const VkComponentSwizzle* obj, const char* str, int commaNeeded);
void print_VkCommandPoolCreateFlagBits(const VkCommandPoolCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkCommandPoolResetFlagBits(const VkCommandPoolResetFlagBits* obj, const char* str, int commaNeeded);
void print_VkCommandBufferResetFlagBits(const VkCommandBufferResetFlagBits* obj, const char* str, int commaNeeded);
void print_VkCommandBufferLevel(const VkCommandBufferLevel* obj, const char* str, int commaNeeded);
void print_VkCommandBufferUsageFlagBits(const VkCommandBufferUsageFlagBits* obj, const char* str, int commaNeeded);
void print_VkCompareOp(const VkCompareOp* obj, const char* str, int commaNeeded);
void print_VkCullModeFlagBits(const VkCullModeFlagBits* obj, const char* str, int commaNeeded);
void print_VkDescriptorType(const VkDescriptorType* obj, const char* str, int commaNeeded);
void print_VkDynamicState(const VkDynamicState* obj, const char* str, int commaNeeded);
void print_VkFenceCreateFlagBits(const VkFenceCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkPolygonMode(const VkPolygonMode* obj, const char* str, int commaNeeded);
void print_VkFormat(const VkFormat* obj, const char* str, int commaNeeded);
void print_VkFormatFeatureFlagBits(const VkFormatFeatureFlagBits* obj, const char* str, int commaNeeded);
void print_VkFrontFace(const VkFrontFace* obj, const char* str, int commaNeeded);
void print_VkMemoryMapFlagBits(const VkMemoryMapFlagBits* obj, const char* str, int commaNeeded);
void print_VkImageAspectFlagBits(const VkImageAspectFlagBits* obj, const char* str, int commaNeeded);
void print_VkImageCreateFlagBits(const VkImageCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkImageLayout(const VkImageLayout* obj, const char* str, int commaNeeded);
void print_VkImageTiling(const VkImageTiling* obj, const char* str, int commaNeeded);
void print_VkImageType(const VkImageType* obj, const char* str, int commaNeeded);
void print_VkImageUsageFlagBits(const VkImageUsageFlagBits* obj, const char* str, int commaNeeded);
void print_VkImageViewCreateFlagBits(const VkImageViewCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkImageViewType(const VkImageViewType* obj, const char* str, int commaNeeded);
void print_VkSharingMode(const VkSharingMode* obj, const char* str, int commaNeeded);
void print_VkIndexType(const VkIndexType* obj, const char* str, int commaNeeded);
void print_VkLogicOp(const VkLogicOp* obj, const char* str, int commaNeeded);
void print_VkMemoryHeapFlagBits(const VkMemoryHeapFlagBits* obj, const char* str, int commaNeeded);
void print_VkAccessFlagBits(const VkAccessFlagBits* obj, const char* str, int commaNeeded);
void print_VkMemoryPropertyFlagBits(const VkMemoryPropertyFlagBits* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceType(const VkPhysicalDeviceType* obj, const char* str, int commaNeeded);
void print_VkPipelineBindPoint(const VkPipelineBindPoint* obj, const char* str, int commaNeeded);
void print_VkPipelineCreateFlagBits(const VkPipelineCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkPrimitiveTopology(const VkPrimitiveTopology* obj, const char* str, int commaNeeded);
void print_VkQueryControlFlagBits(const VkQueryControlFlagBits* obj, const char* str, int commaNeeded);
void print_VkQueryPipelineStatisticFlagBits(const VkQueryPipelineStatisticFlagBits* obj, const char* str, int commaNeeded);
void print_VkQueryResultFlagBits(const VkQueryResultFlagBits* obj, const char* str, int commaNeeded);
void print_VkQueryType(const VkQueryType* obj, const char* str, int commaNeeded);
void print_VkQueueFlagBits(const VkQueueFlagBits* obj, const char* str, int commaNeeded);
void print_VkSubpassContents(const VkSubpassContents* obj, const char* str, int commaNeeded);
void print_VkResult(const VkResult* obj, const char* str, int commaNeeded);
void print_VkShaderStageFlagBits(const VkShaderStageFlagBits* obj, const char* str, int commaNeeded);
void print_VkStencilFaceFlagBits(const VkStencilFaceFlagBits* obj, const char* str, int commaNeeded);
void print_VkStencilOp(const VkStencilOp* obj, const char* str, int commaNeeded);
void print_VkStructureType(const VkStructureType* obj, const char* str, int commaNeeded);
void print_VkSystemAllocationScope(const VkSystemAllocationScope* obj, const char* str, int commaNeeded);
void print_VkInternalAllocationType(const VkInternalAllocationType* obj, const char* str, int commaNeeded);
void print_VkSamplerAddressMode(const VkSamplerAddressMode* obj, const char* str, int commaNeeded);
void print_VkFilter(const VkFilter* obj, const char* str, int commaNeeded);
void print_VkSamplerMipmapMode(const VkSamplerMipmapMode* obj, const char* str, int commaNeeded);
void print_VkVertexInputRate(const VkVertexInputRate* obj, const char* str, int commaNeeded);
void print_VkPipelineStageFlagBits(const VkPipelineStageFlagBits* obj, const char* str, int commaNeeded);
void print_VkSampleCountFlagBits(const VkSampleCountFlagBits* obj, const char* str, int commaNeeded);
void print_VkAttachmentDescriptionFlagBits(const VkAttachmentDescriptionFlagBits* obj, const char* str, int commaNeeded);
void print_VkDescriptorPoolCreateFlagBits(const VkDescriptorPoolCreateFlagBits* obj, const char* str, int commaNeeded);
void print_VkDependencyFlagBits(const VkDependencyFlagBits* obj, const char* str, int commaNeeded);
void print_VkObjectType(const VkObjectType* obj, const char* str, int commaNeeded);
void print_VkEventCreateFlagBits(const VkEventCreateFlagBits* obj, const char* str, int commaNeeded);
#ifdef VK_EXT_discard_rectangles
void print_VkDiscardRectangleModeEXT(const VkDiscardRectangleModeEXT* obj, const char* str, int commaNeeded);
#endif
void print_VkSubpassDescriptionFlagBits(const VkSubpassDescriptionFlagBits* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_1
void print_VkPointClippingBehavior(const VkPointClippingBehavior* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkQueueGlobalPriority(const VkQueueGlobalPriority* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_global_priority
void print_VkQueueGlobalPriorityKHR(const VkQueueGlobalPriorityKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_calibrated_timestamps
void print_VkTimeDomainKHR(const VkTimeDomainKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_conservative_rasterization
void print_VkConservativeRasterizationModeEXT(const VkConservativeRasterizationModeEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkResolveModeFlagBits(const VkResolveModeFlagBits* obj, const char* str, int commaNeeded);
void print_VkDescriptorBindingFlagBits(const VkDescriptorBindingFlagBits* obj, const char* str, int commaNeeded);
void print_VkSemaphoreType(const VkSemaphoreType* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPipelineCreationFeedbackFlagBits(const VkPipelineCreationFeedbackFlagBits* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_performance_query
void print_VkPerformanceCounterScopeKHR(const VkPerformanceCounterScopeKHR* obj, const char* str, int commaNeeded);
void print_VkPerformanceCounterUnitKHR(const VkPerformanceCounterUnitKHR* obj, const char* str, int commaNeeded);
void print_VkPerformanceCounterStorageKHR(const VkPerformanceCounterStorageKHR* obj, const char* str, int commaNeeded);
void print_VkPerformanceCounterDescriptionFlagBitsKHR(const VkPerformanceCounterDescriptionFlagBitsKHR* obj, const char* str, int commaNeeded);
void print_VkAcquireProfilingLockFlagBitsKHR(const VkAcquireProfilingLockFlagBitsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkSemaphoreWaitFlagBits(const VkSemaphoreWaitFlagBits* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkLineRasterizationMode(const VkLineRasterizationMode* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_line_rasterization
void print_VkLineRasterizationModeKHR(const VkLineRasterizationModeKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_line_rasterization
void print_VkLineRasterizationModeEXT(const VkLineRasterizationModeEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_object_refresh
void print_VkRefreshObjectFlagBitsKHR(const VkRefreshObjectFlagBitsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VKSC_VERSION_1_0
void print_VkFaultLevel(const VkFaultLevel* obj, const char* str, int commaNeeded);
void print_VkFaultType(const VkFaultType* obj, const char* str, int commaNeeded);
void print_VkFaultQueryBehavior(const VkFaultQueryBehavior* obj, const char* str, int commaNeeded);
void print_VkPipelineMatchControl(const VkPipelineMatchControl* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_sci_sync2
void print_VkSciSyncClientTypeNV(const VkSciSyncClientTypeNV* obj, const char* str, int commaNeeded);
void print_VkSciSyncPrimitiveTypeNV(const VkSciSyncPrimitiveTypeNV* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkToolPurposeFlagBits(const VkToolPurposeFlagBits* obj, const char* str, int commaNeeded);
void print_VkAccessFlagBits2(const VkAccessFlagBits2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkAccessFlagBits2KHR(const VkAccessFlagBits2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPipelineStageFlagBits2(const VkPipelineStageFlagBits2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkPipelineStageFlagBits2KHR(const VkPipelineStageFlagBits2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VKSC_VERSION_1_0
void print_VkPipelineCacheValidationVersion(const VkPipelineCacheValidationVersion* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkHostImageCopyFlagBits(const VkHostImageCopyFlagBits* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkFormatFeatureFlagBits2(const VkFormatFeatureFlagBits2* obj, const char* str, int commaNeeded);
void print_VkRenderingFlagBits(const VkRenderingFlagBits* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPipelineRobustnessBufferBehavior(const VkPipelineRobustnessBufferBehavior* obj, const char* str, int commaNeeded);
void print_VkPipelineRobustnessImageBehavior(const VkPipelineRobustnessImageBehavior* obj, const char* str, int commaNeeded);
void print_VkPipelineCreateFlagBits2(const VkPipelineCreateFlagBits2* obj, const char* str, int commaNeeded);
void print_VkBufferUsageFlagBits2(const VkBufferUsageFlagBits2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_surface
void print_VkColorSpaceKHR(const VkColorSpaceKHR* obj, const char* str, int commaNeeded);
void print_VkCompositeAlphaFlagBitsKHR(const VkCompositeAlphaFlagBitsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_display
void print_VkDisplayPlaneAlphaFlagBitsKHR(const VkDisplayPlaneAlphaFlagBitsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_surface
void print_VkPresentModeKHR(const VkPresentModeKHR* obj, const char* str, int commaNeeded);
void print_VkSurfaceTransformFlagBitsKHR(const VkSurfaceTransformFlagBitsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_validation_features
void print_VkValidationFeatureEnableEXT(const VkValidationFeatureEnableEXT* obj, const char* str, int commaNeeded);
void print_VkValidationFeatureDisableEXT(const VkValidationFeatureDisableEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkExternalMemoryHandleTypeFlagBits(const VkExternalMemoryHandleTypeFlagBits* obj, const char* str, int commaNeeded);
void print_VkExternalMemoryFeatureFlagBits(const VkExternalMemoryFeatureFlagBits* obj, const char* str, int commaNeeded);
void print_VkExternalSemaphoreHandleTypeFlagBits(const VkExternalSemaphoreHandleTypeFlagBits* obj, const char* str, int commaNeeded);
void print_VkExternalSemaphoreFeatureFlagBits(const VkExternalSemaphoreFeatureFlagBits* obj, const char* str, int commaNeeded);
void print_VkSemaphoreImportFlagBits(const VkSemaphoreImportFlagBits* obj, const char* str, int commaNeeded);
void print_VkExternalFenceHandleTypeFlagBits(const VkExternalFenceHandleTypeFlagBits* obj, const char* str, int commaNeeded);
void print_VkExternalFenceFeatureFlagBits(const VkExternalFenceFeatureFlagBits* obj, const char* str, int commaNeeded);
void print_VkFenceImportFlagBits(const VkFenceImportFlagBits* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_display_surface_counter
void print_VkSurfaceCounterFlagBitsEXT(const VkSurfaceCounterFlagBitsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_display_control
void print_VkDisplayPowerStateEXT(const VkDisplayPowerStateEXT* obj, const char* str, int commaNeeded);
void print_VkDeviceEventTypeEXT(const VkDeviceEventTypeEXT* obj, const char* str, int commaNeeded);
void print_VkDisplayEventTypeEXT(const VkDisplayEventTypeEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPeerMemoryFeatureFlagBits(const VkPeerMemoryFeatureFlagBits* obj, const char* str, int commaNeeded);
void print_VkMemoryAllocateFlagBits(const VkMemoryAllocateFlagBits* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_swapchain
void print_VkDeviceGroupPresentModeFlagBitsKHR(const VkDeviceGroupPresentModeFlagBitsKHR* obj, const char* str, int commaNeeded);
void print_VkSwapchainCreateFlagBitsKHR(const VkSwapchainCreateFlagBitsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkSubgroupFeatureFlagBits(const VkSubgroupFeatureFlagBits* obj, const char* str, int commaNeeded);
void print_VkTessellationDomainOrigin(const VkTessellationDomainOrigin* obj, const char* str, int commaNeeded);
void print_VkSamplerYcbcrModelConversion(const VkSamplerYcbcrModelConversion* obj, const char* str, int commaNeeded);
void print_VkSamplerYcbcrRange(const VkSamplerYcbcrRange* obj, const char* str, int commaNeeded);
void print_VkChromaLocation(const VkChromaLocation* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkSamplerReductionMode(const VkSamplerReductionMode* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_blend_operation_advanced
void print_VkBlendOverlapEXT(const VkBlendOverlapEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_debug_utils
void print_VkDebugUtilsMessageSeverityFlagBitsEXT(const VkDebugUtilsMessageSeverityFlagBitsEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsMessageTypeFlagBitsEXT(const VkDebugUtilsMessageTypeFlagBitsEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkShaderFloatControlsIndependence(const VkShaderFloatControlsIndependence* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_fragment_shading_rate
void print_VkFragmentShadingRateCombinerOpKHR(const VkFragmentShadingRateCombinerOpKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkSubmitFlagBits(const VkSubmitFlagBits* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkSubmitFlagBitsKHR(const VkSubmitFlagBitsKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_layer_settings
void print_VkLayerSettingTypeEXT(const VkLayerSettingTypeEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkMemoryUnmapFlagBits(const VkMemoryUnmapFlagBits* obj, const char* str, int commaNeeded);
#endif
void print_VkVendorId(const VkVendorId* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_2
void print_VkDriverId(const VkDriverId* obj, const char* str, int commaNeeded);
#endif
void print_VkBaseOutStructure(const VkBaseOutStructure* obj, const char* str, int commaNeeded);
void print_VkBaseInStructure(const VkBaseInStructure* obj, const char* str, int commaNeeded);
void print_VkOffset2D(const VkOffset2D* obj, const char* str, int commaNeeded);
void print_VkOffset3D(const VkOffset3D* obj, const char* str, int commaNeeded);
void print_VkExtent2D(const VkExtent2D* obj, const char* str, int commaNeeded);
void print_VkExtent3D(const VkExtent3D* obj, const char* str, int commaNeeded);
void print_VkViewport(const VkViewport* obj, const char* str, int commaNeeded);
void print_VkRect2D(const VkRect2D* obj, const char* str, int commaNeeded);
void print_VkClearRect(const VkClearRect* obj, const char* str, int commaNeeded);
void print_VkComponentMapping(const VkComponentMapping* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceProperties(const VkPhysicalDeviceProperties* obj, const char* str, int commaNeeded);
void print_VkExtensionProperties(const VkExtensionProperties* obj, const char* str, int commaNeeded);
void print_VkLayerProperties(const VkLayerProperties* obj, const char* str, int commaNeeded);
void print_VkApplicationInfo(const VkApplicationInfo* obj, const char* str, int commaNeeded);
void print_VkAllocationCallbacks(const VkAllocationCallbacks* obj, const char* str, int commaNeeded);
void print_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* obj, const char* str, int commaNeeded);
void print_VkDeviceCreateInfo(const VkDeviceCreateInfo* obj, const char* str, int commaNeeded);
void print_VkInstanceCreateInfo(const VkInstanceCreateInfo* obj, const char* str, int commaNeeded);
void print_VkQueueFamilyProperties(const VkQueueFamilyProperties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceMemoryProperties(const VkPhysicalDeviceMemoryProperties* obj, const char* str, int commaNeeded);
void print_VkMemoryAllocateInfo(const VkMemoryAllocateInfo* obj, const char* str, int commaNeeded);
void print_VkMemoryRequirements(const VkMemoryRequirements* obj, const char* str, int commaNeeded);
void print_VkMemoryType(const VkMemoryType* obj, const char* str, int commaNeeded);
void print_VkMemoryHeap(const VkMemoryHeap* obj, const char* str, int commaNeeded);
void print_VkMappedMemoryRange(const VkMappedMemoryRange* obj, const char* str, int commaNeeded);
void print_VkFormatProperties(const VkFormatProperties* obj, const char* str, int commaNeeded);
void print_VkImageFormatProperties(const VkImageFormatProperties* obj, const char* str, int commaNeeded);
void print_VkDescriptorBufferInfo(const VkDescriptorBufferInfo* obj, const char* str, int commaNeeded);
void print_VkDescriptorImageInfo(const VkDescriptorImageInfo* obj, const char* str, int commaNeeded);
void print_VkWriteDescriptorSet(const VkWriteDescriptorSet* obj, const char* str, int commaNeeded);
void print_VkCopyDescriptorSet(const VkCopyDescriptorSet* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_4
void print_VkBufferUsageFlags2CreateInfo(const VkBufferUsageFlags2CreateInfo* obj, const char* str, int commaNeeded);
#endif
void print_VkBufferCreateInfo(const VkBufferCreateInfo* obj, const char* str, int commaNeeded);
void print_VkBufferViewCreateInfo(const VkBufferViewCreateInfo* obj, const char* str, int commaNeeded);
void print_VkImageSubresource(const VkImageSubresource* obj, const char* str, int commaNeeded);
void print_VkImageSubresourceLayers(const VkImageSubresourceLayers* obj, const char* str, int commaNeeded);
void print_VkImageSubresourceRange(const VkImageSubresourceRange* obj, const char* str, int commaNeeded);
void print_VkMemoryBarrier(const VkMemoryBarrier* obj, const char* str, int commaNeeded);
void print_VkBufferMemoryBarrier(const VkBufferMemoryBarrier* obj, const char* str, int commaNeeded);
void print_VkImageMemoryBarrier(const VkImageMemoryBarrier* obj, const char* str, int commaNeeded);
void print_VkImageCreateInfo(const VkImageCreateInfo* obj, const char* str, int commaNeeded);
void print_VkSubresourceLayout(const VkSubresourceLayout* obj, const char* str, int commaNeeded);
void print_VkImageViewCreateInfo(const VkImageViewCreateInfo* obj, const char* str, int commaNeeded);
void print_VkBufferCopy(const VkBufferCopy* obj, const char* str, int commaNeeded);
void print_VkImageCopy(const VkImageCopy* obj, const char* str, int commaNeeded);
void print_VkImageBlit(const VkImageBlit* obj, const char* str, int commaNeeded);
void print_VkBufferImageCopy(const VkBufferImageCopy* obj, const char* str, int commaNeeded);
void print_VkImageResolve(const VkImageResolve* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* obj, const char* str, int commaNeeded);
void print_VkDescriptorPoolSize(const VkDescriptorPoolSize* obj, const char* str, int commaNeeded);
void print_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* obj, const char* str, int commaNeeded);
void print_VkSpecializationMapEntry(const VkSpecializationMapEntry* obj, const char* str, int commaNeeded);
void print_VkSpecializationInfo(const VkSpecializationInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* obj, const char* str, int commaNeeded);
void print_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo* obj, const char* str, int commaNeeded);
#ifdef VK_VERSION_1_4
void print_VkPipelineCreateFlags2CreateInfo(const VkPipelineCreateFlags2CreateInfo* obj, const char* str, int commaNeeded);
#endif
void print_VkVertexInputBindingDescription(const VkVertexInputBindingDescription* obj, const char* str, int commaNeeded);
void print_VkVertexInputAttributeDescription(const VkVertexInputAttributeDescription* obj, const char* str, int commaNeeded);
void print_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineColorBlendAttachmentState(const VkPipelineColorBlendAttachmentState* obj, const char* str, int commaNeeded);
void print_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkStencilOpState(const VkStencilOpState* obj, const char* str, int commaNeeded);
void print_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineCacheHeaderVersionOne(const VkPipelineCacheHeaderVersionOne* obj, const char* str, int commaNeeded);
#ifdef VKSC_VERSION_1_0
void print_VkPipelineCacheStageValidationIndexEntry(const VkPipelineCacheStageValidationIndexEntry* obj, const char* str, int commaNeeded);
void print_VkPipelineCacheSafetyCriticalIndexEntry(const VkPipelineCacheSafetyCriticalIndexEntry* obj, const char* str, int commaNeeded);
void print_VkPipelineCacheHeaderVersionSafetyCriticalOne(const VkPipelineCacheHeaderVersionSafetyCriticalOne* obj, const char* str, int commaNeeded);
#endif
void print_VkPushConstantRange(const VkPushConstantRange* obj, const char* str, int commaNeeded);
void print_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* obj, const char* str, int commaNeeded);
void print_VkSamplerCreateInfo(const VkSamplerCreateInfo* obj, const char* str, int commaNeeded);
void print_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo* obj, const char* str, int commaNeeded);
void print_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* obj, const char* str, int commaNeeded);
void print_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* obj, const char* str, int commaNeeded);
void print_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo* obj, const char* str, int commaNeeded);
void print_VkRenderPassBeginInfo(const VkRenderPassBeginInfo* obj, const char* str, int commaNeeded);
void print_VkClearDepthStencilValue(const VkClearDepthStencilValue* obj, const char* str, int commaNeeded);
void print_VkClearAttachment(const VkClearAttachment* obj, const char* str, int commaNeeded);
void print_VkAttachmentDescription(const VkAttachmentDescription* obj, const char* str, int commaNeeded);
void print_VkAttachmentReference(const VkAttachmentReference* obj, const char* str, int commaNeeded);
void print_VkSubpassDescription(const VkSubpassDescription* obj, const char* str, int commaNeeded);
void print_VkSubpassDependency(const VkSubpassDependency* obj, const char* str, int commaNeeded);
void print_VkRenderPassCreateInfo(const VkRenderPassCreateInfo* obj, const char* str, int commaNeeded);
void print_VkEventCreateInfo(const VkEventCreateInfo* obj, const char* str, int commaNeeded);
void print_VkFenceCreateInfo(const VkFenceCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceFeatures(const VkPhysicalDeviceFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceSparseProperties(const VkPhysicalDeviceSparseProperties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceLimits(const VkPhysicalDeviceLimits* obj, const char* str, int commaNeeded);
void print_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo* obj, const char* str, int commaNeeded);
void print_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo* obj, const char* str, int commaNeeded);
void print_VkFramebufferCreateInfo(const VkFramebufferCreateInfo* obj, const char* str, int commaNeeded);
void print_VkDrawIndirectCommand(const VkDrawIndirectCommand* obj, const char* str, int commaNeeded);
void print_VkDrawIndexedIndirectCommand(const VkDrawIndexedIndirectCommand* obj, const char* str, int commaNeeded);
void print_VkDispatchIndirectCommand(const VkDispatchIndirectCommand* obj, const char* str, int commaNeeded);
void print_VkSubmitInfo(const VkSubmitInfo* obj, const char* str, int commaNeeded);
#ifdef VK_KHR_display
void print_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR* obj, const char* str, int commaNeeded);
void print_VkDisplayPlanePropertiesKHR(const VkDisplayPlanePropertiesKHR* obj, const char* str, int commaNeeded);
void print_VkDisplayModeParametersKHR(const VkDisplayModeParametersKHR* obj, const char* str, int commaNeeded);
void print_VkDisplayModePropertiesKHR(const VkDisplayModePropertiesKHR* obj, const char* str, int commaNeeded);
void print_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR* obj, const char* str, int commaNeeded);
void print_VkDisplayPlaneCapabilitiesKHR(const VkDisplayPlaneCapabilitiesKHR* obj, const char* str, int commaNeeded);
void print_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_display_swapchain
void print_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_surface
void print_VkSurfaceCapabilitiesKHR(const VkSurfaceCapabilitiesKHR* obj, const char* str, int commaNeeded);
void print_VkSurfaceFormatKHR(const VkSurfaceFormatKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_swapchain
void print_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR* obj, const char* str, int commaNeeded);
void print_VkPresentInfoKHR(const VkPresentInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_validation_features
void print_VkValidationFeaturesEXT(const VkValidationFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_layer_settings
void print_VkLayerSettingsCreateInfoEXT(const VkLayerSettingsCreateInfoEXT* obj, const char* str, int commaNeeded);
void print_VkLayerSettingEXT(const VkLayerSettingEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_application_parameters
void print_VkApplicationParametersEXT(const VkApplicationParametersEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_memory_sci_buf
void print_VkExportMemorySciBufInfoNV(const VkExportMemorySciBufInfoNV* obj, const char* str, int commaNeeded);
void print_VkImportMemorySciBufInfoNV(const VkImportMemorySciBufInfoNV* obj, const char* str, int commaNeeded);
void print_VkMemoryGetSciBufInfoNV(const VkMemoryGetSciBufInfoNV* obj, const char* str, int commaNeeded);
void print_VkMemorySciBufPropertiesNV(const VkMemorySciBufPropertiesNV* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceExternalMemorySciBufFeaturesNV(const VkPhysicalDeviceExternalMemorySciBufFeaturesNV* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceExternalSciBufFeaturesNV(const VkPhysicalDeviceExternalSciBufFeaturesNV* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkDevicePrivateDataCreateInfo(const VkDevicePrivateDataCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPrivateDataSlotCreateInfo(const VkPrivateDataSlotCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDevicePrivateDataFeatures(const VkPhysicalDevicePrivateDataFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDeviceFeatures2(const VkPhysicalDeviceFeatures2* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceProperties2(const VkPhysicalDeviceProperties2* obj, const char* str, int commaNeeded);
void print_VkFormatProperties2(const VkFormatProperties2* obj, const char* str, int commaNeeded);
void print_VkImageFormatProperties2(const VkImageFormatProperties2* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceImageFormatInfo2(const VkPhysicalDeviceImageFormatInfo2* obj, const char* str, int commaNeeded);
void print_VkQueueFamilyProperties2(const VkQueueFamilyProperties2* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceMemoryProperties2(const VkPhysicalDeviceMemoryProperties2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDevicePushDescriptorProperties(const VkPhysicalDevicePushDescriptorProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkConformanceVersion(const VkConformanceVersion* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceDriverProperties(const VkPhysicalDeviceDriverProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_incremental_present
void print_VkPresentRegionsKHR(const VkPresentRegionsKHR* obj, const char* str, int commaNeeded);
void print_VkPresentRegionKHR(const VkPresentRegionKHR* obj, const char* str, int commaNeeded);
void print_VkRectLayerKHR(const VkRectLayerKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDeviceVariablePointersFeatures(const VkPhysicalDeviceVariablePointersFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVariablePointerFeatures(const VkPhysicalDeviceVariablePointerFeatures* obj, const char* str, int commaNeeded);
void print_VkExternalMemoryProperties(const VkExternalMemoryProperties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceExternalImageFormatInfo(const VkPhysicalDeviceExternalImageFormatInfo* obj, const char* str, int commaNeeded);
void print_VkExternalImageFormatProperties(const VkExternalImageFormatProperties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceExternalBufferInfo(const VkPhysicalDeviceExternalBufferInfo* obj, const char* str, int commaNeeded);
void print_VkExternalBufferProperties(const VkExternalBufferProperties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceIDProperties(const VkPhysicalDeviceIDProperties* obj, const char* str, int commaNeeded);
void print_VkExternalMemoryImageCreateInfo(const VkExternalMemoryImageCreateInfo* obj, const char* str, int commaNeeded);
void print_VkExternalMemoryBufferCreateInfo(const VkExternalMemoryBufferCreateInfo* obj, const char* str, int commaNeeded);
void print_VkExportMemoryAllocateInfo(const VkExportMemoryAllocateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_external_memory_fd
void print_VkImportMemoryFdInfoKHR(const VkImportMemoryFdInfoKHR* obj, const char* str, int commaNeeded);
void print_VkMemoryFdPropertiesKHR(const VkMemoryFdPropertiesKHR* obj, const char* str, int commaNeeded);
void print_VkMemoryGetFdInfoKHR(const VkMemoryGetFdInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDeviceExternalSemaphoreInfo(const VkPhysicalDeviceExternalSemaphoreInfo* obj, const char* str, int commaNeeded);
void print_VkExternalSemaphoreProperties(const VkExternalSemaphoreProperties* obj, const char* str, int commaNeeded);
void print_VkExportSemaphoreCreateInfo(const VkExportSemaphoreCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_external_semaphore_fd
void print_VkImportSemaphoreFdInfoKHR(const VkImportSemaphoreFdInfoKHR* obj, const char* str, int commaNeeded);
void print_VkSemaphoreGetFdInfoKHR(const VkSemaphoreGetFdInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDeviceExternalFenceInfo(const VkPhysicalDeviceExternalFenceInfo* obj, const char* str, int commaNeeded);
void print_VkExternalFenceProperties(const VkExternalFenceProperties* obj, const char* str, int commaNeeded);
void print_VkExportFenceCreateInfo(const VkExportFenceCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_external_fence_fd
void print_VkImportFenceFdInfoKHR(const VkImportFenceFdInfoKHR* obj, const char* str, int commaNeeded);
void print_VkFenceGetFdInfoKHR(const VkFenceGetFdInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_sci_sync2
void print_VkExportFenceSciSyncInfoNV(const VkExportFenceSciSyncInfoNV* obj, const char* str, int commaNeeded);
void print_VkImportFenceSciSyncInfoNV(const VkImportFenceSciSyncInfoNV* obj, const char* str, int commaNeeded);
void print_VkFenceGetSciSyncInfoNV(const VkFenceGetSciSyncInfoNV* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_sci_sync
void print_VkExportSemaphoreSciSyncInfoNV(const VkExportSemaphoreSciSyncInfoNV* obj, const char* str, int commaNeeded);
void print_VkImportSemaphoreSciSyncInfoNV(const VkImportSemaphoreSciSyncInfoNV* obj, const char* str, int commaNeeded);
void print_VkSemaphoreGetSciSyncInfoNV(const VkSemaphoreGetSciSyncInfoNV* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_sci_sync2
void print_VkSciSyncAttributesInfoNV(const VkSciSyncAttributesInfoNV* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_sci_sync
void print_VkPhysicalDeviceExternalSciSyncFeaturesNV(const VkPhysicalDeviceExternalSciSyncFeaturesNV* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_NV_external_sci_sync2
void print_VkPhysicalDeviceExternalSciSync2FeaturesNV(const VkPhysicalDeviceExternalSciSync2FeaturesNV* obj, const char* str, int commaNeeded);
void print_VkSemaphoreSciSyncPoolCreateInfoNV(const VkSemaphoreSciSyncPoolCreateInfoNV* obj, const char* str, int commaNeeded);
void print_VkSemaphoreSciSyncCreateInfoNV(const VkSemaphoreSciSyncCreateInfoNV* obj, const char* str, int commaNeeded);
void print_VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV(const VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDeviceMultiviewFeatures(const VkPhysicalDeviceMultiviewFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceMultiviewProperties(const VkPhysicalDeviceMultiviewProperties* obj, const char* str, int commaNeeded);
void print_VkRenderPassMultiviewCreateInfo(const VkRenderPassMultiviewCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_display_surface_counter
void print_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_display_control
void print_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* obj, const char* str, int commaNeeded);
void print_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT* obj, const char* str, int commaNeeded);
void print_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT* obj, const char* str, int commaNeeded);
void print_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDeviceGroupProperties(const VkPhysicalDeviceGroupProperties* obj, const char* str, int commaNeeded);
void print_VkMemoryAllocateFlagsInfo(const VkMemoryAllocateFlagsInfo* obj, const char* str, int commaNeeded);
void print_VkBindBufferMemoryInfo(const VkBindBufferMemoryInfo* obj, const char* str, int commaNeeded);
void print_VkBindBufferMemoryDeviceGroupInfo(const VkBindBufferMemoryDeviceGroupInfo* obj, const char* str, int commaNeeded);
void print_VkBindImageMemoryInfo(const VkBindImageMemoryInfo* obj, const char* str, int commaNeeded);
void print_VkBindImageMemoryDeviceGroupInfo(const VkBindImageMemoryDeviceGroupInfo* obj, const char* str, int commaNeeded);
void print_VkDeviceGroupRenderPassBeginInfo(const VkDeviceGroupRenderPassBeginInfo* obj, const char* str, int commaNeeded);
void print_VkDeviceGroupCommandBufferBeginInfo(const VkDeviceGroupCommandBufferBeginInfo* obj, const char* str, int commaNeeded);
void print_VkDeviceGroupSubmitInfo(const VkDeviceGroupSubmitInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_swapchain
void print_VkDeviceGroupPresentCapabilitiesKHR(const VkDeviceGroupPresentCapabilitiesKHR* obj, const char* str, int commaNeeded);
void print_VkImageSwapchainCreateInfoKHR(const VkImageSwapchainCreateInfoKHR* obj, const char* str, int commaNeeded);
void print_VkBindImageMemorySwapchainInfoKHR(const VkBindImageMemorySwapchainInfoKHR* obj, const char* str, int commaNeeded);
void print_VkAcquireNextImageInfoKHR(const VkAcquireNextImageInfoKHR* obj, const char* str, int commaNeeded);
void print_VkDeviceGroupPresentInfoKHR(const VkDeviceGroupPresentInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkDeviceGroupDeviceCreateInfo(const VkDeviceGroupDeviceCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_swapchain
void print_VkDeviceGroupSwapchainCreateInfoKHR(const VkDeviceGroupSwapchainCreateInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_hdr_metadata
void print_VkXYColorEXT(const VkXYColorEXT* obj, const char* str, int commaNeeded);
void print_VkHdrMetadataEXT(const VkHdrMetadataEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_discard_rectangles
void print_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* obj, const char* str, int commaNeeded);
void print_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkInputAttachmentAspectReference(const VkInputAttachmentAspectReference* obj, const char* str, int commaNeeded);
void print_VkRenderPassInputAttachmentAspectCreateInfo(const VkRenderPassInputAttachmentAspectCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_get_surface_capabilities2
void print_VkPhysicalDeviceSurfaceInfo2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* obj, const char* str, int commaNeeded);
void print_VkSurfaceCapabilities2KHR(const VkSurfaceCapabilities2KHR* obj, const char* str, int commaNeeded);
void print_VkSurfaceFormat2KHR(const VkSurfaceFormat2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_get_display_properties2
void print_VkDisplayProperties2KHR(const VkDisplayProperties2KHR* obj, const char* str, int commaNeeded);
void print_VkDisplayPlaneProperties2KHR(const VkDisplayPlaneProperties2KHR* obj, const char* str, int commaNeeded);
void print_VkDisplayModeProperties2KHR(const VkDisplayModeProperties2KHR* obj, const char* str, int commaNeeded);
void print_VkDisplayPlaneInfo2KHR(const VkDisplayPlaneInfo2KHR* obj, const char* str, int commaNeeded);
void print_VkDisplayPlaneCapabilities2KHR(const VkDisplayPlaneCapabilities2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_shared_presentable_image
void print_VkSharedPresentSurfaceCapabilitiesKHR(const VkSharedPresentSurfaceCapabilitiesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDevice16BitStorageFeatures(const VkPhysicalDevice16BitStorageFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceSubgroupProperties(const VkPhysicalDeviceSubgroupProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkBufferMemoryRequirementsInfo2(const VkBufferMemoryRequirementsInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkDeviceBufferMemoryRequirements(const VkDeviceBufferMemoryRequirements* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkImageMemoryRequirementsInfo2(const VkImageMemoryRequirementsInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkDeviceImageMemoryRequirements(const VkDeviceImageMemoryRequirements* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkMemoryRequirements2(const VkMemoryRequirements2* obj, const char* str, int commaNeeded);
void print_VkPhysicalDevicePointClippingProperties(const VkPhysicalDevicePointClippingProperties* obj, const char* str, int commaNeeded);
void print_VkMemoryDedicatedRequirements(const VkMemoryDedicatedRequirements* obj, const char* str, int commaNeeded);
void print_VkMemoryDedicatedAllocateInfo(const VkMemoryDedicatedAllocateInfo* obj, const char* str, int commaNeeded);
void print_VkImageViewUsageCreateInfo(const VkImageViewUsageCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPipelineTessellationDomainOriginStateCreateInfo(const VkPipelineTessellationDomainOriginStateCreateInfo* obj, const char* str, int commaNeeded);
void print_VkSamplerYcbcrConversionInfo(const VkSamplerYcbcrConversionInfo* obj, const char* str, int commaNeeded);
void print_VkSamplerYcbcrConversionCreateInfo(const VkSamplerYcbcrConversionCreateInfo* obj, const char* str, int commaNeeded);
void print_VkBindImagePlaneMemoryInfo(const VkBindImagePlaneMemoryInfo* obj, const char* str, int commaNeeded);
void print_VkImagePlaneMemoryRequirementsInfo(const VkImagePlaneMemoryRequirementsInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceSamplerYcbcrConversionFeatures(const VkPhysicalDeviceSamplerYcbcrConversionFeatures* obj, const char* str, int commaNeeded);
void print_VkSamplerYcbcrConversionImageFormatProperties(const VkSamplerYcbcrConversionImageFormatProperties* obj, const char* str, int commaNeeded);
void print_VkProtectedSubmitInfo(const VkProtectedSubmitInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceProtectedMemoryFeatures(const VkPhysicalDeviceProtectedMemoryFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceProtectedMemoryProperties(const VkPhysicalDeviceProtectedMemoryProperties* obj, const char* str, int commaNeeded);
void print_VkDeviceQueueInfo2(const VkDeviceQueueInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceSamplerFilterMinmaxProperties(const VkPhysicalDeviceSamplerFilterMinmaxProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_sample_locations
void print_VkSampleLocationEXT(const VkSampleLocationEXT* obj, const char* str, int commaNeeded);
void print_VkSampleLocationsInfoEXT(const VkSampleLocationsInfoEXT* obj, const char* str, int commaNeeded);
void print_VkAttachmentSampleLocationsEXT(const VkAttachmentSampleLocationsEXT* obj, const char* str, int commaNeeded);
void print_VkSubpassSampleLocationsEXT(const VkSubpassSampleLocationsEXT* obj, const char* str, int commaNeeded);
void print_VkRenderPassSampleLocationsBeginInfoEXT(const VkRenderPassSampleLocationsBeginInfoEXT* obj, const char* str, int commaNeeded);
void print_VkPipelineSampleLocationsStateCreateInfoEXT(const VkPipelineSampleLocationsStateCreateInfoEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceSampleLocationsPropertiesEXT(const VkPhysicalDeviceSampleLocationsPropertiesEXT* obj, const char* str, int commaNeeded);
void print_VkMultisamplePropertiesEXT(const VkMultisamplePropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkSamplerReductionModeCreateInfo(const VkSamplerReductionModeCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_blend_operation_advanced
void print_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* obj, const char* str, int commaNeeded);
void print_VkPipelineColorBlendAdvancedStateCreateInfoEXT(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceInlineUniformBlockFeatures(const VkPhysicalDeviceInlineUniformBlockFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceInlineUniformBlockProperties(const VkPhysicalDeviceInlineUniformBlockProperties* obj, const char* str, int commaNeeded);
void print_VkWriteDescriptorSetInlineUniformBlock(const VkWriteDescriptorSetInlineUniformBlock* obj, const char* str, int commaNeeded);
void print_VkDescriptorPoolInlineUniformBlockCreateInfo(const VkDescriptorPoolInlineUniformBlockCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkImageFormatListCreateInfo(const VkImageFormatListCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkPhysicalDeviceMaintenance3Properties(const VkPhysicalDeviceMaintenance3Properties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceMaintenance4Features(const VkPhysicalDeviceMaintenance4Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceMaintenance4Properties(const VkPhysicalDeviceMaintenance4Properties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceMaintenance5Features(const VkPhysicalDeviceMaintenance5Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceMaintenance5Properties(const VkPhysicalDeviceMaintenance5Properties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceMaintenance6Features(const VkPhysicalDeviceMaintenance6Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceMaintenance6Properties(const VkPhysicalDeviceMaintenance6Properties* obj, const char* str, int commaNeeded);
void print_VkRenderingAreaInfo(const VkRenderingAreaInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_1
void print_VkDescriptorSetLayoutSupport(const VkDescriptorSetLayoutSupport* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceShaderDrawParametersFeatures(const VkPhysicalDeviceShaderDrawParametersFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceShaderDrawParameterFeatures(const VkPhysicalDeviceShaderDrawParameterFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceShaderFloat16Int8Features(const VkPhysicalDeviceShaderFloat16Int8Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceFloatControlsProperties(const VkPhysicalDeviceFloatControlsProperties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceHostQueryResetFeatures(const VkPhysicalDeviceHostQueryResetFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkDeviceQueueGlobalPriorityCreateInfo(const VkDeviceQueueGlobalPriorityCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_global_priority
void print_VkDeviceQueueGlobalPriorityCreateInfoKHR(const VkDeviceQueueGlobalPriorityCreateInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceGlobalPriorityQueryFeatures(const VkPhysicalDeviceGlobalPriorityQueryFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_global_priority
void print_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkQueueFamilyGlobalPriorityProperties(const VkQueueFamilyGlobalPriorityProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_global_priority
void print_VkQueueFamilyGlobalPriorityPropertiesKHR(const VkQueueFamilyGlobalPriorityPropertiesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_debug_utils
void print_VkDebugUtilsObjectNameInfoEXT(const VkDebugUtilsObjectNameInfoEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsObjectTagInfoEXT(const VkDebugUtilsObjectTagInfoEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsMessengerCreateInfoEXT(const VkDebugUtilsMessengerCreateInfoEXT* obj, const char* str, int commaNeeded);
void print_VkDebugUtilsMessengerCallbackDataEXT(const VkDebugUtilsMessengerCallbackDataEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_external_memory_host
void print_VkImportMemoryHostPointerInfoEXT(const VkImportMemoryHostPointerInfoEXT* obj, const char* str, int commaNeeded);
void print_VkMemoryHostPointerPropertiesEXT(const VkMemoryHostPointerPropertiesEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_conservative_rasterization
void print_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_calibrated_timestamps
void print_VkCalibratedTimestampInfoKHR(const VkCalibratedTimestampInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_conservative_rasterization
void print_VkPipelineRasterizationConservativeStateCreateInfoEXT(const VkPipelineRasterizationConservativeStateCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceDescriptorIndexingFeatures(const VkPhysicalDeviceDescriptorIndexingFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceDescriptorIndexingProperties(const VkPhysicalDeviceDescriptorIndexingProperties* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetLayoutBindingFlagsCreateInfo(const VkDescriptorSetLayoutBindingFlagsCreateInfo* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetVariableDescriptorCountAllocateInfo(const VkDescriptorSetVariableDescriptorCountAllocateInfo* obj, const char* str, int commaNeeded);
void print_VkDescriptorSetVariableDescriptorCountLayoutSupport(const VkDescriptorSetVariableDescriptorCountLayoutSupport* obj, const char* str, int commaNeeded);
void print_VkAttachmentDescription2(const VkAttachmentDescription2* obj, const char* str, int commaNeeded);
void print_VkAttachmentReference2(const VkAttachmentReference2* obj, const char* str, int commaNeeded);
void print_VkSubpassDescription2(const VkSubpassDescription2* obj, const char* str, int commaNeeded);
void print_VkSubpassDependency2(const VkSubpassDependency2* obj, const char* str, int commaNeeded);
void print_VkRenderPassCreateInfo2(const VkRenderPassCreateInfo2* obj, const char* str, int commaNeeded);
void print_VkSubpassBeginInfo(const VkSubpassBeginInfo* obj, const char* str, int commaNeeded);
void print_VkSubpassEndInfo(const VkSubpassEndInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceTimelineSemaphoreFeatures(const VkPhysicalDeviceTimelineSemaphoreFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceTimelineSemaphoreProperties(const VkPhysicalDeviceTimelineSemaphoreProperties* obj, const char* str, int commaNeeded);
void print_VkSemaphoreTypeCreateInfo(const VkSemaphoreTypeCreateInfo* obj, const char* str, int commaNeeded);
void print_VkTimelineSemaphoreSubmitInfo(const VkTimelineSemaphoreSubmitInfo* obj, const char* str, int commaNeeded);
void print_VkSemaphoreWaitInfo(const VkSemaphoreWaitInfo* obj, const char* str, int commaNeeded);
void print_VkSemaphoreSignalInfo(const VkSemaphoreSignalInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkVertexInputBindingDivisorDescription(const VkVertexInputBindingDivisorDescription* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_vertex_attribute_divisor
void print_VkVertexInputBindingDivisorDescriptionKHR(const VkVertexInputBindingDivisorDescriptionKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPipelineVertexInputDivisorStateCreateInfo(const VkPipelineVertexInputDivisorStateCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_vertex_attribute_divisor
void print_VkPipelineVertexInputDivisorStateCreateInfoKHR(const VkPipelineVertexInputDivisorStateCreateInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceVertexAttributeDivisorProperties(const VkPhysicalDeviceVertexAttributeDivisorProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_vertex_attribute_divisor
void print_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR(const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_pci_bus_info
void print_VkPhysicalDevicePCIBusInfoPropertiesEXT(const VkPhysicalDevicePCIBusInfoPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDevice8BitStorageFeatures(const VkPhysicalDevice8BitStorageFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVulkanMemoryModelFeatures(const VkPhysicalDeviceVulkanMemoryModelFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceShaderAtomicInt64Features(const VkPhysicalDeviceShaderAtomicInt64Features* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_shader_atomic_float
void print_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceVertexAttributeDivisorFeatures(const VkPhysicalDeviceVertexAttributeDivisorFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_vertex_attribute_divisor
void print_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR(const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceDepthStencilResolveProperties(const VkPhysicalDeviceDepthStencilResolveProperties* obj, const char* str, int commaNeeded);
void print_VkSubpassDescriptionDepthStencilResolve(const VkSubpassDescriptionDepthStencilResolve* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_astc_decode_mode
void print_VkImageViewASTCDecodeModeEXT(const VkImageViewASTCDecodeModeEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceASTCDecodeFeaturesEXT(const VkPhysicalDeviceASTCDecodeFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_image_drm_format_modifier
void print_VkDrmFormatModifierPropertiesListEXT(const VkDrmFormatModifierPropertiesListEXT* obj, const char* str, int commaNeeded);
void print_VkDrmFormatModifierPropertiesEXT(const VkDrmFormatModifierPropertiesEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT* obj, const char* str, int commaNeeded);
void print_VkImageDrmFormatModifierListCreateInfoEXT(const VkImageDrmFormatModifierListCreateInfoEXT* obj, const char* str, int commaNeeded);
void print_VkImageDrmFormatModifierExplicitCreateInfoEXT(const VkImageDrmFormatModifierExplicitCreateInfoEXT* obj, const char* str, int commaNeeded);
void print_VkImageDrmFormatModifierPropertiesEXT(const VkImageDrmFormatModifierPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkImageStencilUsageCreateInfo(const VkImageStencilUsageCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceScalarBlockLayoutFeatures(const VkPhysicalDeviceScalarBlockLayoutFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_depth_clip_enable
void print_VkPhysicalDeviceDepthClipEnableFeaturesEXT(const VkPhysicalDeviceDepthClipEnableFeaturesEXT* obj, const char* str, int commaNeeded);
void print_VkPipelineRasterizationDepthClipStateCreateInfoEXT(const VkPipelineRasterizationDepthClipStateCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_memory_budget
void print_VkPhysicalDeviceMemoryBudgetPropertiesEXT(const VkPhysicalDeviceMemoryBudgetPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceBufferDeviceAddressFeatures(const VkPhysicalDeviceBufferDeviceAddressFeatures* obj, const char* str, int commaNeeded);
void print_VkBufferDeviceAddressInfo(const VkBufferDeviceAddressInfo* obj, const char* str, int commaNeeded);
void print_VkBufferOpaqueCaptureAddressCreateInfo(const VkBufferOpaqueCaptureAddressCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_filter_cubic
void print_VkPhysicalDeviceImageViewImageFormatInfoEXT(const VkPhysicalDeviceImageViewImageFormatInfoEXT* obj, const char* str, int commaNeeded);
void print_VkFilterCubicImageViewImageFormatPropertiesEXT(const VkFilterCubicImageViewImageFormatPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceImagelessFramebufferFeatures(const VkPhysicalDeviceImagelessFramebufferFeatures* obj, const char* str, int commaNeeded);
void print_VkFramebufferAttachmentsCreateInfo(const VkFramebufferAttachmentsCreateInfo* obj, const char* str, int commaNeeded);
void print_VkFramebufferAttachmentImageInfo(const VkFramebufferAttachmentImageInfo* obj, const char* str, int commaNeeded);
void print_VkRenderPassAttachmentBeginInfo(const VkRenderPassAttachmentBeginInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(const VkPhysicalDeviceTextureCompressionASTCHDRFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_texture_compression_astc_hdr
void print_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_ycbcr_image_arrays
void print_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPipelineCreationFeedback(const VkPipelineCreationFeedback* obj, const char* str, int commaNeeded);
void print_VkPipelineCreationFeedbackCreateInfo(const VkPipelineCreationFeedbackCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_performance_query
void print_VkPhysicalDevicePerformanceQueryFeaturesKHR(const VkPhysicalDevicePerformanceQueryFeaturesKHR* obj, const char* str, int commaNeeded);
void print_VkPhysicalDevicePerformanceQueryPropertiesKHR(const VkPhysicalDevicePerformanceQueryPropertiesKHR* obj, const char* str, int commaNeeded);
void print_VkPerformanceCounterKHR(const VkPerformanceCounterKHR* obj, const char* str, int commaNeeded);
void print_VkPerformanceCounterDescriptionKHR(const VkPerformanceCounterDescriptionKHR* obj, const char* str, int commaNeeded);
void print_VkQueryPoolPerformanceCreateInfoKHR(const VkQueryPoolPerformanceCreateInfoKHR* obj, const char* str, int commaNeeded);
void print_VkAcquireProfilingLockInfoKHR(const VkAcquireProfilingLockInfoKHR* obj, const char* str, int commaNeeded);
void print_VkPerformanceQuerySubmitInfoKHR(const VkPerformanceQuerySubmitInfoKHR* obj, const char* str, int commaNeeded);
void print_VkPerformanceQueryReservationInfoKHR(const VkPerformanceQueryReservationInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_headless_surface
void print_VkHeadlessSurfaceCreateInfoEXT(const VkHeadlessSurfaceCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_shader_clock
void print_VkPhysicalDeviceShaderClockFeaturesKHR(const VkPhysicalDeviceShaderClockFeaturesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceIndexTypeUint8Features(const VkPhysicalDeviceIndexTypeUint8Features* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_index_type_uint8
void print_VkPhysicalDeviceIndexTypeUint8FeaturesKHR(const VkPhysicalDeviceIndexTypeUint8FeaturesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_index_type_uint8
void print_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_fragment_shader_interlock
void print_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* obj, const char* str, int commaNeeded);
void print_VkAttachmentReferenceStencilLayout(const VkAttachmentReferenceStencilLayout* obj, const char* str, int commaNeeded);
void print_VkAttachmentDescriptionStencilLayout(const VkAttachmentDescriptionStencilLayout* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_shader_demote_to_helper_invocation
void print_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_texel_buffer_alignment
void print_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceTexelBufferAlignmentProperties(const VkPhysicalDeviceTexelBufferAlignmentProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_texel_buffer_alignment
void print_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceSubgroupSizeControlFeatures(const VkPhysicalDeviceSubgroupSizeControlFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_subgroup_size_control
void print_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceSubgroupSizeControlProperties(const VkPhysicalDeviceSubgroupSizeControlProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_subgroup_size_control
void print_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_subgroup_size_control
void print_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkMemoryOpaqueCaptureAddressAllocateInfo(const VkMemoryOpaqueCaptureAddressAllocateInfo* obj, const char* str, int commaNeeded);
void print_VkDeviceMemoryOpaqueCaptureAddressInfo(const VkDeviceMemoryOpaqueCaptureAddressInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceLineRasterizationFeatures(const VkPhysicalDeviceLineRasterizationFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_line_rasterization
void print_VkPhysicalDeviceLineRasterizationFeaturesKHR(const VkPhysicalDeviceLineRasterizationFeaturesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_line_rasterization
void print_VkPhysicalDeviceLineRasterizationFeaturesEXT(const VkPhysicalDeviceLineRasterizationFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceLineRasterizationProperties(const VkPhysicalDeviceLineRasterizationProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_line_rasterization
void print_VkPhysicalDeviceLineRasterizationPropertiesKHR(const VkPhysicalDeviceLineRasterizationPropertiesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_line_rasterization
void print_VkPhysicalDeviceLineRasterizationPropertiesEXT(const VkPhysicalDeviceLineRasterizationPropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPipelineRasterizationLineStateCreateInfo(const VkPipelineRasterizationLineStateCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_line_rasterization
void print_VkPipelineRasterizationLineStateCreateInfoKHR(const VkPipelineRasterizationLineStateCreateInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_line_rasterization
void print_VkPipelineRasterizationLineStateCreateInfoEXT(const VkPipelineRasterizationLineStateCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDevicePipelineCreationCacheControlFeatures(const VkPhysicalDevicePipelineCreationCacheControlFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_2
void print_VkPhysicalDeviceVulkan11Features(const VkPhysicalDeviceVulkan11Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVulkan11Properties(const VkPhysicalDeviceVulkan11Properties* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVulkan12Features(const VkPhysicalDeviceVulkan12Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVulkan12Properties(const VkPhysicalDeviceVulkan12Properties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceVulkan13Features(const VkPhysicalDeviceVulkan13Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVulkan13Properties(const VkPhysicalDeviceVulkan13Properties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceVulkan14Features(const VkPhysicalDeviceVulkan14Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVulkan14Properties(const VkPhysicalDeviceVulkan14Properties* obj, const char* str, int commaNeeded);
#endif
#ifdef VKSC_VERSION_1_0
void print_VkFaultData(const VkFaultData* obj, const char* str, int commaNeeded);
void print_VkFaultCallbackInfo(const VkFaultCallbackInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceToolProperties(const VkPhysicalDeviceToolProperties* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_custom_border_color
void print_VkSamplerCustomBorderColorCreateInfoEXT(const VkSamplerCustomBorderColorCreateInfoEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceCustomBorderColorPropertiesEXT(const VkPhysicalDeviceCustomBorderColorPropertiesEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceCustomBorderColorFeaturesEXT(const VkPhysicalDeviceCustomBorderColorFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_object_refresh
void print_VkRefreshObjectKHR(const VkRefreshObjectKHR* obj, const char* str, int commaNeeded);
void print_VkRefreshObjectListKHR(const VkRefreshObjectListKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_extended_dynamic_state
void print_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_extended_dynamic_state2
void print_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VKSC_VERSION_1_0
void print_VkPipelineOfflineCreateInfo(const VkPipelineOfflineCreateInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_robustness2
void print_VkPhysicalDeviceRobustness2FeaturesEXT(const VkPhysicalDeviceRobustness2FeaturesEXT* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceRobustness2PropertiesEXT(const VkPhysicalDeviceRobustness2PropertiesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceImageRobustnessFeatures(const VkPhysicalDeviceImageRobustnessFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_image_robustness
void print_VkPhysicalDeviceImageRobustnessFeaturesEXT(const VkPhysicalDeviceImageRobustnessFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_4444_formats
void print_VkPhysicalDevice4444FormatsFeaturesEXT(const VkPhysicalDevice4444FormatsFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkBufferCopy2(const VkBufferCopy2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkBufferCopy2KHR(const VkBufferCopy2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkImageCopy2(const VkImageCopy2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkImageCopy2KHR(const VkImageCopy2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkImageBlit2(const VkImageBlit2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkImageBlit2KHR(const VkImageBlit2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkBufferImageCopy2(const VkBufferImageCopy2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkBufferImageCopy2KHR(const VkBufferImageCopy2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkImageResolve2(const VkImageResolve2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkImageResolve2KHR(const VkImageResolve2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkCopyBufferInfo2(const VkCopyBufferInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkCopyBufferInfo2KHR(const VkCopyBufferInfo2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkCopyImageInfo2(const VkCopyImageInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkCopyImageInfo2KHR(const VkCopyImageInfo2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkBlitImageInfo2(const VkBlitImageInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkBlitImageInfo2KHR(const VkBlitImageInfo2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkCopyBufferToImageInfo2(const VkCopyBufferToImageInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkCopyBufferToImageInfo2KHR(const VkCopyBufferToImageInfo2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkCopyImageToBufferInfo2(const VkCopyImageToBufferInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkCopyImageToBufferInfo2KHR(const VkCopyImageToBufferInfo2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkResolveImageInfo2(const VkResolveImageInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_copy_commands2
void print_VkResolveImageInfo2KHR(const VkResolveImageInfo2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_shader_image_atomic_int64
void print_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_fragment_shading_rate
void print_VkFragmentShadingRateAttachmentInfoKHR(const VkFragmentShadingRateAttachmentInfoKHR* obj, const char* str, int commaNeeded);
void print_VkPipelineFragmentShadingRateStateCreateInfoKHR(const VkPipelineFragmentShadingRateStateCreateInfoKHR* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(const VkPhysicalDeviceFragmentShadingRateFeaturesKHR* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(const VkPhysicalDeviceFragmentShadingRatePropertiesKHR* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceFragmentShadingRateKHR(const VkPhysicalDeviceFragmentShadingRateKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceShaderTerminateInvocationFeatures(const VkPhysicalDeviceShaderTerminateInvocationFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_shader_terminate_invocation
void print_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(const VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_vertex_input_dynamic_state
void print_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* obj, const char* str, int commaNeeded);
void print_VkVertexInputBindingDescription2EXT(const VkVertexInputBindingDescription2EXT* obj, const char* str, int commaNeeded);
void print_VkVertexInputAttributeDescription2EXT(const VkVertexInputAttributeDescription2EXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_color_write_enable
void print_VkPhysicalDeviceColorWriteEnableFeaturesEXT(const VkPhysicalDeviceColorWriteEnableFeaturesEXT* obj, const char* str, int commaNeeded);
void print_VkPipelineColorWriteCreateInfoEXT(const VkPipelineColorWriteCreateInfoEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkMemoryBarrier2(const VkMemoryBarrier2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkMemoryBarrier2KHR(const VkMemoryBarrier2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkImageMemoryBarrier2(const VkImageMemoryBarrier2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkImageMemoryBarrier2KHR(const VkImageMemoryBarrier2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkBufferMemoryBarrier2(const VkBufferMemoryBarrier2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkBufferMemoryBarrier2KHR(const VkBufferMemoryBarrier2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkDependencyInfo(const VkDependencyInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkDependencyInfoKHR(const VkDependencyInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkSemaphoreSubmitInfo(const VkSemaphoreSubmitInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkSemaphoreSubmitInfoKHR(const VkSemaphoreSubmitInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkCommandBufferSubmitInfo(const VkCommandBufferSubmitInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkCommandBufferSubmitInfoKHR(const VkCommandBufferSubmitInfoKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkSubmitInfo2(const VkSubmitInfo2* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkSubmitInfo2KHR(const VkSubmitInfo2KHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceSynchronization2Features(const VkPhysicalDeviceSynchronization2Features* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_KHR_synchronization2
void print_VkPhysicalDeviceSynchronization2FeaturesKHR(const VkPhysicalDeviceSynchronization2FeaturesKHR* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDeviceHostImageCopyFeatures(const VkPhysicalDeviceHostImageCopyFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceHostImageCopyProperties(const VkPhysicalDeviceHostImageCopyProperties* obj, const char* str, int commaNeeded);
void print_VkMemoryToImageCopy(const VkMemoryToImageCopy* obj, const char* str, int commaNeeded);
void print_VkImageToMemoryCopy(const VkImageToMemoryCopy* obj, const char* str, int commaNeeded);
void print_VkCopyMemoryToImageInfo(const VkCopyMemoryToImageInfo* obj, const char* str, int commaNeeded);
void print_VkCopyImageToMemoryInfo(const VkCopyImageToMemoryInfo* obj, const char* str, int commaNeeded);
void print_VkCopyImageToImageInfo(const VkCopyImageToImageInfo* obj, const char* str, int commaNeeded);
void print_VkHostImageLayoutTransitionInfo(const VkHostImageLayoutTransitionInfo* obj, const char* str, int commaNeeded);
void print_VkSubresourceHostMemcpySize(const VkSubresourceHostMemcpySize* obj, const char* str, int commaNeeded);
void print_VkHostImageCopyDevicePerformanceQuery(const VkHostImageCopyDevicePerformanceQuery* obj, const char* str, int commaNeeded);
#endif
#ifdef VKSC_VERSION_1_0
void print_VkPhysicalDeviceVulkanSC10Properties(const VkPhysicalDeviceVulkanSC10Properties* obj, const char* str, int commaNeeded);
void print_VkPipelinePoolSize(const VkPipelinePoolSize* obj, const char* str, int commaNeeded);
void print_VkDeviceObjectReservationCreateInfo(const VkDeviceObjectReservationCreateInfo* obj, const char* str, int commaNeeded);
void print_VkCommandPoolMemoryReservationCreateInfo(const VkCommandPoolMemoryReservationCreateInfo* obj, const char* str, int commaNeeded);
void print_VkCommandPoolMemoryConsumption(const VkCommandPoolMemoryConsumption* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceVulkanSC10Features(const VkPhysicalDeviceVulkanSC10Features* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkPhysicalDevicePipelineProtectedAccessFeatures(const VkPhysicalDevicePipelineProtectedAccessFeatures* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_ycbcr_2plane_444_formats
void print_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPhysicalDeviceShaderIntegerDotProductFeatures(const VkPhysicalDeviceShaderIntegerDotProductFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceShaderIntegerDotProductProperties(const VkPhysicalDeviceShaderIntegerDotProductProperties* obj, const char* str, int commaNeeded);
void print_VkFormatProperties3(const VkFormatProperties3* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_EXT_image_drm_format_modifier
void print_VkDrmFormatModifierPropertiesList2EXT(const VkDrmFormatModifierPropertiesList2EXT* obj, const char* str, int commaNeeded);
void print_VkDrmFormatModifierProperties2EXT(const VkDrmFormatModifierProperties2EXT* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_3
void print_VkPipelineRenderingCreateInfo(const VkPipelineRenderingCreateInfo* obj, const char* str, int commaNeeded);
void print_VkRenderingInfo(const VkRenderingInfo* obj, const char* str, int commaNeeded);
void print_VkRenderingAttachmentInfo(const VkRenderingAttachmentInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceDynamicRenderingFeatures(const VkPhysicalDeviceDynamicRenderingFeatures* obj, const char* str, int commaNeeded);
void print_VkCommandBufferInheritanceRenderingInfo(const VkCommandBufferInheritanceRenderingInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkImageSubresource2(const VkImageSubresource2* obj, const char* str, int commaNeeded);
void print_VkSubresourceLayout2(const VkSubresourceLayout2* obj, const char* str, int commaNeeded);
void print_VkPhysicalDevicePipelineRobustnessFeatures(const VkPhysicalDevicePipelineRobustnessFeatures* obj, const char* str, int commaNeeded);
void print_VkPipelineRobustnessCreateInfo(const VkPipelineRobustnessCreateInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDevicePipelineRobustnessProperties(const VkPhysicalDevicePipelineRobustnessProperties* obj, const char* str, int commaNeeded);
void print_VkDeviceImageSubresourceInfo(const VkDeviceImageSubresourceInfo* obj, const char* str, int commaNeeded);
void print_VkMemoryMapInfo(const VkMemoryMapInfo* obj, const char* str, int commaNeeded);
void print_VkMemoryUnmapInfo(const VkMemoryUnmapInfo* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_QNX_external_memory_screen_buffer
void print_VkImportScreenBufferInfoQNX(const VkImportScreenBufferInfoQNX* obj, const char* str, int commaNeeded);
void print_VkScreenBufferPropertiesQNX(const VkScreenBufferPropertiesQNX* obj, const char* str, int commaNeeded);
void print_VkScreenBufferFormatPropertiesQNX(const VkScreenBufferFormatPropertiesQNX* obj, const char* str, int commaNeeded);
void print_VkExternalFormatQNX(const VkExternalFormatQNX* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX* obj, const char* str, int commaNeeded);
#endif
#ifdef VK_VERSION_1_4
void print_VkBindMemoryStatus(const VkBindMemoryStatus* obj, const char* str, int commaNeeded);
void print_VkBindDescriptorSetsInfo(const VkBindDescriptorSetsInfo* obj, const char* str, int commaNeeded);
void print_VkPushConstantsInfo(const VkPushConstantsInfo* obj, const char* str, int commaNeeded);
void print_VkPushDescriptorSetInfo(const VkPushDescriptorSetInfo* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceShaderSubgroupRotateFeatures(const VkPhysicalDeviceShaderSubgroupRotateFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceShaderExpectAssumeFeatures(const VkPhysicalDeviceShaderExpectAssumeFeatures* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceShaderFloatControls2Features(const VkPhysicalDeviceShaderFloatControls2Features* obj, const char* str, int commaNeeded);
void print_VkPhysicalDeviceDynamicRenderingLocalReadFeatures(const VkPhysicalDeviceDynamicRenderingLocalReadFeatures* obj, const char* str, int commaNeeded);
void print_VkRenderingAttachmentLocationInfo(const VkRenderingAttachmentLocationInfo* obj, const char* str, int commaNeeded);
void print_VkRenderingInputAttachmentIndexInfo(const VkRenderingInputAttachmentIndexInfo* obj, const char* str, int commaNeeded);
#endif
/*************************************** End prototypes ***********************************/


void dumpPNextChain(const void* pNext);

