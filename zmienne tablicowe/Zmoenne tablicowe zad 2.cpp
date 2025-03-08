#include <iostream>
 
using namespace std;
 
int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR];
    cout << "Wprowadz 5 liczb calkowitych: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cin >> tablica[i];
        if (tablica[i] < 0) {
            tablica[i] = 0;
        }
    }
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i];
        if (i < ROZMIAR - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}