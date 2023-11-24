#include <iostream>

int main() {

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "Guess a number between 1 and 100: ";

    do {
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high!" << std::endl;
        } else if (guess < num) {
            std::cout << "Too low!" << std::endl;
        } else {
            std::cout << "Correct! You got it in " << tries << " guesses!" << std::endl;
        }
    } while (guess != num);

    return 0;
}