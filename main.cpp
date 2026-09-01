#include <iostream>
#include "Calculations.h"

int current_calc = -1;
double output;

int main() {

    do {
        std::cout << "Choose a calculation:" << std::endl;
        std::cout << "1. Area of a circle" << std::endl;
        std::cout << "2. Perimeter of a circle" << std::endl;
        std::cout << "3. Area of rectangle" << std::endl;
        std::cout << "4. Perimeter of rectangle" << std::endl;
        std::cout << "5. Quit" << std::endl;

        std::cin >> current_calc;

        double radius, length, width;
        bool dont_output = false;

        switch (current_calc) {
            case 1:
                std::cout << "Enter radius: ";
                std::cin >> radius;

                output = calc_area(radius);
                break;
            case 2:
                std::cout << "Enter radius: ";
                std::cin >> radius;

                output = calc_perimeter(radius);
                break;
            case 3:
                std::cout << "Enter length: ";
                std::cin >> length;
                std::cout << "Enter width: ";
                std::cin >> width;

                output = calc_area(length, width);
                break;
            case 4:
                std::cout << "Enter length: ";
                std::cin >> length;
                std::cout << "Enter width: ";
                std::cin >> width;

                output = calc_perimeter(length, width);
                break;
            case 5:
                dont_output = true;
                std::cout << "Bu-bye!" << std::endl;
                break;
            default:
                dont_output = true;
                std::cout << "I got not a clue what you could have put in here." << std::endl;
                current_calc = -1;
                break;
        }

        // this is just so it doesn't output on a random selection.
        if (!dont_output) {std::cout << output << std::endl;}


    } while (current_calc != 5);

    return 0;
}