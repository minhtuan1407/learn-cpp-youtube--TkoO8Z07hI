#include <iostream>

enum Day {Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};
enum Flavor {Vanilla, Chocolate, Strawberry, Mint};

int main() {

    // emuns = a user-defined data type that consists
    //         of paired named-interger constants.
    //         GREAT if you have a set of poteltial options

    Day today = Sunday;

    switch (today) {
        case 0:
            std::cout << "Today is Sunday" << std::endl;
            break;
        case 1:
            std::cout << "Today is Monday" << std::endl;
            break;
        case 2:
            std::cout << "Today is Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Today is Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Today is Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Today is Friday" << std::endl;
            break;
        case 6:
            std::cout << "Today is Saturday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
    }

    return 0;
}
