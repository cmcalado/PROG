#include <iostream>
using namespace std;

/*
 @brief Procedimiento que calcula la función de Ackerman.
 @param (E) int m uno de lo valores necesarios para calcular la función.
 @param (E) int n el otro valore necesarios para calcular la función.
 @pre m > 0 && n > 0.
 @post Se muestra por pantalla el resultado de la función.
 @return Devuleve el resultado de la función.
 @autor carlos
 @ver 1.0
 */
int Ackerman(int m, int n){
	int res = 0.0;

	if (m == 0)
		res = n + 1;

	else if (n == 0)
		res = Ackerman(m - 1, 1);

	else
		res = Ackerman(m - 1, Ackerman(m, n - 1));

	return res;

}

/*
 @brief Procedimiento que filtra los datos del usuario para que este solo pueda intriducir valores naturales.
 @param (S) int m uno de lo valores necesarios para calcular la función.
 @param (S) int n el otro valore necesarios para calcular la función.
 @pre Ninguna.
 @post m > 0 && n > 0.
 @return No devulve nada.
 @autor carlos
 @ver 1.0
 */
void FiltrarDatos (int &m, int &n){
	cout << "Para esta función son necesarios dos número m y n, ambos deben ser números naturales." << endl;

	do{
		cout << "Introduce m: ";
		cin >> m;

		if (m < 0)
			cout << "ERROR, tiene que introducir un número natural" << endl;
	}while(m < 0);

	do{
		cout << "Introduce n; ";
		cin >> n;

		if (n < 0)
			cout << "ERROR, tiene que introducir un número natural" << endl;

	}while(n < 0);
}

/*
 @brief Procedimiento que imprime un mensaje de Bienvenida al usuario.
 @pre El programa tenga activa la salida por pantalla.
 @post Saluda por pantalla el usuario.
 @return No devuelde nada.
 @autor carlos
 @ver 1.0 
 */
void Bienvenida (){
	cout << "Bienvenido al programa que calculará la función de Ackerman." << endl;

}

int main(){
	int m = 0, n = 0;

	Bienvenida();
	FiltrarDatos(m,n);
	cout << "A(" << m << ", " << n << ") = " << Ackerman(m,n) << endl;

}
