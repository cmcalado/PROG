#include <iostream>
#include <cmath>
using namespace std;
int main () {

	double a, b, c, res1, res2;

	cout << "Programa para resolver una ecuación de segundo grado" << endl;
	cout << "Introduce a: ";
	cin >> a;
	cout << "Introduce b: ";
	cin >> b;
	cout << "Introduce c: ";
	cin >> c;



	if (a != 0) {

		if ( ((b*b)-4*a*c) >= 0) {
			res1=(-b+sqrt((b*b)-4*a*c))/(2*a);
			res2=(-b-sqrt((b*b)-4*a*c))/(2*a);

			cout << "Las soluciones son: "<< res1 << " y "<< " " << res2 << endl;
		}
		else {
			cout << "La ecuación no tiene solución porque el discriminante es negativo"<< endl;
		}	
	}
	else {
		cout << "Solo hay una solución: "<< -c/b << endl;
	}
}









