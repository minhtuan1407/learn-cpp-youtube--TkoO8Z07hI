#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "x = " << &x << std::endl;
    std::cout << "y = " << &y << std::endl;

    return 0;
}

void swap(std::string &x, std::string &y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "x = " << &x << std::endl;
    std::cout << "y = " << &y << std::endl;

}