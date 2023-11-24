#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();
    showChoice(player);

    computer = getComputerChoice();
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice() {
    char player;
    
    do {

        std::cout << "Rock, Paper, Scissors!" << std::endl;
        std::cout << "======================" << std::endl;
        std::cout << "Enter your choice (R/P/S): ";
        std::cin >> player;
        std::cout << "You chose: " << player << std::endl;

    }while (player != 'R' && player != 'P' && player != 'S');

    return player;
}

char getComputerChoice() {

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1:
            std::cout << "Computer chose: R" << std::endl;
            return 'R';
        case 2:
            std::cout << "Computer chose: P" << std::endl;
            return 'P';
        case 3:
            std::cout << "Computer chose: S" << std::endl;
            return 'S';
    }

    return 0;

}

void showChoice(char choice) {

    switch (choice) {
        case 'R':
            std::cout << "ROCK" << std::endl;
            break;
        case 'P':
            std::cout << "PAPER" << std::endl;
            break;
        case 'S':
            std::cout << "SCISSORS" << std::endl;
            break;
    }

}

void chooseWinner(char player, char computer) {
    
    switch (player) {
        case 'R':
            if (computer == 'R') {
                std::cout << "It's a tie!" << std::endl;
            } else if (computer == 'P') {
                std::cout << "Computer wins!" << std::endl;
            } else {
                std::cout << "You win!" << std::endl;
            }
            break;
        case 'P':
            if (computer == 'R') {
                std::cout << "You win!" << std::endl;
            } else if (computer == 'P') {
                std::cout << "It's a tie!" << std::endl;
            } else {
                std::cout << "Computer wins!" << std::endl;
            }
            break;
        case 'S':
            if (computer == 'R') {
                std::cout << "Computer wins!" << std::endl;
            } else if (computer == 'P') {
                std::cout << "You win!" << std::endl;
            } else {
                std::cout << "It's a tie!" << std::endl;
            }
            break;
    }

}