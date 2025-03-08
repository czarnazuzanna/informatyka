#include <iostream>
 
using namespace std;
 
int main() {
    double temperatura;
    char opcja;
 

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> temperatura;
 
 
    cout << "Wybierz jednostke docelowa (K dla Kelvina, F dla Fahrenheit): ";
    cin >> opcja;
 
 
    switch (opcja) {
        case 'K':
        case 'k':
            cout << "Temperatura w stopniach Kelvina: " << temperatura + 273.15 << endl;
            break;
        case 'F': 
        case 'f':
            cout << "Temperatura w stopniach Fahrenheita: " << (temperatura * 9 / 5) + 32 << endl;
            break;
        default:
            cout << "Nieprawidlowa opcja! Wybierz K lub F." << endl;
    }
 
    return 0;
}
