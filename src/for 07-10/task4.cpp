/*Факториал числа: Напишите программу, которая вычисляет факториал числа N (N!).*/

#include <iostream>
using namespace std;
int main()
{
    int N, i = 1, D = 1;
    cout << "Введите целое число N:";
    cin >> N;
    while (i <= N)
    {
        D *= i;
        i++;
    }
    cout << "Результат вычисления факториала (N!):" << D;
    return 0;
}