
#include <iostream>
using namespace std;
int main()
{
    cout << "podawaj znaki do czasu zakończenia program: ";
    string znak;
    do
    {
        cin >>znak;
    }
    while (znak != "t");
    return 0;
}