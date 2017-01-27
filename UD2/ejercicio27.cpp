#include <iostream>
using namespace std;
int main () {

	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	cout << "Introduce el primer número: ";
	cin >> a;
	cout << "Introduce el segundo número: ";
	cin >> b;
	cout << "Introduce el tercer número: ";
	cin >> c;

	if ((a > b) && (a > c)) {
		cout << "El número mayor es: "<< a << endl;
	}

	else if ((b > a) && (b > c)) {
		cout << "El número mayor es: "<< b << endl;
		}
		else if ((c > a) && (c > a)) {
			cout << "El número mayor es: "<< c << endl;
			}	
}





























