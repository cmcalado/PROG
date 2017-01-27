#include <iostream>
#include <cmath>
using namespace std;
int main () {

	int f1;
	int c1;
	int f2;
	int c2;

	cout << "Este programa le dirá si es valido o no el movimiento que indique para las torres y la reina en un tablero de ajedrez"<< endl;

	cout << "Fila incial: ";
	cin >> f1;
	cout << "Columna incial: ";
	cin >> c1;
	cout << "Fila final: ";
	cin >> f2;
	cout << "columna final: ";
	cin >> c2;

	//Valida los movimientos dentro del tablero
	if ((f1 >= 0) && (f1 <= 8) && (f2 >= 0) && (f2 <= 8) && (c1 >= 0) && (c1 <= 8) && (c2 >= 0) && (c2 <= 8)) {


	//Torre
		if (((f1 == f2) && (c1 != c2)) || ((f1 != f2) && (c1 == c2))) {

			cout << "El movimiento es valido para la torre"<< endl;
		}

		else  {

			cout << "El movimiento no es valido para la torre"<< endl;
		}


	//Reina
		if (((abs(f2 - f1)) ==  (abs(c2 - c1))) || ((f1 == f2) && (c1 != c2)) || ((f1 != f2) && (c1 == c2))) {

			cout << "El movimiento es valido para la reina"<< endl;
		}
	
		else {

			cout << "El movimiento no es valido para la reina"<< endl;
		}


	//Caballo
		if (((abs(f2 - f1) == 2) && (abs(c2 - c1) == 1)) || ((abs(f2 - f1) == 1) && (abs(c2 - c1) == 2))) {

			cout << "El movimineto es valido para el caballo"<< endl;
		}

		else {

			cout << "El movimiento no es valido para el caballo"<< endl;
		}
	}
	else {
		cout << "Ese movimiento no es valido para ninguna pieza" << endl;
	}
}
