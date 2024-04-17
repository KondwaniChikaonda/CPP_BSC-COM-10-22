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
                     
             if((number>=5)&& (number<=10)) 
             {
                cout<<"Your input value("<<number<<") has been accepted";
                break;
                
               }

             
                     

              else if(number<5 || number>10)
             {
             
             cout<<"You entered "<<number<<". Please enter the value between 5 and 10: ";                

             }     

              else
             {
                    cout<<"You entered wrong number. please try again\n";
                    
             }


        

          }   
         




    return 0;
}


               