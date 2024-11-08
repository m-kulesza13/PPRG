#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "podaj liczbe z przedziału od 1 do 12: ";
    cin >> x;
    if (x>12 || x<1)
    {
        cout << "podana liczba jest z poza przedziału";
        return 0;
    }
    else
    {
        switch(x)
        {
            case 1:
                cout << "Styczen " << endl << "31 dni";
                break;
            case 2:
                cout << "Luty " << endl << "28 dni";
                break;
            case 3:
                cout << "Marzec " << endl << "31 dni";
                break;
            case 4:
                cout << "Kwiecien " << endl << "30 dni";
                break;
            case 5:
                cout << "Maj " << endl << "31 dni";
                break;
            case 6:
                cout << "Czerwiec " << endl << "30 dni";
                break;
            case 7:
                cout << "Lipiec " << endl << "31 dni";
                break;
            case 8:
                cout << "Sierpien " << endl << "31 dni";
                break;
            case 9:
                cout << "Wrzesien " << endl << "30 dni";
                break;
            case 10:
                cout << "Pazdziernik " << endl << "31 dni";
                break;
            case 11:
                cout << "Listopad " << endl << "30 dni";
                break;
            case 12:
                cout << "Grudzien " << endl << "31 dni";
                break;
        }
        if (x>=4 && x<=9 )
        {
            cout << endl << "Miesiac sloneczny";
        }
        else
        {
           cout << endl << "Miesiac pochmurny"; 
        }
    }
    return 0;
}
