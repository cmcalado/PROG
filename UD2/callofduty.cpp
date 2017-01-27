#include <iostream>
#include <cmath>
using namespace std;
int main (){

	int xc, yc; // coordenadas del centro de la circunferencia C
	int Rc; // radio de la circunferencia C
	int xp, yp; // coordenadas del centro de la circunferencia P
	int Rp; // radio de la circunferencia P
	double Dcp; // distancia de los centros

	cout << "Este programa te dira la posición relativa de dos circunferencias" << endl;
	cout << "Introduce las coordenadas de la primera circunferencia C (mira) (xc, yc) y el radio separados por un espacio: ";
	cin >> xc >> yc >> Rc;
	cout << "Introduce las coordenadas de la segunda circunferencia P (mira) (xp, yp) y el radio separados por un espacio: ";
	cin >> xp >> yp >> Rp;

	// Distancia de los centros
	Dcp = sqrt(pow((yp - yc), 2) + pow((xp - xc), 2));
	
	// COINCIDENTES
	if ((xc == xp) && (yc == yp) && (Rc == Rp)) {

		cout << "Las circunferencia son coincidentes" << endl;
	}

	// Una dentro de otra
	 else 	if (Rc >= (Dcp + Rp)) {

		cout << "Una circunferencia está dentro de otra" << endl;
		}
		// Secantes
		else 	if (Dcp < (Rc + Rp)) { 

				cout << "Las circunferencias son secantes" << endl;
			}

	// Una fuera de otra
	if (Dcp > (Rc + Rp)) {

		cout << "Una circunferencia está fuera de otra" << endl;
	}

	// Tangentes
	if (Dcp == (Rc + Rp)) {

		cout << "Las circunferencias son tangentes" << endl;
	}
}
