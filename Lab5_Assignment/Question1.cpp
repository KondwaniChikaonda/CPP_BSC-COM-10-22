#include<iostream>
#include<cmath>
using namespace std;


int main() {
  

      int daysUntilExpiration = rand()%12; 

         

         if (daysUntilExpiration==0)
            {
             cout<<"Your subscription has expired"<<endl;

               }

         

           else if(daysUntilExpiration <=1) 
              {
                   cout<<"Your subscription expires within a day\n";
                   cout<<"Renew now and save 20%!";
              }




        
            else if(daysUntilExpiration<=5) 
              {
                      cout<<"Your subscription will expire soon\n";
                      cout<<"Renew now and save 10%"; 
                 }


            else if (daysUntilExpiration<=10) 
             {
         cout<<"Your subscription will expire soon. Renew now!";
            }


        else
        {
            cout<<"You have an active subscription";
        }
           

    return 0;
}