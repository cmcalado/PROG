#include <iostream>
#include <cmath>
using namespace std;
int main (){

	int n = 0;
	long double sumatoria = 0.0;
	long double PI = 0.0;

	cout << "Mediante una sumatoria se calcularán los decimales que tiene el número PI" << endl;
	cout << "Introduzca n: ";
	cin >> n;

	for (int i = 0; i <= n; i++){

		sumatoria += pow(-1.0,i) / pow(((2.0*i)+1.0),3);

		PI = cbrt(32.0*sumatoria);

		cout << "El valor aproximado (" << i << "): " << PI << endl;
	}
}
