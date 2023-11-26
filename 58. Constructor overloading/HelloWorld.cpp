#include <iostream>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;

    Pizza(std::string topping1) {
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

    Pizza() {

    }

};

int main() {

    // overloaded constructors = multiple constructors with same name, but different parameters
    //                           allows for varying arguements when initializing an object

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom", "Pepperoni");
    Pizza pizza3;

    std::cout << pizza1.topping1 << std::endl;
    std::cout << pizza2.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl;
    return 0;
}
