#include <iostream>

int main() {

    std::string cars[][3] = {
        {"Chevy", "Corvette", "Camaro"},
        {"Ford", "Mustang", "F-150"},
        {"Honda", "Civic", "Accord"},
        {"Toyota", "Corolla", "Camry"}
    }; 

    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        std::cout << "Brand: " << cars[i][0] << std::endl;
        std::cout << "Models: " << std::endl;
        for (int j = 1; j < columns; j++) {
            std::cout << "\t" << cars[i][j] << std::endl;
        }
    }

    return 0;
}
