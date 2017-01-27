#include <iostream>
#include <cmath>
using namespace std;
int main () {

	double a, b, c, res1, res2;

	cout << "Programa para resolver una ecuación de segundo grado" << endl;
	cout << "Introduce a: ";
	cin >> a;
	cout << "Introduce b: ";
	cin >> b;
	cout << "Introduce c: ";
	cin >> c;

	res1=(-b+sqrt((b*b)-4*a*c))/(2*a);
	res2=(-b-sqrt((b*b)-4*a*c))/(2*a);

	cout << "Las soluciones son: "<< res1 << " y "<< " " << res2 << endl;
}
