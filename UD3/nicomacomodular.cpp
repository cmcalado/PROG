#include <iostream>
using namespace std;

void Nicomaco (int x) {

	int impar = 0;
	int resultado = 0;

	impar = ((x - 1) * x + 1);

	cout << "El cubo de " << x << " = ";
	cout << impar;	

	resultado = impar;

	for (int i = 1; i < x; i++) {

		impar = impar + 2;
		resultado = resultado + impar;
		cout << " + " << impar;
	}

	cout << " = " << resultado << endl;
}

int main (){

	int x = 0;

	cout << "Este programa calcula el cubo de un número usando nicómaco" << endl;
	cout << "Introducu el número del que quieres calcular su cubo: ";
	cin >> x;

	Nicomaco (x);
}
