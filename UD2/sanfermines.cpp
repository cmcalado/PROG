#include <iostream>
using namespace std;

	int velMaxToros (int toros) {

		int velocidad = 0;
		int velMax = 0;	

		for (int i = 0; i < toros; i++) {

			do {
				cout << "Introduce la velocidad de cada toro: ";
				cin >> velocidad;
			} while (velocidad > 100);	

			if (velocidad > velMax) {
				velMax = velocidad;
			}
		}

	return velMax;
	}

int main (){

	int toros;
	int velocidad;
	int velMax;
	int corredor = 1;
	int vel_Corredor;

	cout << "Este programa calculará la velocidad máxima a la que los corredores de San Fermín tienen que correr para que no los pillen los toros" << endl;

	cout << "Introduce la cantida de toros que correrán en el encierro: ";
	cin >> toros;
	cout << "Ahora introduce la velocidad a la que va el corredor: ";
	cin >> vel_Corredor;

	velMax = velMaxToros (toros);

	cout << "La velocidad máxima a la que corren los toros es: " << velMax << endl;
	
	if (velMax > vel_Corredor){

		cout << "EL corredor tiene correr más rápido" << endl;
	}
	else {
		cout << "La velocidad del corredor en correcta" << endl;
	}
}









