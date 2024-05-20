#include <iostream>
using namespace std;
void f(double& p)
{
 p += 2;
}
int main()
{
 double x = 10;
 int y = 10;
 f(x);
 cout << "x is " << x << endl;
 cout << "y is " << y << endl;
 return 0;
}