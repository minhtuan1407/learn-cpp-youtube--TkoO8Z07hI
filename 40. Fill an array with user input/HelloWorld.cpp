#include <iostream>

int main() {

    std::string foods[5];

    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food you like #" << i + 1 << " or 'q' to exit: ";
        std::getline(std::cin, temp);
        if (temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }

    std::cout << "Foods you like: " << std::endl;

    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << std::endl;
    }

    return 0;
}
