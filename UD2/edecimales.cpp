#include <iostream>
using namespace std;
int main (){

	double n;
	long double factorial = 1.0;
	long double E = 1.0;

	cout << "Mediante una sumatoria se calcularán los decimales que tiene el número e" << endl;
	cout << "Introduzca n: ";
	cin >> n;

	for (int i = 1; i < n; i++) {

		factorial *= i;
	
		E += 1/ factorial;
		
		cout << "El valor aproximado del número e es " << E << endl;
	}
}s
