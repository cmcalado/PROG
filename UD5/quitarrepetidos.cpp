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

void QuitarElementosRepetidosConsecutivos(const int entrada[], int util_entrada, const int DIM_ENTRADA, int salida[], int &util_salida, const int DIM_SALIDA){

	for (int i = 0; i < util_entrada; i++){
		if (entrada[i] != entrada[i + 1]){		
			salida[util_salida] = entrada[i];
			util_salida++;
		}	
	}
}

int main(){
	const int DIM_ENTRADA = 10, DIM_SALIDA = 10;
	int entrada[DIM_ENTRADA] = {3,3,3,4,5,5,6,8,8,8}, salida[DIM_SALIDA];
	int util_entrada = 10, util_salida = 0;

	QuitarElementosRepetidosConsecutivos(entrada, util_entrada, DIM_ENTRADA, salida, util_salida, DIM_SALIDA);
	cout << "Vector entrada" << endl;
	ImprimeVector(entrada, util_entrada);
	cout << "Vector salida" << endl;
	ImprimeVector(salida, util_salida);
}
