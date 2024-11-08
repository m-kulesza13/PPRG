#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "podaj liczbe a: ";
    cin >> a;
    cout << "podaj liczbe b: ";
    cin >> b;
    cout << "wiersz o długości a:" <<endl;
    for (int i=1;i<=a;i++)
        {
            cout << "*";
        }
    cout << endl << "kolumna o długości b:" <<endl;
    for (int i=1;i<=b;i++)
        {
            cout << "*" << endl;
        }
    cout << endl << "prostokat o wymiarach a na b:" <<endl;
    for (int i=1;i<=a;i++)
        {
        for (int i=1;i<=b;i++)
            {
                cout << "*";
            }
        cout << endl;
        }
    cout << endl << "obwod prostokatu o wymiarach a na b:" <<endl;
    for (int i=1;i<=a;i++)
        {
        for (int j=1;j<=b;j++)
            {
              if (i==1 || i==a || j==1 || j==b)
                {
                    cout << "*";
                } 
            else 
                {
                cout << " ";
                }
            }
        cout << endl;
        }
    cout << endl << "trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu" <<endl;
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    cout << endl << "Trójkąt prostokątny równoramienny z kątem prostym w prawym górnym rogu:" << endl;
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            cout << " ";
        }
        for (int j = 0; j < a - i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
