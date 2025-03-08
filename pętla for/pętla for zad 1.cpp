#include <iostream>
using namespace std;
int main() {
int liczby[5];

cout << "Wprowadz 5 liczb:" << endl;

for (int i = 0; i < 5; i++){
	cin >> liczby[i];
}
cout <<"Liczby parzystej: ";

for (int i = 0; i < 5; i++) {
	if (liczby[i] % 2 == 0){
      cout << liczby[i] <<", ";
	}	
}

cout << endl;

return 0;

}