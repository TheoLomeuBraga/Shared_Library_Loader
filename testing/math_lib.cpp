#include "math.h"

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

extern "C" EXPORT void* sum(void* arg) {
    math m = *(math*)arg;
    float* result = new float(m.A + m.B);
    return (void*)result;
}