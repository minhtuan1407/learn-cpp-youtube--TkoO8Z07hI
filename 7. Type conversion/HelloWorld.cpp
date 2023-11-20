#include <iostream>

int main() {
    // type conversion = conversion a value of one data type to another
    // implicit = automatic
    // explicit = precede value with new data type (int)

    // double x = (int) 3.14;
    // char x = 100;

    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100;

    std::cout << score << " %" << std::endl;

    return 0;
}