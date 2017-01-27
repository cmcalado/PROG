#include <iostream>
using namespace std;

void Intercambiar (int &x, int &y) {

	int aux = x;
	x = y;
	y = aux;

	cout << "El valor de a dentro de la función es: " << x << endl;
	cout << "El valor de b dentro de la función es: " << y << endl;
}

int main (){

	int a = 1;
	int b = 2;

	cout << "El valor de a es: " << a << endl;
	cout << "El valor de b es: " << b << endl;

	//Intercambia los valores de "a" y "b"
	/*int aux = a;
	a = b;
	b = aux;*/

	Intercambiar (a, b);

	cout << "El valor de a tras intercambiar los valores es: " << a << endl;
	cout << "El valor de b tras intercambiar los valores es: " << b << endl;	
}
