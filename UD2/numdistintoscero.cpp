#include <iostream>
using namespace std;
int main () {

	double a;
	double b;

	cout << "Mientras introduzcas dos números distintos de 0 el programa seguira ejucandose"<< endl;

	do {
		cout << "Introduce el primer número: ";
		cin >> a;
		cout << "Introduce el segundo número: ";
		cin >> b;

	} while ((a != 0) || (b != 0));

	cout << "Se acabó"<< endl;
}
