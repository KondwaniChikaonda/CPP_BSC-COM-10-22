#include<iostream>

using namespace std;

int main() {

    int number = 8;
    int* num2;

     num2 = &number;

     int* i = num2;

    cout<<*i;



    return 0;
}