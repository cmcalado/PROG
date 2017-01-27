#include <iostream>
#include <cmath>
using namespace std;
int main () {

	int r = 0.0;
	double L = 0.0;
	double A = 0.0;
	const double pi = 3.14159;

	cout << "Introduce el radio de una circunferencia: ";
	cin >> r;

	L = 2*pi*r;
	A = pi*(pow(r, 2));

	if (r > 0) {
		cout << "El radio es: "<< r << endl;
		cout << "El perimetro es: "<< L << endl;
		cout << "El area es: "<< A << endl;
	}
	
	if (r < 0){
		cout << "El radio es negativo"<< endl;
	}
}









	
