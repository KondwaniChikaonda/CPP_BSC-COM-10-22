#include <iostream>
#include<cstring>
using namespace std;

int main() {

int numberOfElements = 0;
string numberOfStrings = " ";

int* dynamicNumber = nullptr;
string* dynamicString = nullptr;

cout << "How many numbers to type?: "<<endl;

cin >> numberOfElements;


cout << "How strings to type?: ";

cin >>numberOfStrings;


dynamicNumber* = new int[numberOfElements];
dynamicString* = new string[numberOfStrings];

if (dynamicNumber == nullptr) {

cout << "Error: memory could not be allocated";

}

      else {

         for (int i = 0; i < numberOfElements; i++) {

           cout << "Enter number: ";

           cin >> dynamicNumber[i];

            cout << "You have entered: ";

            for (int j = 0; j < numberOfElements; j++) {

           cout << dynamicNumber[j] << ",";

           }

             delete[] dynamicNumber;

         }

}

return 0;

}
