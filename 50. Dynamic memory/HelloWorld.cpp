#include <iostream>

int main() {

    // dynamic memory = Memory that is allocated after the program
    // is already compiled and running
    // Use the 'new' operator to allocate
    // memory in the heap rather than the stack

    // Useful when we don't know how much memory
    // we will need. Makes our program more flexible,
    // especially when accepting user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 25;

    std::cout << "Address: " << pNum << std::endl;
    std::cout << "Value: " << *pNum << std::endl;

    delete pNum;

    char *pGrades = NULL;

    int size;
    std::cout << "How many grades would you like to enter? ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << "Grade " << i + 1 << ": " << pGrades[i] << std::endl;
    }

    delete[] pGrades;

    return 0;
}
