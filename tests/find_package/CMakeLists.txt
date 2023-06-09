cmake_minimum_required(VERSION 3.14.2)

project(TEST_VULKAN_HEADERS_FIND_PACKAGE_SUPPORT LANGUAGES C)

find_package(VulkanHeaders REQUIRED CONFIG)

if (NOT TARGET Vulkan::Headers)
    message(FATAL_ERROR "Vulkan::Headers target not defined")
endif()

if (NOT DEFINED VULKAN_HEADERS_REGISTRY_DIRECTORY)
    message(FATAL_ERROR "VULKAN_HEADERS_REGISTRY_DIRECTORY not defined!")
endif()

if (NOT EXISTS "${VULKAN_HEADERS_REGISTRY_DIRECTORY}/vk.xml")
    message(FATAL_ERROR "VULKAN_HEADERS_REGISTRY_DIRECTORY not valid!")
endif()
message(STATUS "VULKAN_HEADERS_REGISTRY_DIRECTORY = ${VULKAN_HEADERS_REGISTRY_DIRECTORY}")

if (NOT DEFINED VulkanHeaders_VERSION)
    message(FATAL_ERROR "VulkanHeaders_VERSION not defined!")
endif()
message(STATUS "VulkanHeaders_VERSION = ${VulkanHeaders_VERSION}")

add_library(foobar STATIC)

target_link_libraries(foobar PRIVATE Vulkan::Headers)

target_sources(foobar PRIVATE
    ../vk_icd.c
    ../vk_layer.c
)
