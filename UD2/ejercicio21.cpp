#include <iostream>
using namespace std;
int main () {

	double a = 0.0;
	double b = 0.0;

	cout << "Introduce un número: ";
	cin >> a;
	cout << "Introduce otro número: ";
	cin >> b;

	if (a > b)
		cout << "El número mayor es: "<< a << endl;

	if (b > a)
		cout << "El número mayor es: "<< b << endl;
}
