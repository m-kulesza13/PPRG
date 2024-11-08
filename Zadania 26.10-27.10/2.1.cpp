#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "podaj wartość n: ";
    cin >> n;
    int suma = 0;
    for (int i = 1; i <= n; ++i) 
    {
        int suma_pomocnicza = 0;
        for (int j = 1; j <= i; ++j) 
        {
            suma_pomocnicza = suma_pomocnicza + j;
        }
        suma = suma + suma_pomocnicza;
    }

    cout << "wynik szeregu: " << suma;
    return 0;
}
