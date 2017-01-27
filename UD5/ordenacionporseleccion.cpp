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

void OrdSeleccion(int v[],int util){
	int pos_min;
	int aux;

	for (int i = 0; i < util - 1; i++){
		pos_min = i;
		for (int j = i + 1; j < util; j++)
			if (v[j] < v[pos_min])
				pos_min = j;

	aux = v[i];
	v[i] = v[pos_min];
	v[pos_min] = aux;
	}
}

int main(){
	const int DIM_VECTOR = 100;
	int vector[DIM_VECTOR] = {3,-5,7,-20,9,10,30,-1,2,-4};
	int util_vector = 10;

	cout << "Vector sin ordenar." << endl;
	ImprimeVector(vector, util_vector);
	OrdSeleccion(vector, util_vector);
	cout << "Vector ordenado." << endl;
	ImprimeVector(vector, util_vector);
}
