#include <iostream>
#include <string>

int main() {
    int godziny;
    char rodzaj_pojazdu;
    int oplata;

    std::cout << "Podaj liczbe godzin parkowania: ";
    std::cin >> godziny;

    std::cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    std::cin >> rodzaj_pojazdu;

    switch (rodzaj_pojazdu) {
    case 'S':
        oplata = godziny * 5;
        break;
    case 'M':
        oplata = godziny * 3;
        break;
    case 'A':
        oplata = godziny * 10;
        break;
    default:
        std::cout << "Nieznany rodzaj pojazdu." << std::endl;
        return 1;
    }

    std::cout << "Oplata za parkowanie: " << oplata << " zl" << std::endl;

    return 0;
}