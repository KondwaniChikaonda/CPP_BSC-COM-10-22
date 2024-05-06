#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {


    float length, width;

    
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

   
    Rectangle rectangle;

    rectangle.setLength(length);
    rectangle.setWidth(width);

    std::cout << "Area of the rectangle is: " << rectangle.calculateArea() << std::endl;

    return 0;
}
