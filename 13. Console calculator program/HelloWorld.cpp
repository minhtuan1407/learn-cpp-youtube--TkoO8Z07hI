#include <iostream>

int main() {

    char op;
    double num1, num2;
    double result;

    std::cout << "======================CALCULATOR======================" << std::endl;
    std::cout << "Enter operator either + or - or * or /: ";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator";
            break;
    }

    std::cout << num1 << " " << op << " " << num2 << " = " << result << std::endl;

    std::cout << "======================================================" << std::endl;

    return 0;
}