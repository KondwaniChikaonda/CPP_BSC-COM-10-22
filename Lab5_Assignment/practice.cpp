#include<iostream>
#include<string>
using namespace std;

class car{

       public:
         
         string brand;
         string model;
         int year;
         car(string x, string y, int z);
        
      

};




 car::car(string x, string y, int z) {
              
              brand =x;
              model = y;
              year = z;
         }





int main() {
     car myFirst("BMX","X5",2024);

     cout<<myFirst.brand;

    return 0;
}