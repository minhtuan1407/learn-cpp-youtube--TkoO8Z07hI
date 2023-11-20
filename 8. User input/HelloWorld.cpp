#include <iostream>

int main() {
    // cout << (insertion operation)
    // cin >> (extraction operation)

    std::string name;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age; // \n (enter) is left in the input stream

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name); // std::ws = whitespace character

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}