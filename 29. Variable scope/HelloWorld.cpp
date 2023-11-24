#include <iostream>

int myNum = 3;

void printNum();

int main() {

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions
    // Local first, then global

    int myNum = 1; // Local variable
    printNum();

    std::cout << ::myNum << std::endl;

    return 0;
}

void printNum() {
    int myNum = 2; // Local variable
    std::cout << ::myNum << std::endl;
}