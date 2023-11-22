#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.append("@gmail.com");
    name.insert(0, "Mr. ");
    name.erase(2, 4);

    if (name.length() > 12) {
        std::cout << "Your name can't be over 12 characters" << std::endl;
    } else if (name.empty()) {
        std::cout << "You didn't enter anything" << std::endl;
    } else {
        std::cout << "Welcome " << name << std::endl;
    }

    return 0;
}