#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const int DIM_NOTAS = 5;
	int res = 0;
	int resul = 0;
	float media = 0.0;
	float desviacion = 0.0;
	float variacion = 0.0;
	float notas[DIM_NOTAS];

	//Asignación de los valores.
	for (int i = 0; i < DIM_NOTAS; i++){
		cout << "Introduce la nota de alumno " << i + 1 << ": ";
		cin >> notas[i];
	}

	//Media
	for (int j = 0; j <= DIM_NOTAS; j++)
		res = res + notas[j];

	media = res / DIM_NOTAS;
	cout << "La media es: " << media << endl;

	//Varianza
	for (int k = 0; k < util_notas; k++) {

		resul = resul + pow((notas[k] - media), 2);
	}
	variacion = resul / DIM_NOTAS;
	cout << "La variacion es: " << variacion << endl;

	//Desviación
	desviacion = sqrt(variacion);
	cout << "La desviación es: " << desviacion << endl;
}
