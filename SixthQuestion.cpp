#include<iostream>//print or get something from the console
#include<cstring>
#include<fstream>//read and write from the file
#include<string>
#include<algorithm>
using namespace std;


string Reverse(string returnText); //declaring a function Reverse

int main () {
   string text;
         
    ifstream myFile("simpleFile.txt");

    while(std::getline(myFile,text)) //reading the statement from the file

    { 

       string fileData = text;
         cout<<fileData<<"\n";
           
       int numberOfChar= fileData.size();
       cout<<"The string has "<<numberOfChar<<" characters"<<endl;
       
       string reverseText = Reverse(fileData);
  
    
    }

   //close the file
   myFile.close();


                return 0;
}



string Reverse(string returnText) {

  reverse(returnText.begin(), returnText.end()); //reversing the string 

   cout<<"The reversed string is: ";
   cout<<returnText;
        
      }