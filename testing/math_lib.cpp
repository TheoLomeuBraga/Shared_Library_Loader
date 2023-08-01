#include "math.h"

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

float do_math(float A,float B){return A*B;}

extern "C" EXPORT void* sum(void* arg) {
    math m = *(math*)arg;
    float* result = new float(m.A + m.B);
    return (void*)result;
}

extern "C" EXPORT void* get_do_math(void* arg) {
    return (void*)&do_math;
}