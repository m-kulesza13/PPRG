
#include <iostream>
using namespace std;
int main()
{
    float x = 0;
    float y = 0;
    cout << "podaj liczbe x: ";
    cin >> x;
    cout << "podaj liczbe y: ";
    cin >> y;
    float suma = x + y;
    cout << "suma liczby x i y wynosi: " << (int)(suma * 100) / 100.0 << endl;
    float roznica = x - y;
    cout << "roznica liczby x i y wynosi: " << (int)(roznica * 100) / 100.0 << endl;
    float iloczyn = x * y;
    cout << "iloczyn liczby x i y wynosi: " << (int)(iloczyn * 100) / 100.0 << endl;
    float iloraz = x / y;
    cout << "iloraz liczby x i y wynosi: " << (int)(iloraz * 100) / 100.0 <<endl;    
    return 0;
}