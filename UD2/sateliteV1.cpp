#include <iostream>
using namespace std;
int main () {
	
	int dato = 0.0;

	cout << "Este es un programa que simula un satelite" << endl;

	do {
		cin >> dato;
		cout << "Recibido: "<< dato << endl;
	} while (dato >= 0);

	cout << "Fin de la transmición" << endl;
}
