#include <iostream>
#include <cmath>
using namespace std;
int main (){

	int n;
	int p = 0;
	int i = 0;
	bool num;

	cout << "Este programa determinará si el número entero introducido es un cuadrado perfecto" << endl;

	do {
		cout << "Introduzca el número: ";
		cin >> n;
	} while (n <= 0);

	num = false;
	while ((p <= n)) {

		p = i * i;
		i = i + 1;
		
		if (p == n) {
			num = true;
		}
	}

	if (num == true) {
		cout << "El número " << n << " es un cuadrado perfecto" << endl;
	}
	else 
		cout << "El número " << n << " NO es un cuadrado perfecto" << endl;
}
