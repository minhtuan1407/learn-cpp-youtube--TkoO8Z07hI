#include <iostream>

void walk(int steps);
int factorial(int num);

int main() {

    // recursion = a programming technique where a function
    //             invokes itself from within
    //            break a complex conecpt into a repeatable single step

    // (iterative vs recursive)

    // advantages: less code and is cleaner
    //             useful for sorting and searching algorithms

    // disadvantages: uses more memory
    //                can be slower

    walk(3);
    std::cout << factorial(5) << std::endl;
    return 0;
}

void walk(int steps) {
    // for (int i = 0; i < steps; i++) {
    //     std::cout << "Taking a step" << std::endl;
    // }

    if (steps > 0) {
        std::cout << "Taking a step" << std::endl;
        walk(steps - 1);
        // walk(steps); // infinite loop, stack overflow
    }

}

int factorial(int num) {
    // int result = 1;

    // for (int i = 1; i <= num; i++) {
    //     result *= i;
    // }

    // return result;

    if (num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }

}   