#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

        Student(std::string name, int age, double gpa) {
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
};

int main() {

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 26, 2.8);
    Student student3("Squidward", 27, 3.9);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    return 0;
}
