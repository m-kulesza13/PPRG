#include <iostream>
using namespace std;

int main() {
    int tablica[10][10] = {0};

    for (int i = 0; i < 10; ++i) {
        tablica[i][0] = i;
    }

    for (int i = 0; i < 10; ++i) {
        tablica[i][1] = tablica[i][0] + tablica[i][0];
    }

    cout << "Wyswietlenie dwóch pierwszych kolumn tablicy:";
    for (int i = 0; i < 10; ++i) {
        cout <<endl<< tablica[i][0] << " \t" << tablica[i][1] << endl;
    }

    return 0;
}
