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

void OrdInsercion(int v[], int util_v){
	int izq, i, valor;
	
	for (izq = 1; izq < util_v; izq++){
		valor = v[izq];
		
		for (i = izq; i > 0 && valor < v[i - 1]; i--)
			v[i] = v[i -1];

	v[i] = valor;
	}
}
int main(){
	const int DIM_VECTOR = 100;
	int vector[DIM_VECTOR] = {1,45,24,87,42,14,16,20,2,7,4};
	int util_vector = 11;

	cout << "Vector desordenado." << endl;
	ImprimeVector(vector, util_vector);
	OrdInsercion(vector, util_vector);
	cout << "Vector ordenado." << endl;
	ImprimeVector(vector, util_vector);
}
