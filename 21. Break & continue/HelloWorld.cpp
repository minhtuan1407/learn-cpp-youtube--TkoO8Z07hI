#include <iostream>

int main() {

    // break = break out of loop
    // continue = skip current iteration of loop

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue;
        }

        std::cout << i << std::endl;

        if (i == 19) {
            break;
        }
    }

    return 0;
}