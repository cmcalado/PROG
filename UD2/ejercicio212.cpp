#include <iostream>
using namespace std;
int main () {
	
	double a = 0.0;
	double b = 0.0;
	char res;
	double resultado = 0.0;

	cout << "Bienvenido a  mi mini calculadora"<< endl;
	cout << "Introduce el primer número: ";
	cin >> a;
	cout << "Introduce el segundo número: ";
	cin >> b;

	cout << "Pulsa [S]uma/[R]esta/[M]ultiplicacion/[D]ivision: ";
	cin >> res;

	switch (res) {
	case 'S' :
	case 's' :
		resultado = a + b;
		cout << "El resultado de la suma es: "<< resultado << endl;
		break;
	case 'R' :
	case 'r' :
		resultado = a - b;
		cout << "El resultado de la resta es: "<< resultado << endl;
		break;
	case 'M' :
	case 'm' :
		resultado = a * b;
		cout << "El resultado de la multiplicación es: "<< resultado << endl;
		break;
	case 'D' :
	case 'd' :
		if (b != 0) {		
		res = a / b;
		cout << "El resultado de la división es: "<< resultado << endl;
		}
		else {
			cout << "No tiene solución"<< endl;
		}
		break;
	default:
		cout << "Por favor introduzca una de las opciones mostradas en pantalla"<< endl;
	}
}
