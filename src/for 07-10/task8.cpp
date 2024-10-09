/*Курсы валют: Напишите программу, которая принимает определенную сумму
 в гривнах и код валюты для перевода (1 — доллары, 2 — евро, 3 — фунты) и выводит результат
перевода по заданному курсу (1 USD = 42 UAH, 1 EUR = 46 UAH, 1 GBP = 54 UAH).*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int sum, code;
    cout << "Введите сумму в гривнах:";
    cin >> sum;
    cout << "Коды валют:" << endl
         << "1 — доллары, 2 — евро, 3 — фунты" << endl;
    cout << "Введите код валюты для перевода:";
    cin >> code;
    double i; // доллары
    double e; // евро
    double f; // фунты

    switch (code)
    {
    case 1:
        code = 1;
        i = sum / 42.0;
        cout << "Результат перевода:" << i << "USD"<<endl;
        break;
    case 2:
        code = 2;
        e = sum / 46.0;
        cout << "Результат перевода:" << e << "EUR"<<endl;
        break;
    case 3:
        code = 3;
        f = sum / 54.0;
        cout << "Результат перевода:" << f << "GBP"<<endl;
        break;
    default:
        cout << "Неправильный код валюты"<<endl;
    }

    return 0;
}
