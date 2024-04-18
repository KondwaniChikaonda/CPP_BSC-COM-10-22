#include<iostream>//print or get something from the console
#include<cstring>
#include<fstream>//read and write from the file
#include<cmath>
using namespace std;

int main() {




       
          
             
             

             while(true) 
             
              {  


                 cout<<"Please select the area of the shape to calculate\n";
         cout<<"1. Square\n";
          cout<<"2. Rectangle\n";
           cout<<"3. Triangle\n";
            cout<<"4. Quit Program\n";
            cout<<"Enter Selection: ";


                   int input;
              cin>>input;

                 if (input== 1 || input==2 || input ==3) 
          
                   {
                        if(input==1) 
                       {
                          cout<<"Enter the side: ";
                          double side;
                          cin>>side;
                          cout<<"The answer area is "<<side * side<<endl;
                          break;
                             }


                 else if(input==2) 
                      {
            
                        cout<<"Enter the Length: ";
                        double length;
                        cin>>length;

                        cout<<"Enter the width: ";
                        double width;
                        cin>>width;

                        double answer = length* width;
                        cout<<"The answer area is "<<answer<<endl;
                        break;

                     }


                 else{

                        cout<<"Enter the height: ";
                        double height;
                        cin>>height;

                        cout<<"Enter the base: ";
                        double base;
                        cin>>base;

                        double area = (1.0/2.0)  * base * height;
                        cout<<"The answer area is "<<area<<endl;
                        break;

                        }


                }


                else if(input==4)
                 {

                     break;
                  }


                  else
                  {
                    cout<<"Wrong input. ";
                    
                  }


               
              }
         

    

    return 0;
}