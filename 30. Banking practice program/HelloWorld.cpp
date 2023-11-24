#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 0;
    int choice = 0;

    do {

        std::cout << "====================" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cout << "1. Show balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "====================" << std::endl;

        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank you for using our service!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
                break;
        }

    }while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "Your balance is: $" << std::setprecision(2) <<  std::fixed << balance << std::endl;
}

double deposit() {
    double amount = 0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    return amount;
}

double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if (amount < 0) {
        std::cout << "You can't withdraw a negative amount!" << std::endl;
        return 0;
    }

    if (amount > balance) {
        std::cout << "You don't have enough money!" << std::endl;
        return 0;
    }

    return amount;
}

