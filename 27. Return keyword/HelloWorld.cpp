#include <iostream>

double square(double length);
double cube(double length);

std::string concatStrings(std::string str1, std::string str2);

int main() {

    // return = return a value back to the spot
    // where you called the encompassing function

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << " cm^2 " << std::endl; // "Area: 25
    std::cout << "Volume: " << volume << " cm^3 " << std::endl; // "Volume: 125

    std::string firstName = "Tuan";
    std::string lastName = "Nguyen";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName << std::endl; // "Tuan Nguyen"

    return 0;
}

double square(double length) {
    double result = length * length;
    return result;
}

double cube(double length) {
    double result = length * length * length;
    return result;
}

std::string concatStrings(std::string str1, std::string str2) {
    std::string result = str1 + " " + str2;
    return result;
}