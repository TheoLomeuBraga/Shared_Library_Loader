#include "../shared_library_loader.h"
#include "math.h"
#include <iostream>

typedef float (*math_function)(float,float);

int main() {
    Shared_Library_Loader sll("math_lib");
    math m = {20,80};
    float *result =(float *)sll.call_function("sum",&m);
    std::cout << *result << std::endl;
    delete result;

    math_function do_math = reinterpret_cast<math_function>(sll.call_function("get_do_math",NULL));
    std::cout << do_math(20,80) << std::endl;
    return 0;
}