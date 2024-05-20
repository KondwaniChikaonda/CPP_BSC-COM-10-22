#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length, width;

   
    cout << "Enter length of first rectangle: ";
    cin >> length;
    cout << "Enter width of first rectangle: ";
    cin >> width;

  
    Rectangle rectangle1;

    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    cout << "Area of the first rectangle is: " << rectangle1.calculateArea() << std::endl;

    
    cout << "\nEnter length of second rectangle: ";
    cin >> length;
    cout << "Enter width of second rectangle: ";
    cin >> width;

    Rectangle rectangle2(length, width);

    cout << "Area of the second rectangle is: " << rectangle2.calculateArea() << std::endl;

    return 0;
}
