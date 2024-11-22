
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "postac równania kwadratowego: ax^2+bx+c=0" << endl;
    float a = 0;
    float b = 0;
    float c = 0;
    cout << "podaj a: ";
    cin >> a;
    cout << "podaj b: ";
    cin >> b;
    cout << "podaj c: ";
    cin >> c;
    cout << "postac twojego rownania kwadratowego: " << a << "x^2+" << b << "x+" << c << "=0"<<endl;
    float delta = 0;
    delta = (b*b) - (4*a*c);
    if (delta<0)
        {
            cout<<"rownanie nie ma pierwiastkow kwadratowych";
            return 0;
        }
    cout << "delta: " << delta <<endl;
    float pdelta = 0;
    pdelta = sqrt(delta);
    cout << "pierwiastek z delty: " << pdelta << endl;
    if (delta==0)
        {
            cout<<"rownanie ma jeden pierwiastek kwadratowy i jest nim: " << (-b+pdelta)/(2*a);
        }
    if (delta>0)
        {
            cout<<"rownanie ma dwa pierwiastki kwadratowe i sa nimi: " << (-b+pdelta)/(2*a) << " oraz " << (-b-pdelta)/(2*a);
        }
    
    return 0;
}