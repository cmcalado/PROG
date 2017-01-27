#include <iostream>
using namespace std;

	bool esPrimo (int n) {

		int i = 2;
		bool primo;
		primo = true;
		while ((i <= n-1) && (primo == true)) {

			if (n % i == 0) {
			primo = false;
			}
		i = i + 1;
		}

		return primo;
	}

int main (){

	int n;
	bool valor;

	cout << "Este programa calculará si el número introducido el primo" << endl;
			
	cout << "Introduzca un número: ";
	cin >> n;

	
	valor = esPrimo (n);

	if (valor == true) {
	
		cout << "El número " << n << " es primo" << endl;
	}
	else {

		cout << "El número " << n << " no es primo" << endl;
	}
}
