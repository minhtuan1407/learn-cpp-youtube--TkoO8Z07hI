#include <iostream>

int main() {

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    // int grade = 75;

    // if (grade > 60) {
    //     std::cout << "Pass" << std::endl;
    // }
    // else {
    //     std::cout << "Fail" << std::endl;
    // }

    // grade >= 60 ? std::cout << "Pass" << std::endl : std::cout << "Fail" << std::endl;



    // int number = 9;

    // number % 2 ? std::cout << "Odd" << std::endl : std::cout << "Even" << std::endl;



    bool hungry = true;

    // hungry == true ? std::cout << "Eat something" << std::endl : std::cout << "Do work" << std::endl;

    std::cout << (hungry ? "Eat something" : "Do work") << std::endl;

    return 0;
}