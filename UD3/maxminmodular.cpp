#include <iostream>
using namespace std;

void MaxMin (int &max, int &min){

	int num;

	for (int i = 0; i < 10; i++) {

		cout << "Introduce un número: ";
		cin >> num;

		if (num > max) {
			max = num;
		}

		if (num < min) {
			min = num;
		}
	}
}

int main (){

	int max = 0;
	int min = 0;

	cout << "Este programa calculará el número mayor y menor de una serie de 100 número" << endl;

	MaxMin(max, min);

	cout << "El máximo es " << max << endl;

	cout << "El mínimo es " << min << endl;
}
