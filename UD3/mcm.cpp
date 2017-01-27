#include <iostream>
using namespace std;

int MCD (int a, int b, int res) {

	while (res != 0) {

		res = a % b;

		a = b;
		b = res;
	}
	
	return a;
}

int mcm (int a, int b) {
	int res;

	res = (a * b)/MCD(a, b, res);

	return res;
}

int main (){

	int a, b, res;

	cout << "Este programa calculara el máximo comun multiplo de dos números"<< endl;

	cout << "Introduce el primer número: ";
	cin >> a;
	cout << "Introduce el segundo número: ";
	cin >> b;

	res = mcm(a, b);

	cout << "El máximo comun divisor es: " << res << endl;
}
