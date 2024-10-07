/*Создать переменные каждого типа данных, которые рассматривали.
Ввести их значения через клавиатуру и затем все значение
вывести на экран, после чего вывести их вес в системе*/

#include <iostream>
using namespace std;

int main()
{
    // Целозначительные типы
    int a = 11;
    short b = 3;
    long d = 199999;

    // Вещественные типы
    float c = 12.45;
    double s = 12.45123456789;

    // Логический тип
    bool is_sunny = 1;

    // Символы и строки
    char e = 'N';
    string name = "Nastya";

    cin >> a;
    cin >> b;
    cin >> d;
    cin >> c;
    cin >> s;
    cin >> is_sunny;
    cin >> e;
    cin >> name;

    cout << " a=11; b=3; d=199999; c=12.45; s=12.45123456789; is_sunny = 1; e = 'N'; name = Nastya " << endl;
    cout << "Size int: " << sizeof(int) << "byte\n";
    cout << "Size short: " << sizeof(short) << "byte\n";
    cout << "Size long: " << sizeof(long) << "byte\n";
    cout << "Size float: " << sizeof(float) << "byte\n";
    cout << "Size double: " << sizeof(double) << "byte\n";
    cout << "Size bool: " << sizeof(bool) << "byte\n";
    cout << "Size char: " << sizeof(char) << "byte\n";
    cout << "Size string: " << sizeof(string) << "byte\n";
    return 0;
}