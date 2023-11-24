#include <iostream>

void bakePizza();

void bakePizza(std::string topping1);

void bakePizza(std::string topping1, std::string topping2);

int main() {

    // bakePizza();
    // bakePizza("Pepperoni");
    bakePizza("Pepperoni", "Mushrooms");

    return 0;
}

void bakePizza() {
    std::cout << "Baking Pizza..." << std::endl;
}

void bakePizza(std::string topping1) {
    std::cout << "Baking Pizza with " << topping1 << "..." << std::endl;
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Baking Pizza with " << topping1 << " and " << topping2 << "..." << std::endl;
}