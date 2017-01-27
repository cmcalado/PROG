#include <iostream>
using namespace std;
int main () {

	double nota = 0.0;

	cout << "Introduce tu nota: ";
	cin >> nota;

	if ((nota >= 0) && (nota <= 10)) {

		if (nota < 5 ) {
			cout << "Suspenso" << endl;
		}
	
		else if ((nota >= 5) && (nota < 7)) {
				cout << "Aprobado" << endl;
			}
			else if ((nota >= 7) && (nota < 9)) {
					cout << "Notable" << endl;
				}
				else if ((nota >= 9) && (nota <= 10)){
					cout << "Sobresaliente" << endl;
					}
	}		
	else {
		cout << "Por favor introduzca un número entre 0 y 10"<< endl;
	}				
	
}

