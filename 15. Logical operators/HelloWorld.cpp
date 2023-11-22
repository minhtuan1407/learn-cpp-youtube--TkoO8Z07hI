#include <iostream>

int main() {

    // && = check if two conditions are true
    // || = check if at least one of two conditions are true
    // ! = reverse the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad" << std::endl;
    } else {
        std::cout << "The temperature is good" << std::endl;
    }

    if (!sunny) {
        std::cout << "It is not sunny" << std::endl;
    } else {
        std::cout << "It is sunny" << std::endl;
    }
    return 0;
}