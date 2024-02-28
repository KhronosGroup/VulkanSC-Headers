<!--
Copyright 2018-2024 The Khronos Group Inc.

SPDX-License-Identifier: Apache-2.0
-->

# Vulkan SC Build Instructions

Build the Vulkan SC headers from this repository as follows:

```bash
cmake -DVULKANSC=ON -S . -B build/
cmake --install build --prefix build/install
```

Build the combined Vulkan SC headers used by ecosystem components as follows:
```bash
cmake -DVULKANSC=ON -DGEN_VULKANSC_COMBINED -S . -B build/
cmake --build build
cmake --install build --prefix build/install
```


# Build Instructions

Instructions for building this repository.

```bash
git clone https://github.com/KhronosGroup/VulkanSC-Headers.git

cd VulkanSC-Headers/

# Configure the project
cmake -S . -B build/ -DVULKANSC=ON

# Because Vulkan-Headers is header only we don't need to build anything.
# Users can install it where they need to.
cmake --install build --prefix build/install
```

See the official [CMake documentation](https://cmake.org/cmake/help/latest/index.html) for more information.

## Installed Files

The `install` target installs the following files under the directory
indicated by *install_dir*:

- *install_dir*`/include/vulkan` : The header files found in the
 `include/vulkan` directory of this repository
- *install_dir*`/share/cmake/VulkanHeaders`: The CMake config files needed
  for find_package support
- *install_dir*`/share/vulkansc/registry` : The registry files found in the
  `registry` directory of this repository

## Usage in CMake

```cmake
find_package(VulkanHeaders REQUIRED CONFIG)

target_link_libraries(foobar PRIVATE Vulkan::Headers)

message(STATUS "Vulkan SC Headers Version: ${VulkanHeaders_VERSION}")
```
