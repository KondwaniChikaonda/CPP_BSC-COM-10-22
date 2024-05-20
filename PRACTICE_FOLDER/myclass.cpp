#include "myclass.h"
#include <iostream>

// Constructor definition
MyClass::MyClass() {
    num = 0;
}

// Member function definition
void MyClass::printMessage() {
    std::cout << "Number is: " << num << std::endl;
}
