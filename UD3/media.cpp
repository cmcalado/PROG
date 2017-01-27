#include <iostream>
using namespace std;

	double media (double x1, double x2, double x3) {

		return (x1+x2+x3)/3.0;
	}

int main (){

	double x1, x2, x3;
	double res;

	cout << "Introduce el primer valor: ";
	cin >> x1;
	cout << "Introduce el segundo valor: ";
	cin >> x2;
	cout << "Introduce el tercer valor: ";
	cin >> x3;

	res = media (x1, x2, x3);

	cout << "La media es " << res << endl;
}
