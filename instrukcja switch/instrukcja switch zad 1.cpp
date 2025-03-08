
 
#include <iostream>
 
using namespace std;
 
int main() {
    int liczba1, liczba2;
    char dzialanie;
 
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
 
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
 
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> dzialanie;
 
    switch (dzialanie) {
        case '+':
            cout << "Wynik: " << liczba1 + liczba2 << endl;
            break;
        case '-':
            cout << "Wynik: " << liczba1 - liczba2 << endl;
            break;
        case '*':
            cout << "Wynik: " << liczba1 * liczba2 << endl;
            break;
        case '/':
            if (liczba2 != 0) {
            } else {
                cout << "Błąd: Dzielenie przez zero!" << endl;
            }
            break;
        default:
            cout << "Błąd: Nieznany znak działania!" << endl;
    }
 
    return 0;
}
 