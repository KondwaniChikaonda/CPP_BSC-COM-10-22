#include <iostream>
#include<cstring>
#include<string>
using namespace std;

using namespace std;

int main() {

int numberOfElements = 0;
string numberOfStrings = "";

int* dynamicNumber = nullptr;
string* dynamicString = nullptr;

cout << "How many numbers you want to type?: ";
cin >> numberOfElements;


cout << "How many strings you want to type?: ";
cin >> numberOfStrings;


dynamicNumber = new int[numberOfElements];
dynamicString = new std::string;

getline(cin, *dynamicString);

   cout<<"String dynamically allocated: "<<*dynamicString;
   delete dynamicString;





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
