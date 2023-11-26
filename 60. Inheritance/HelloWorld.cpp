#include <iostream>

class Animal{
    public:
        bool alive = true;

    void eat() {
        std::cout << "This animal is eating" << std::endl;
    }
};

class Dog : public Animal {
    public:
    void bark() {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

class Cat : public Animal {
    public:
    void meow() {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {

    // inheritance = A class can receive attributes and methods from another class
    //               Children classes inherit from a parent class
    //               Helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    std::cout << cat.alive << std::endl;
    cat.eat();
    // cat.bark();
    cat.meow();

    

    return 0;
}
