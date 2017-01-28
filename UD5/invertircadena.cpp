#include <iostream>
using namespace std;

void ImprimeCad (const char cadena[], int util){
	for (int i = 0; i < util; i++)
		cout << cadena[i];
	cout << endl;
}

void InvertirCadena (const char cadena[], char invertida[], int util_cadena, int &util_invertida){
	int j = util_cadena - 1;	
	for (int i = 0; i < util_cadena; i++){
		invertida[j] = cadena[i];
		j--;
	}
	util_invertida = util_cadena;
}

int main(){
	const int DIM = 100;
	char cadena[DIM] = {'h','o','l','a'};
	char invertida[DIM];
	int util_cadena = 4;
	int util_invertida = 0;

	//Imprime cadena sin cambios
	ImprimeCad(cadena, util_cadena);

	//Invertimos cadena y la mostramos por pantalla
	InvertirCadena(cadena, invertida, util_cadena, util_invertida);
	ImprimeCad(invertida, util_invertida);
}
