/*Минимум из трёх чисел: Напишите программу, которая принимает
на вход три числа и выводит на экран минимальное из них.*/
#include <iostream>
using namespace std;

int main()
{
   setlocale(0, ".1251");
   int a, b, c;
   cout << "Введите три целых числа: а=  ";
   cin >> a;
   cout << "b= ";
   cin >> b;
   cout << "c= ";
   cin >> c;
   if (a < b && a < c)
   {
      cout << "Минимальное из чисел:" << a;
   }
   else if (b < a && b < c)
   {
      cout << "Минимальное из чисел:" << b;
   }
   else
   {
      cout << "Минимальное из чисел:" << c;
   }
   return 0;
}