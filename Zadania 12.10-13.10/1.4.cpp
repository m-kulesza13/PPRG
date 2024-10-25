#include <iostream>
using namespace std;
int main()
{
    float number1;
    float number2;
    float number3;
    cout << "podaj liczbe 1: ";
    cin >> number1;
    cout << "podaj liczbe 2: ";
    cin >> number2;
    cout << "podaj liczbe 3: ";
    cin >> number3;
        if(number1>number2&&number1>number3)
        {
            cout<<"Liczba 1 jest najwieksza";
        }
        if(number2>number1&&number2>number3)
        {
            cout<<"Liczba 2 jest najwieksza";
        }
        if(number3>number2&&number3>number1)
        {
            cout<<"Liczba 3 jest najwieksza";
        }
}