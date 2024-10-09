/*Проверка делимости: Напишите программу, которая проверяет, делится ли
одно число на другое без остатка (оператор деления по модулю).
 Если делится — вывести "Да", если нет — вывести "Нет".*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Input first number：" << endl;
    cin >> a;
    cout << "Input the second number:";
    cin >> b;
    if (b != 0)
    {
        if (a % b == 0 || b % a == 0)
            {cout << "Дa";
    }
    else if (! a % b == 0 || ! b % a == 0) {cout << "Нет";} }
    return 0;
}