#include <iostream>
#include<iostream>
using namespace std;

int main() {
   
    

     cout << "Enter the number of columns, not more than 3: ";
             int columns;
           cin >> columns;

           if (columns > 3) {
        cout << "Number of columns cannot be more than 3." <<endl;
        return 0;
             }


              cout << "Enter the number of rows, not more than 3: ";
              int rows;
              cin >> rows;

        if (rows > 3) 
        {
        cout << "Number of rows cannot be more than 3"<<endl;
        return 0;
           }


       //allocation of memory dynamically
    double** myArray = new double*[rows];

    for (int k = 0; k < rows; ++k) 
        {

        myArray[k] = new double[columns];

        }


         // assigning values to the array elements
        cout << "Enter values for your array: " <<endl;

    for (int i = 0; i < rows; ++i) 
    
       {

        for (int j = 0; j < columns; ++j) 
        
           {
            cout << "Enter the value for your array[" << i << "][" << j << "]: ";
            cin >> myArray[i][j];
           }

        }
               
               //displaying the values entered on the array
            cout << "Values of your array are:" <<endl;

            for (int i = 0; i < rows; ++i) 
            
                 {
                         for (int j = 0; j < columns; ++j) {
                                 cout << myArray[i][j] << " ";
                       }
                    cout <<endl;
                 }
                    
                    //deallocating the dynamic memory
                for (int i = 0; i < rows; ++i) 
    
                     {
                        delete[] myArray[i];
                     }

    delete[] myArray;

    return 0;
}