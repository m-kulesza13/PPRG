
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Podaj ile tablica ma zawierać elementów: ";
    cin>>n;
    int tablica[n];
    for (int i=0; i<n; i++)
        {
            cout<<endl<<"Podaj "<<i+1<<" element tablicy: ";
            cin>>tablica[i];
        }
    int najczestszy = tablica[0];
    int wystapienia = 0;

    for (int i = 0; i < n; ++i) {
        int licznik = 0;
        for (int j = 0; j < n; ++j) {
            if (tablica[i] == tablica[j]) {
                licznik++;
            }
        }
        if (licznik > wystapienia) {
            wystapienia = licznik;
            najczestszy = tablica[i];
        }
    }

    cout << "Najczęściej występujący element to: " << najczestszy << endl;
    return 0;
}