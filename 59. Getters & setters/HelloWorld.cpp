#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature() {
        return temperature;
    }

    void setTemperature(int temperature) {
        if (temperature < 0) {
            this->temperature = 0;
        } else if (temperature >= 10) {
            this->temperature = 10;
        } else {
            this->temperature = temperature;
        }
    }
};

int main() {

    // Abtraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attibute READABLE
    // setter = function that makes a private attibute EDITABLE

    Stove stove;

    // stove.temperature = 1000000;

    stove.setTemperature(1000000);

    std::cout << "The temperature setting is: " << stove.getTemperature() << std::endl;

    return 0;

}
