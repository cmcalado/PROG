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

void Intervalo (int a, int b) {
	bool primo = true;

	for ( a; a <= b; a++) {
		primo = esPrimo (a);
	
	if (primo) 
		cout << "El número " << a << " es primo." << endl;	

	}
}


int main (){

	int a = 0, b = 0;

	cout << "Este programa calculará si hay algun número primo en el intervalo que introduzca. " << endl;
	

	cout << "Introduzca el intervalo en el que quiere buscar los números primos: ";
	cin >> a >> b;

	Intervalo (a, b);
}
