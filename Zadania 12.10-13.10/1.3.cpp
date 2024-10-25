#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "podaj liczbe całkowita:";
    cin >> number;
    if (number==0)
    {
        cout << "podana liczba jest zerem";
    }
        else
        {
            float x;
            x = number%2;
            if (x==0)
             {
             cout<<"podana liczba jest parzysta";
             }
                else
                {
                cout<<"podana liczba jest nieparzysta";
                }
        }
    return 0;
}