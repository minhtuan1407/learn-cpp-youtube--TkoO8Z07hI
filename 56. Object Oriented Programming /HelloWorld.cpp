#include <iostream>

class Human {
    public:
        std::string name = "Rick";
        std::string occupation = "Scientist";
        int age = 70;

        void eat() {
            std::cout << "This person is eating" << std::endl;
        }
        void drink() {
            std::cout << "This person is drinking" << std::endl;
        }
        void sleep() {
            std::cout << "This person is sleeping" << std::endl;
        }
};

int main() {

    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world iterms (ex. Phone, Book, Car, etc.)
    //          Created from a class which acts as a "blue-print"

    Human human1;
    Human human2;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    std::cout << human2.name << std::endl;
    std::cout << human2.occupation << std::endl;
    std::cout << human2.age << std::endl; 

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}
