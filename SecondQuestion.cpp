#include<iostream>
#include<cstring>
#include<fstream>
#include<cmath>
using namespace std;

int main()  {
        int daysUntilExpiration = rand()%12;

        switch (daysUntilExpiration)
        {
        case 0:
                   cout<<"Your subscription has expired"<<endl;
            break;

        case 1:
                    cout<<"Your subscription expires within a day\n";
                    cout<<"Renew now and save 20%!"; 
                    break;
        case 2: 
                          cout<<"Your subscription will expire soon\n";
                      cout<<"Renew now and save 10%";
                      break;

        case 3: 
                          cout<<"Your subscription will expire soon\n";
                      cout<<"Renew now and save 10%";   
                      break; 
        case 4: 
                          cout<<"Your subscription will expire soon\n";
                      cout<<"Renew now and save 10%";  
                      break; 
         case 5: 
                          cout<<"Your subscription will expire soon\n";
                      cout<<"Renew now and save 10%";
                      break;


         case 6: 
                         cout<<"Your subscription will expire soon. Renew now!";   
                         break;               
         
         case 7:         cout<<"Your subscription will expire soon. Renew now!"; 
                         break; 
         case 8: 
                         cout<<"Your subscription will expire soon. Renew now!"; 
                         break; 
         case 9: 
                         cout<<"Your subscription will expire soon. Renew now!"; 
                         break; 
         case 10: 
                         cout<<"Your subscription will expire soon. Renew now!"; 
                         break;   
                     
         
        default:  cout<<"You have an active subscription";
            break;
        }
   
    return 0;
}