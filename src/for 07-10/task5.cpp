/*Таблица умножения: Программа должна выводить таблицу
умножения для числа, введённого пользователем, до 10.*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int M, D = 1;
    cout << "Введите любое целое число:";
    cin >> M;

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << M << "*" << " " << i << "=" << " " << M * i << endl;
    }

    return 0;
}