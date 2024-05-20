#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
int main() {
    char choice;

    do {
        cout << "Select an option:" << std::endl;
        cout << "1. Calculate the area of a square" << std::endl;
        cout << "2. Calculate the area of a triangle" << std::endl;
        cout << "3. Calculate the area of a circle" << std::endl;
        cout << "4. Quit" << std::endl;
        cout << "Enter your choice: ";
         cin >> choice;

        switch (choice) {
            case '1': {
                float length;
                std::cout << "Enter side length of the square: ";
                std::cin >> length;
                shapes::Square square(length);
                std::cout << "Area of the square is: " << shapes::Area::calculateArea(square) << std::endl;
                break;
            }
            case '2': {
                float base, height;
                std::cout << "Enter base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter height of the triangle: ";
                std::cin >> height;
                shapes::Triangle triangle(base, height);
                std::cout << "Area of the triangle is: " << shapes::Area::calculateArea(triangle) << std::endl;
                break;
            }
            case '3': {
                float radius;
                std::cout << "Enter radius of the circle: ";
                std::cin >> radius;
                shapes::Circle circle(radius);
                std::cout << "Area of the circle is: " << shapes::Area::calculateArea(circle) << std::endl;
                break;
            }
            case '4':
                std::cout << "Exiting program..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

    } while (choice != '4');

    return 0;
}
