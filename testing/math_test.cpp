#include "../shared_library_loader.h"
#include "math.h"
#include <iostream>

int main() {
    Shared_Library_Loader sll("math_lib");
    math m = {20,80};
    float *result =(float *)sll.call_function("sum",&m);
    std::cout << *result << std::endl;
    delete result;
    return 0;
}