#include <iostream>
using namespace std;

const int DIM_FIL = 50;
const int DIM_COL = 50;

void ImprimeMatriz(int m[][DIM_COL], int util_fil, int util_col){

	cout << "Imprimiendo matriz...\n" << endl;
	for (int i = 0; i < util_fil; i++){ 
		cout << "\t";			
		for (int j = 0; j < util_col; j++){
			cout << m[i][j] << " ";	
		}
	cout << endl;
	}

}

void InicializaMatriz(int m[][DIM_COL], int &util_fil, int &util_col){
	for (int f=0; f < util_fil; f++){
		for (int c=0; c < util_col; c++){
			cout << "Introduce el valor de la posición (" << f << " ," << c << "): ";
			cin >> m[f][c];
		}
	}
}

void UtilesMatriz (int &util_fil, int &util_col){
	// Declaración del tamaño de la matriz.
	// Filas.
	do {
		cout << "Introduce el número de filas: ";
		cin >> util_fil;
	}while ((util_fil < 1) || (util_fil > DIM_FIL));

	// Columnas.
	do {
		cout << "Introduce el número de columnas: ";
		cin >> util_col;
	}while ((util_col < 1) || (util_col > DIM_COL));
}

void BuscaMatriz(const int m[][DIM_COL], int util_fil, int util_col){
	int buscado = 0;
	bool encontrado = false;
	int fil_enc = 0;
	int col_enc = 0;

	cout << "Introduce el número que desea buscar en la matriz: ";
	cin >> buscado;

	for (int f = 0; !encontrado && f < util_fil; f++){
		for (int c = 0; !encontrado && c < util_col; c++){
			if (m[f][c] == buscado){
				encontrado = true;
				fil_enc = f;
				col_enc = c;
			}
		}
	}
	if (encontrado){
		cout << "Se ha encontrado el número que buscaba\n";
		cout << "En la posición (" << fil_enc << " ," << col_enc << " )\n";
	}	
	else
		cout << "El número buscado no está en la matriz.\n";
}

int main (){
	int matriz[DIM_FIL][DIM_COL];
	int util_fil = 0;
	int util_col = 0;

	UtilesMatriz(util_fil, util_col);
	InicializaMatriz(matriz, util_fil, util_col);
	ImprimeMatriz(matriz, util_fil, util_col);
	BuscaMatriz(matriz, util_fil, util_col);
}
