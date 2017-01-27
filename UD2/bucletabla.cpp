#include <iostream>
using namespace std;
int main () {

	int num = 0;
	int num2 = 0;
	int res = 0;

	cout << "Bienvenido a mi programa para calcular la tabla de multiplicar de un número"<< endl;
	cout << "Introduce el número: ";
	cin >> num;

	do {
		res = num * num2;
		cout << " " << num << " x "<< num2 << "= " << res << endl;
		num2 = num2 + 1;
	} while (num2 < 31);
}
