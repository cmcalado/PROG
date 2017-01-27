#include <iostream>
using namespace std;
int main (){

	int x1, y1, x2, y2, xd, yd;

	cout << "Este programa simula un disparo a porteria dando como salidas las diferentes posibilidades" << endl;

	do {

		cout << "Introduce las coordenadas de la esquina superior izquierda (x1, y1) de la porteria separadas por un espacio: ";
		cin >> x1 >> y1;
		cout << "Ahora las coordenadas de la esquina inferior derecha (x2, y2): ";
		cin >> x2 >> y2;

	} while ((x1 > x2) && (y1 < y2));

	cout << "Ahora introduce las coordenadas del disparo: ";
	cin >> xd >> yd;

	// GOL
	if ((xd > x1) && (xd < x2) && (yd < y1) && (yd > y2)) {

		cout << "GOOOL" << endl;
	}
	// FUERA
	if ((xd < x1) || (xd > x2) || (yd > y1)) {

		cout << "Fuera" << endl;
	}
	// PALO
	if (((xd == x1) && (yd >= y2 && yd < y1)) || ((xd == x2) && (yd >= y2 && yd < y1))) {
	
		cout << "Palo" << endl;
	}
	// LARGUERO
	if ((xd > x1) && (xd < x2) && (yd == y1)) {

		cout << "Larguero" << endl;
	}
	// ESCUADRA
	if (((xd == x1) || (xd == x2)) && (yd == y1)) {

		cout << "Escuadra" << endl;
	}
	// TIRO TOPO
	if (yd < y2) {

		cout << "El fútbol no es lo tuyo..." << endl;
	}
}
