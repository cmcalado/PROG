#include <iostream>
using namespace std;
int main () {

	int n;
	int i = 2;
	bool primo;

	cout << "Este programa calculará si el número introducido el primo" << endl;

	do {
		cout << "Introduzca un número: ";
		cin >> n;
	} while ( n <= 0);	

	primo = true;
	while ((i <= n-1) && (primo == true)) {

		if (n % i == 0) {
		primo = false;
		}
	i = i + 1;
	}

	if (primo == true) {
	
		cout << "El número " << n << " es primo" << endl;
	}
	else {

		cout << "El número " << n << " no es primo" << endl;
	}
}
