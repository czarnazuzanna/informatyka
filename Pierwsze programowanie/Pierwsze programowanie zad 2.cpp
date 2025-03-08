//zadanie 1
#include <iostream>
 
int main() {
    int score;
    
    std::cout << "Podaj wynik egzaminu (liczba punktow): ";
    std::cin >> score;
 
   
    if (score < 0 || score > 100) {
        std::cout << "Niepoprawna liczba punktow. Podaj liczbe od 0 do 100." << std::endl;
    } else {
      
        if (score <= 49) {
            std::cout << "Ocena: Niedostateczna" << std::endl;
        } else if (score <= 69) {
            std::cout << "Ocena: Dostateczna" << std::endl;
        } else if (score <= 84) {
            std::cout << "Ocena: Dobra" << std::endl;
        } else if (score <= 99) {
            std::cout << "Ocena: Bardzo dobra" << std::endl;
        } else if (score == 100) {
            std::cout << "Ocena: Celujaca" << std::endl;
        }
    }
 
    return 0;
}



    