#include <iostream>
using namespace std;
int main () {

	int dato, i;

	for (i = 0; i < 10; i++) {

		cout << "Recibido: " << dato << endl;
		cin >> dato;
		
		if (dato >= 0) 
			cout << "Precesando: " << dato << endl;
		else
			i = 21;
	}
}
