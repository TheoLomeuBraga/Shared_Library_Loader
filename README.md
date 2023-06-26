# Shared Library Loader

A C++ class for dynamically loading shared libraries (.dll or .so) on Windows using the Windows API.

## Prerequisites

- C++ compiler

## Usage

1. Include the `shared_library_loader.h` header file:

   ```cpp
   #include <shared_library_loader.h>
   ```

2. Create an instance of the Shared_Library_Loader class by providing the name of the library as a constructor argument:

   ```cpp
   Shared_Library_Loader loader("library_name");
   ```

   Note: Replace "library_name" with the actual name of the library without the file extension.

3. Call the call_function method to invoke a function from the loaded library:
   ```cpp
   void* result = loader.call_function("function_name", arg);
   ```

   Replace "function_name" with the name of the function you want to call.
   arg is a pointer to the argument you want to pass to the function.

   Note: The call_function method returns a void* pointer, so you may need to cast it to the appropriate type based on the function you are calling.

4. set your OS type windows or unix like in build command:
    ```g++
    #for windows
    g++ -DWINDOWS -o example.exe example.cpp

    #for unix
    g++ -DUNIX -o example example.cpp
    ```