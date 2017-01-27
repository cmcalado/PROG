#include <iostream>
using namespace std;
int main () {
	
	int a = 0.0;

	cout << "Introduce un número: ";
	cin >> a;
	
	if ( a % 2 == 0) 
		cout << "El número es par"<< endl;

	if ( a % 2 != 0) 
		cout << "El número es impar"<< endl;
}	

