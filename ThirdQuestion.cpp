#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
   
      string code[8] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

     for (int i = 0; i<8; i++)   
     {
       string str = code[i];

       char firstLetter = str.at(0);
       
           
           if(firstLetter=='B') {
        
            cout<<code[i]<<" ";
                    
           }
        

       }
    return 0;
}