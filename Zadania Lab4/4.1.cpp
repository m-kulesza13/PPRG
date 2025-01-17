
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
    int max =  tablica[0];
    for (int x=0; x<n; x++)
        {
            if (max<tablica[x])
            {
                max = tablica[x];
            }
        }
    cout<<endl<<"Najwiekszy element podanej tablicy to: "<< max;
    return 0;
}