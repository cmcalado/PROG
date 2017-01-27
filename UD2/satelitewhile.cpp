#include <iostream>
using namespace std;
int main () {

	double dato;

	cout << "Este programa simula el funcionamiento de un satelite" << endl;

	while (dato >= 0) {

		cin >> dato;
		cout << "Recibido: "<< dato << endl;
	}

	cout << "Fin de la transmición" << endl;
}
