#include <iostream>

int main() {

    // foreach loop = loop that eases the traversal over an
    // iterable data set

    std::string students[] = {"Spongebob", "Patrick", "Sandy", "Squidward"};

    for (std::string student : students) {
        std::cout << student << std::endl;
    }

    int grades[] = {65, 74, 85, 55, 90};
    for (int grade : grades) {
        std::cout << grade << std::endl;
    }

    return 0;
}
