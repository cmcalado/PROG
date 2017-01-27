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

	double Combinatorio (int m, int n) {

		double resul;
		int x = (m - n);

		resul = Factorial(m) / (Factorial(n) - (Factorial(x)));

		return resul;

	}

int main (){

	int m;
	int n;
	double resultado;

	cout << "Este programa calculará el combinatorio de dos números" << endl;

	do {
		cout << "Introduzca m: ";
		cin >> m;
		cout << "Introduzca n: ";
		cin >> n;

	} while (m <= n && n <= 0);

	if (m >= n && n == 0) {

		resultado == 1;	

		cout << "El resultado del combinatorio es " << resultado << endl;
	}
	else {

		resultado = Combinatorio (m, n);

		cout << "El resultado del combinatorio es " << resultado << endl;
	}
}



























