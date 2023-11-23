#include <iostream>
#include <ctime>

int main() {

    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch (randNum) {
        case 1:
            std::cout << "You will get a new job." << std::endl;
            break;
        case 2:
            std::cout << "You will get a new car." << std::endl;
            break;
        case 3:
            std::cout << "You will get a new house." << std::endl;
            break;
        case 4:
            std::cout << "You will get a new pet." << std::endl;
            break;
        case 5:
            std::cout << "You will get a new phone." << std::endl;
            break;
        default:
            std::cout << "Something went wrong." << std::endl;
    }

    return 0;
}