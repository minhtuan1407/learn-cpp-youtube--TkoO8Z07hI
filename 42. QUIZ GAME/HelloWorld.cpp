#include <iostream>

int main() {

    std::string questions[] = {"1. What year was C++ created?",
                                "2. Who invented C++?",
                                "3. What is the predecessor of C++?",
                                "4. What is the successor of C++?"};

    std::string options[][4] = {{"A. 1979", "B. 1980", "C. 1983", "D. 1985"},
                            {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. James Gosling", "D. Guido van Rossum"},
                            {"A. C", "B. B", "C. BCPL", "D. Simula"},
                            {"A. C#", "B. Java", "C. C--", "D. D"}};

    int size = sizeof(questions)/sizeof(std::string);

    char answerskey[] = {'C', 'A', 'C', 'D'};
    char quess;
    int score;

    for (int i = 0; i < size; i++) {
        std::cout << "=========================" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "=========================" << std::endl;

        for (int j = 0; j < sizeof(options[0])/sizeof(std::string); j++) {
            std::cout << options[i][j] << std::endl;
        }

        std::cout << "Enter your answer: ";
        std::cin >> quess;
        quess = toupper(quess);

        if (quess == answerskey[i]) {
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "Incorrect!" << std::endl;
            std::cout << "The correct answer is " << answerskey[i] << std::endl;
        }
    }
    std::cout << "=========================" << std::endl;
    std::cout << "Correct guesses: " << score << std::endl;
    std::cout << "# of questions: " << size << std::endl;
    std::cout << "Score: " << (float)score/size * 100 << "%" << std::endl;
    std::cout << "=========================" << std::endl;

    return 0;
}
