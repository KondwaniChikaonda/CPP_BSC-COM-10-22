#include<iostream>//print or get something from the console
#include<cstring>
#include<fstream>//read and write from the file
#include<cmath>
#include<string>
#include<ostream>
using namespace std;


string Reverse(string returnText);

string Reverse(string returnText) {
        
}


int main () {

   string text;
         
    ifstream myFile("simpleFile.txt");

    while(std::getline(myFile,text)) {
            
            
       cout<<text<<"\n";

       string fileData = text;
       int x = fileData.size();
       cout<<"The string has "<<x<<" characters";
       
       string reverseText = Reverse(fileData);
  
       
    

    
    }




   //close the file
   myFile.close();


                return 0;
}

