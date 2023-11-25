#include <iostream>

int main() {

    // null value = a special value that means something has no value
    // When a pointer is holding a null value,
    // that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an adress
    // was successully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer != nullptr) {
        std::cout << "pointer is pointing at " << pointer << std::endl;
        std::cout << "pointer value is " << *pointer << std::endl;
    } else {
        std::cout << "pointer is not pointing at anything" << std::endl;
    }

    return 0;
}
