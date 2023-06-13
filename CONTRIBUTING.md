# CONTRIBUTING

Please note when contributing what files this repository actually is responsible for.

The majority for the Vulkan SC headers come from [VulkanSC-Docs](https://github.com/KhronosGroup/VulkanSC-Docs) or [Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp)

### This repository (https://github.com/KhronosGroup/VulkanSC-Headers)

* BUILD.gn
* BUILD.md
* cmake/
* CMakeLists.txt
* tests/*
* CODE_OF_CONDUCT.md
* INTEGRATION.md
* LICENSE.txt
* README.md
* Non-API headers
  * include/vulkan/vk_icd.h
  * include/vulkan/vk_layer.h

### Specification repository (https://github.com/KhronosGroup/VulkanSC-Docs)

* registry/*.py
* registry/spec_tools/*.py
* registry/profiles/*.json
* All files under include/vulkan/ which are *not* listed explicitly as originating from another repository.
