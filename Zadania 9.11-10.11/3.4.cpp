#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "podaj liczbe wierszy trojkatu pascala: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int liczba = 1;
        
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        for (int j = 0; j <= i; j++) {
            cout << liczba << " ";
            liczba = liczba * (i - j) / (j + 1);
        }
        
        cout << endl;
    }

    return 0;
}
