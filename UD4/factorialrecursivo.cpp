#include <iostream>
using namespace std;

/*
 @brief Procedimiento que calcula el factorial de manera recursiva.
 @param (S) int num el número al cual se le quiere calcualar el factorial.
 @pre numero > 0.
 @post Se muestra por pantalla el factorial del número introducido.
 @return El factorial del número introducido.
 @autor carlos
 @ver 1.0
 */
int FactorialRecursivo (int n){
	int f;

	if (n == 0)
		f = 1;
	else
		f = n * FactorialRecursivo(n - 1);

	return f;
}

/*
 @brief Procedimiento que calcula el factorial de manera iterativa
 @param (S) int num el número al cual se le quiere calcualar el factorial.
 @pre numero > 0.
 @post Se muestra por pantalla el factorial de 1 hasta el del número introducido.
 @return No devulve nada.
 @autor carlos
 @ver 1.0
 */
void FactorialIterativo (int num){
	long int res = 1;

	for (int i = 1; i <= num; i++) {

		res = res * i;

		cout << "El factorial del número " << i << " es: " << res << endl;
	}
}

/*
 @brief Procedimiento que filtra los datos del usuario para que este solo puede introducir un valor mayor de 0.
 @param (S) int numero el número al cual se le quiere calcualar el factorial.
 @pre Ninguna.
 @post numero > 0.
 @return No devulve nada.
 @autor carlos
 @ver 1.0
 */
void FiltrarDatos (int &numero){
	do{
		cout << "Introduce un número para calcular su factorial: ";
		cin >> numero;
	}while(numero < 0);

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
	cout << "Este programa calculará el factorial de un número de manera iterativa y recursiva" << endl;

}

int main(){
	int numero = 0;

	Bienvenida();
	FiltrarDatos(numero);
	// Factorial iterativo
	FactorialIterativo(numero);
	// Factorial recursivo
	cout << "El factorial (recursivo) de " << numero << " es = " << FactorialRecursivo(numero) << endl;

}
