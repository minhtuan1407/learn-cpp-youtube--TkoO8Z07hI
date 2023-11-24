#include <iostream>

void happyBirthday(std::string name, int age);

int main() {

    // function = a block of reusable code

    std::string name = "Tuan";
    int age = 25;

    for (int i = 0; i < 10; i++) {
        happyBirthday(name, age);
    }
    return 0;
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to "<< name << std::endl;
    std::cout << "You are now " << age << " years old!" << std::endl;
}