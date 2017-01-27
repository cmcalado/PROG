#include <iostream>
using namespace std;

bool BuscaSec (const int vector[], int util, int &posicion, int buscando){
	bool encontrado = false;
	for(int i=0; (i < util) && !encontrado; i++)
		if (vector[i] == buscando)
			posicion = i;
			encontrado = true;
	return encontrado;
}



int main(){
	const int DIM_VECTOR = 100;
	int vector[DIM_VECTOR] = {1,45,24,87,42,14,16,20,2,7,4};
	int util_vector = 11;
	int posicion;
	int buscando;
	
	cout << "Introduzca el número que quiere buscar: ";
	cin >> buscando;

	 if (BuscaSec (vector, util_vector, posicion, buscando) == true)
		cout << "El número " << buscando << " se ecuentra en la posicion [" << posicion << "] del vector" << endl;
	else
		cout << "No se ha encontrado el número que buscaba" << endl;
}
