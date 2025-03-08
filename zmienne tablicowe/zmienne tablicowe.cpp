#include <iostream>
using namespace std;
int main() {
	int tablica [5];
	int suma=0;
	float srednia;
	cout << "Podaj 5 liczb calkowitych: " <<endl;
	for(int i=0; i<5;i++){
		cout <<"Podaj liczbe nr " <<i+1<<": ";
		cin >> tablica [i];
		suma += tablica [i];
	}
	srednia = suma / 5.0;
	cout << "Suma podanych liczb wynosi: " <<suma<<endl;
	cout <<"Srednia liczb wynosi: " <<srednia<<endl;
	
	}