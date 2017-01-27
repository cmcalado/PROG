#include <iostream>
using namespace std;
int main () {

	int a, b, x, y;

	cout << "Este programa calculará los multiplos de x en un intervalo [a, b]" << endl;

	cout << "Introduce un intervale [a, b]: ";
	cin >> a >> b;

	cout << "Ahora introduce x: ";
	cin >> x;

	for ( a, b; a <= b; a++) {

		y = a % x;
		
		if (y == 0) {
			
			cout << a << endl;
		}
	}
}
