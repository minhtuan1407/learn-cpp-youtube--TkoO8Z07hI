#include <iostream>

int main() {

    std::string students[] = {"Spongebob", "Patrick", "Sandy", "Squidward"};

    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << std::endl;
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
        std::cout << grades[i] << std::endl;
    }

    return 0;
}
