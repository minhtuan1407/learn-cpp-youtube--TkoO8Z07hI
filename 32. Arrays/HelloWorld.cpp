#include <iostream>

int main() {

    // array = a data structure that can hold multiple values
    // values are accessed by an index number
    // "kind of like a variable that holds multiple values"

    std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    std::cout << prices[3] << std::endl;

    return 0;
}
