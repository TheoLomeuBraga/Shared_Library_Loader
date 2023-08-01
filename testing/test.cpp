#include "../shared_library_loader.h"

int main() {
    Shared_Library_Loader sll("test_lib");
    sll.call_function("hello",NULL);
    return 0;
}