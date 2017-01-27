#include <iostream>
#include <cmath>
using namespace std;

void CalcularMediaDesviacionVariacion(const float vector[], int &util, float &media, float &desviacion, float &variacion){
	int res = 0;
	int resul = 0;

	//Media
	for (int j = 0; j < util; j++)
		res = res + vector[j];

	media = res / util;
	cout << "La media es: " << media << endl;

	//Varianza
	for (int k = 0; k < util; k++) {

		resul = resul + pow(vector[k] - media, 2);
	}
	variacion = resul / util;
	cout << "La variacion es: " << variacion << endl;

	//Desviación
	desviacion = sqrt(variacion);
	cout << "La desviación es: " << desviacion << endl;
}

/**
 * @brief Módulo que agrega un nuevo número entero en el vector de enteros, al final de las componentes utilizadas. 
 * @pre El número entero que queremos insertar está filtrado.
 * @param vector Es una referencia al vector de números enteros. Al ser un módulo de escritura y lectura del vector, lo paso como referencia SIN constante.
 * @param util Es la variable que contiene las componentes utilizadas/ocupadas actualmente en el vector. Se pasa por REFERENCIA porque SÍ se va a cambiar el número de componentes utilizadas en el vector.
 * @param DIM Es la constante que me indica la DIMENSIÓN del vector, esto es el número máximo de componentes que podré utilizar. Es fijo y no se puede alterar.
 * @param entero Es el nuevo número entero que quiero insertar en el vector.
 */
void AsignacionDelVector(float vector[], int util, const int DIM){
	for (int i = 0; i < DIM; i++){
	cout << "Introduce la nota de alumno " << i + 1 << ": ";
	cin >> vector[i];
	util++;
	}
}

int main(){
	const int DIM_NOTAS = 5;
	int util_notas = 5;
	float notas[DIM_NOTAS] = {5,5,5,5,5};
	float media = 0.0;
	float desviacion = 0.0;
	float variacion = 0.0;

	//AsignacionDelVector(notas, util_notas, DIM_NOTAS);
	CalcularMediaDesviacionVariacion(notas, util_notas, media, desviacion, variacion);
}
