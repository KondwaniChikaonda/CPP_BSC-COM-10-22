#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<ctype.h>
#include<string.h>
#include<sstream>
using namespace std;



int main() {

       cout<<"Enter the value between 5 and 10: "<<endl;
       
    

       while(true)  { 


                   int number;
                   cin>>number;
                     
               if(!number)
             {
                    cout<<"You entered wrong number. please try again: ";
                    cin.clear(); //resetting any error flags in the input stream
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    
             }       


             else if(number>=5&& number<=10) 
             {
                cout<<"Your input value("<<number<<") has been accepted";
                break;
                
               }
             

              else 
             {
             
             cout<<"You entered "<<number<<". Please enter the value between 5 and 10: ";                

             }           

          }   
         

    return 0;
}


               