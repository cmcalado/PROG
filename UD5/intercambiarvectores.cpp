#include <iostream>
using namespace std;

/**
 * @brief Módulo que imprimirá por pantalla un vector de enteros.
 * @param vector Es una referencia al vector de números enteros. Al ser un módulo de sólo lectura del vector, lo paso como referencia constante.
 * @param util Es la variable que contiene las componentes utilizadas/ocupadas actualmente en el vector. Se pasa por COPIA porque NO se va a cambiar el número de componentes utilizadas en el vector.
 * @post Se imprimirá por la pantalla de la consola el contenido del vector.
 */
void ImprimeVector(const int vector[], int util){
	for (int i = 0; i < util; i++)
		cout << "Posición " << i << ": " << vector[i] << endl;
}

void IntercambiarVectores (int v1[], const int DIM_V1, int util_v1, int v2[], const int DIM_V2, int util_v2){
	const int DIM_AUX = 500;
	int aux[DIM_AUX];
	int util_aux = 0;

	if (util_v1 <= DIM_V2)
		for (int i = 0; i < util_v1; i++){
			aux[i] = v1[i];
			util_aux = util_v1;
		}
		for (int i = 0; i < util_v2; i++){
			v1[i] = v2[i];
			util_v1 = util_v2;
		}
		for (int i = 0; i < util_v2; i++){
			v2[i] = aux[i];
			util_v2 = util_aux;
		}
}

int main(){
	const int DIM_VECTOR1 = 100;
	int vector1[DIM_VECTOR1] = {1,2,3,4,5,6,7,8,9,10};
	int util_vector1 = 10;
	const int DIM_VECTOR2 = 100;
	int vector2[DIM_VECTOR2] = {11,12,13,14,15,16,17,18,19,20};
	int util_vector2 = 10;

	cout << "Vector1" << endl;
	ImprimeVector(vector1, util_vector1);
	cout << "Vector2" << endl;
	ImprimeVector(vector2, util_vector2);

	IntercambiarVectores (vector1, DIM_VECTOR1, util_vector1, vector2, DIM_VECTOR2, util_vector2);
	cout << "Vectores ya intercambiados" << endl;
	cout << "Vector1" << endl;
	ImprimeVector(vector1, util_vector1);
	cout << "Vector2" << endl;
	ImprimeVector(vector2, util_vector2);
}
