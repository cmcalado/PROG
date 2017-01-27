#include <iostream>
using namespace std;

int main(){
	//Declaración de la matriz
	const int DIM_COL = 3;
	const int DIM_FIL = 3;
	
	int matriz[DIM_FIL][DIM_COL] = {{1,2,3},{4,5,6},{7,8,9}};

	for (int i = 0; i < 3; i++){			
		for (int j = 0; j < 3; j++){
			cout << matriz[i][j] << " ";			
		}
		cout << endl;
	}
}
