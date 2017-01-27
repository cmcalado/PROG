#include <iostream>
using namespace std;

	int Factorial (int n) {

		int i;
		int acu = 1;

		for (i = 2; i <= n; i++) {

			acu = acu * i;
		}

		return acu;
	}

int main (){

	int dato;
	int valor;

	cout << "Introduc un valor positivo: ";
	cin >> dato;

	valor = Factorial(dato);

	cout << "El factorial de " << dato << " es " << valor << endl;
}
