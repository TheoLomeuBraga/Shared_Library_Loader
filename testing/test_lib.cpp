#include <iostream>

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

extern "C" EXPORT void* hello(void* arg) {
    std::cout << "Hello, I am a shared library." << std::endl;
    return arg;
}