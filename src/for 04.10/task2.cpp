/*  Провести преобразование типов из int в
double и наоборот,
после каждого преобразование тоже вывести на
экран значения (вводя целые и дробные числа)*/

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int N;
    double Z;
    cout<<"Введите любое целое число: "<<endl;
    cin>>N;
    cout<<"Введите любое дробное число: "<<endl;
    cin>>Z;

    // Преобразование int в double
    Z = static_cast<double>(N);
    cout<<"Результат после преобразование типов из int в double:"<< Z<<endl;
    
    // Преобразование double в int
    N = static_cast<int>(Z);
    cout<<"Результат после преобразования типов из double в int:"<< N<<endl;

    return 0;
}
