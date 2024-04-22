#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {

int numberOfElements = 0;
string numberOfStrings = " ";

int* dynamicNumber = nullptr;
string* dynamicString;

cout << "How many numbers to type?: "<<endl;

cin >> numberOfElements;


cout << "Type a string?: ";

cin >>numberOfStrings;


dynamicNumber = new int[numberOfElements];
dynamicString = new string;


if (dynamicNumber == nullptr) {

cout << "Error: memory cannot be allocated";

}

      else {

         for (int i = 0; i < numberOfElements; i++) {

           cout << "Enter a number: ";

           cin >> dynamicNumber[i];

            cout << "You have entered: ";

            for (int j = 0; j < numberOfElements; j++) {

           cout << dynamicNumber[j] << ",";

           }

             delete[] dynamicNumber;

         }

}


getline(cin, *dynamicString);

cout<<"The string allocated dynamically is: "<<*dynamicString;

return 0;

}
