#include <iostream>

int main() {

    // int x; // Declaration
    // x = 5; // Assignment

    int x = 5;
    int y = 6;
    int sum = x + y;

    // integer (whole number)
    int age = 25;
    int year = 2023;
    // int days = 25.5;

    // double (decimal number)
    double price = 10.99;
    double gpa = 3.5;
    double temperature = 98.6;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represent a sequence of text)
    std::string name = "Tuan";
    std::string day = "Monday";
    std::string food = "pizza";
    std::string address = "123 Main St.";

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}