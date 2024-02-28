# ~~~
# Copyright 2023-2024 The Khronos Group Inc.
# Copyright 2023-2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~
if(GEN_VULKANSC_COMBINED)
    find_package(PythonInterp 3 QUIET)
    if (PYTHONINTERP_FOUND)
        set(genvk_py ${CMAKE_CURRENT_SOURCE_DIR}/registry/genvk.py)
        if (NOT EXISTS ${genvk_py})
            message(FATAL_ERROR "Unable to find genvk.py!")
        endif()

        set(COMBINED_VULKAN_HEADERS
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_core.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_android.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_fuchsia.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_ggp.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_ios.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_macos.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_vi.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_wayland.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_win32.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_xcb.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_xlib.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_directfb.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_xlib_xrandr.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_metal.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_screen.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_sci.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan/vulkan_beta.h)

        foreach(COMBINED_VULKAN_HEADER ${COMBINED_VULKAN_HEADERS})
            get_filename_component(COMBINED_VULKAN_HEADER_FILENAME ${COMBINED_VULKAN_HEADER} NAME)
            add_custom_command(
                OUTPUT ${COMBINED_VULKAN_HEADER}
                DEPENDS ${genvk_py}
                    ${CMAKE_CURRENT_SOURCE_DIR}/registry/reg.py
                    ${CMAKE_CURRENT_SOURCE_DIR}/registry/generator.py
                    ${CMAKE_CURRENT_SOURCE_DIR}/registry/vk.xml
                COMMAND ${PYTHON_EXECUTABLE} ${genvk_py} -registry ${CMAKE_CURRENT_SOURCE_DIR}/registry/vk.xml
                    -apiname vulkansc -mergeApiNames vulkan -defaultExtensions vulkansc
                    -o ${CMAKE_CURRENT_BINARY_DIR}/include/vulkan
                    ${COMBINED_VULKAN_HEADER_FILENAME}
            )
        endforeach()

        set(COMBINED_VK_VIDEO_HEADERS
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codecs_common.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_h264std.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_h264std_decode.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_h264std_encode.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_h265std.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_h265std_decode.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_h265std_encode.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_av1std.h
            ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video/vulkan_video_codec_av1std_decode.h)

        foreach(COMBINED_VK_VIDEO_HEADER ${COMBINED_VK_VIDEO_HEADERS})
            get_filename_component(COMBINED_VK_VIDEO_HEADER_FILENAME ${COMBINED_VK_VIDEO_HEADER} NAME)
            add_custom_command(
                OUTPUT ${COMBINED_VK_VIDEO_HEADER}
                DEPENDS ${genvk_py}
                    ${CMAKE_CURRENT_SOURCE_DIR}
                    ${CMAKE_CURRENT_SOURCE_DIR}/registry/reg.py
                    ${CMAKE_CURRENT_SOURCE_DIR}/registry/generator.py
                    ${CMAKE_CURRENT_SOURCE_DIR}/registry/video.xml
                COMMAND ${PYTHON_EXECUTABLE} ${genvk_py} -registry ${CMAKE_CURRENT_SOURCE_DIR}/registry/video.xml
                    -apiname vulkansc -mergeApiNames vulkan -defaultExtensions vulkansc
                    -o ${CMAKE_CURRENT_BINARY_DIR}/include/vk_video
                    ${COMBINED_VK_VIDEO_HEADER_FILENAME}
            )
        endforeach()

        file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/include/vulkan")
        install(FILES ${COMBINED_VULKAN_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/vulkan)
        install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/vulkan/vk_icd.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/vulkan)
        install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/vulkan/vk_layer.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/vulkan)
        install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/vulkan/vk_platform.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/vulkan)
        install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/vksc_combined.h.in DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/vulkan RENAME vulkan.h)
        # For compatibility we also publish the combined base header as vulkan_sc.h
        install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/vksc_combined.h.in DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/vulkan RENAME vulkan_sc.h)
        file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/include/vk_video")
        install(FILES ${COMBINED_VK_VIDEO_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/vk_video)

        add_custom_target(GenVulkanSCCombined ALL DEPENDS ${COMBINED_VULKAN_HEADERS} ${COMBINED_VK_VIDEO_HEADERS})
    else()
        message(FATAL_ERROR "Generating combined Vulkan SC headers requires python 3")
    endif()
endif()
