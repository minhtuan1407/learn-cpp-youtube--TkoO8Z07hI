#include <iostream>

int main() {

    int rows;
    int columns;
    char symbol;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> columns;

    std::cout << "Enter symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        std::cout << std::endl;
        for (int j = 1; j <= columns; j++) {
            std::cout << symbol << " ";
        }
    }

    return 0;
}