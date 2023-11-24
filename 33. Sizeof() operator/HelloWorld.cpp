#include <iostream>

int main() {

    // sizeof() = determines the size in bytes of a:
    // variable, data type, class, objects, etc.

    std::string name = "Tuan";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Sandy", "Squidward"};


    std::cout << sizeof(students)/sizeof(std::string) << " elements" << std::endl;

    return 0;
}
