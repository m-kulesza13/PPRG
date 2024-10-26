
#include <iostream>
using namespace std;
int main()

{
    int x, y;
    cout << "podaj liczbe gości";
    cin >> x;
    cout << "podaj liczbe kawałków";
    cin >> y;
    cout << "liczba kawałków ktora przypada na jednego gościa";
    cout << y/x;
    cout << "\nliczba kawałków dla organizatora";
    cout << y%x;
    
    return 0;
}