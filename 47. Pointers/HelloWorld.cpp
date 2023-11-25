#include <iostream>

int main() {

    // pointers = variable that stores a memory address of another variable
    // somethimes it's easier to work with a memory address than the variable itself

    // & address-of operator
    // * dereference operator

    std::string name = "Tuan";
    int age = 25;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *ptName = &name;
    int *ptAge = &age;
    std::string *ptFreePizzas = freePizzas;

    std::cout << *ptName << std::endl;
    std::cout << *ptAge << std::endl;
    std::cout << *ptFreePizzas << " - " << freePizzas << std::endl;

    return 0;
}
