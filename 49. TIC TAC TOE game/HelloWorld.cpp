#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }

    }

    std::cout << "Game over!" << std::endl;

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << std::endl;

}

void playerMove(char *spaces, char player) {
    int number = 0;

    do {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> number;

        number--;

        if (spaces[number == ' ']) {
            spaces[number] = player;
            break;
        }

    } while (!(number >= 1 || !(number <= 8)));
}

void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {
    if ((spaces[0] == player && spaces[1] == player && spaces[2] == player) ||
        (spaces[3] == player && spaces[4] == player && spaces[5] == player) ||
        (spaces[6] == player && spaces[7] == player && spaces[8] == player) ||
        (spaces[0] == player && spaces[3] == player && spaces[6] == player) ||
        (spaces[1] == player && spaces[4] == player && spaces[7] == player) ||
        (spaces[2] == player && spaces[5] == player && spaces[8] == player) ||
        (spaces[0] == player && spaces[4] == player && spaces[8] == player) ||
        (spaces[2] == player && spaces[4] == player && spaces[6] == player)) {
        std::cout << "You win!" << std::endl;
        return true;
    } else if ((spaces[0] == computer && spaces[1] == computer && spaces[2] == computer) ||
               (spaces[3] == computer && spaces[4] == computer && spaces[5] == computer) ||
               (spaces[6] == computer && spaces[7] == computer && spaces[8] == computer) ||
               (spaces[0] == computer && spaces[3] == computer && spaces[6] == computer) ||
               (spaces[1] == computer && spaces[4] == computer && spaces[7] == computer) ||
               (spaces[2] == computer && spaces[5] == computer && spaces[8] == computer) ||
               (spaces[0] == computer && spaces[4] == computer && spaces[8] == computer) ||
               (spaces[2] == computer && spaces[4] == computer && spaces[6] == computer)) {
        std::cout << "You lose!" << std::endl;
        return true;
    } else {
        return false;
    }
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] != 'X' && spaces[i] != 'O') {
            return false;
        }
    }
    std::cout << "It's a tie!" << std::endl;
    return true;
}
