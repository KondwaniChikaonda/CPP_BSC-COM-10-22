#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;


string Reverse(string reversedText); //declaring a function Reverse

int main () {
   string text;
         
    ifstream myFile("simpleFile.txt");

    while(std::getline(myFile,text)) //reading the statement from the file

    { 

       string fileData = text;
         cout<<fileData<<"\n";
           
       int numberOfChar= fileData.size();
       cout<<"The string has "<<numberOfChar<<" characters"<<endl;
       
       string reverseText = Reverse(fileData); //calling the function Reverse
  
    
    }

   //close the file
   myFile.close();


                return 0;
}



string Reverse(string reversedText) {

  reverse(reversedText.begin(), reversedText.end()); //reversing the string 

   cout<<"The reversed string is: ";

   reversedText[0] = toupper(reversedText[0]); //capitalising the first letter of string

   
   cout<<reversedText;
        
      }