/*Квадрат числа или куб: Программа должна принимать на 
вход два числа: число и показатель (2 или 3). 
Если показатель равен 2, программа должна вывести квадрат числа, если 3 — куб.*/

#include <iostream> 
#include <math.h>
using namespace std; 
int main () 
{
int a, b;
cout<<"Input number (2 or 3):";
cin>>a;
cout<<"Input indicator (2 or 3):";
cin>>b;

if (b==2) {cout<<"Then the result is: "<<a*a;}
else if (b==3) {cout<<"Then the result is: "<<pow(a,3);}

return 0;
}