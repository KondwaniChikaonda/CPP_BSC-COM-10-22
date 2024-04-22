#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string* dynamicString = new string;
    int* dynamicNumber = new int;
  
    
    cout << "Enter an integer value: ";
    cin >> *dynamicNumber;

    
    cout << "Enter a string value: ";
    cin.ignore();
    getline(cin, *dynamicString);

  
    cout << "Integer allocated dynamically is: " << *dynamicNumber <<endl;
    cout << "String allocated dynamically is: " << *dynamicString <<endl;

    delete dynamicNumber;
    delete dynamicString;

    return 0;
}