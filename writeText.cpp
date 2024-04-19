#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() 
{
     
    ofstream myFile;

    myFile.open("regForm.txt", ios::out | ios::app);

    if(myFile.is_open()) {
     
         char data[100];
        cout<<"Enter your first name: ";
        cin.getline(data,100);
        myFile<<"First name: "<<data<<"\n";
         

         cout<<"Enter your last name: ";
         cin.getline(data,100);
         myFile<<"last name: "<<data;

    }



    return 0;
}