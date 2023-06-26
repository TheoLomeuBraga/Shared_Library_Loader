#include "../shared_library_loader.h"

int main() {
    Shared_Library_Loader("test_lib").call_function("hello",NULL);
    return 0;
}