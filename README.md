# Shared Library Loader

A C++ class for dynamically loading shared libraries (.dll) on Windows using the Windows API.

## Prerequisites

- Windows operating system
- C++ compiler

## Usage

1. Include the `shared_library_loader.h` header file:

   ```cpp
   #include <shared_library_loader.h>

2.Create an instance of the Shared_Library_Loader class by providing the name of the library as a constructor argument:

   ```cpp
   Shared_Library_Loader loader("library_name");
