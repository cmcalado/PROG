#include <iostream>
using namespace std;

void ImprimeVector(const int vector[], int util){
	for (int i = 0; i < util; i++)
		cout << "Posición " << i << ": " << vector[i] << endl;

}

void copiarVectores(const int entrada[], int util_entrada, const int DIM_ENTRADA, int salida[], int &util_salida, const int DIM_SALIDA){
	if (DIM_SALIDA >= DIM_ENTRADA){
		for (int i = 0; i < util_entrada; i++)
			salida[i] = entrada[i];

		util_salida = util_entrada;
	} else 
		cout << "La dimensión del vector salida es menor a la del de entrada, no se puede copiar el vector..." << endl;
}

int main(){
	const int DIM_ENTRADA = 10, DIM_SALIDA = 10;
	int entrada[DIM_ENTRADA] = {1,2,3,4,5,6}, salida[DIM_SALIDA];
	int util_entrada = 6, util_salida = 0;

	copiarVectores(entrada, util_entrada, DIM_ENTRADA, salida, util_salida, DIM_SALIDA);
	cout << "Vector entrada" << endl;
	ImprimeVector(entrada, util_entrada);
	cout << "Vector salida" << endl;
	ImprimeVector(salida, util_salida);
}
