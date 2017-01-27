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
	float notas[DIM_NOTAS] = {0};
	int util_notas = 0;

	//Asignación de los valores.
	for (int i = 0; i < DIM_NOTAS; i++){
		cout << "Introduce la nota de alumno " << i + 1 << ": ";
		cin >> notas[i];
		util_notas++;
	}

	//Media
	for (int j = 0; j < util_notas; j++)
		res = res + notas[j];

	media = res / util_notas;
	cout << "La media es: " << media << endl;

	//Varianza
	for (int k = 0; k < util_notas; k++) {

		resul = resul + pow((notas[k] - media), 2);
	}
	variacion = resul / util_notas;
	cout << "La variacion es: " << variacion << endl;

	//Desviación
	desviacion = sqrt(variacion);
	cout << "La desviación es: " << desviacion << endl;
}
