/* Сумма всех чисел от 1 до N: Напишите программу, которая выводит
сумму всех чисел от 1 до N, где N — введённое пользователем число.*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int N, i, Sum = 0;
    cout << "Введите целое число:";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        Sum += i;
    }
    cout << "Сумма всех чисел от 1 до введенного Вами числа:" << Sum;
    return 0;
}