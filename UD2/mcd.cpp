#include <iostream>
using namespace std;
int main () {

	int a, b, res;

	cout << "Este programa calculara el máximo comun divisor de dos números"<< endl;

	cout << "Introduce el primer número: ";
	cin >> a;
	cout << "Introduce el segundo número: ";
	cin >> b;

	while (res != 0) {

		res = a % b;

		a = b;
		b = res;

	}

	cout << "El máximo comun divisor es: " << a << endl;
}
