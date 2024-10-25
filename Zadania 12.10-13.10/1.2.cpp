#include <iostream>
using namespace std;
int main()
{
   int number;
   cout << "Podaj liczbe całkowitą:";
   cin >> number;
   if (number>0)
   {
       cout << "Podana liczba jest dodatnia";
   }
        if(number<0)
        {
            cout << "Podana liczba jest ujemna";
         }
            if (number==0)
            {
                cout << "Podana liczba jest zerem";
            }

    return 0;
}