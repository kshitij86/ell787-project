# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/arihant-jammar/Documents/ELL787/Project/ESP-IDF/esp-idf/components/bootloader/subproject"
  "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader"
  "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader-prefix"
  "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader-prefix/tmp"
  "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader-prefix/src/bootloader-stamp"
  "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader-prefix/src"
  "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/arihant-jammar/Documents/ELL787/Project/ell787-project/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
