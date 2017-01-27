#include <iostream>
using namespace std;

/*
 @brief Procedimiento que calcula un número de la sucesión de Fibonacci.
 @param (E) int numero el número de la sucesión que se quiere calcular.
 @param (E) int f el 
 @pre numero > 0.
 @post Se muestra por pantalla el número de la sucesión requerido
 @return El factorial del número introducido.
 @autor carlos
 @ver 1.0
 */
int Fibonacci(int n){
	int f = 0;

	if (n == 0 || n == 1)
		f = n;
	else
		f = (Fibonacci(n - 1)) + (Fibonacci(n - 2));

	return f;
}

/*
 @brief Procedimiento que filtra los datos del usuario para que este solo puede introducir un valor mayor de 0.
 @param (S) int numero el número de la sucesión que se quiere calcular.
 @pre Ninguna.
 @post numero > 0.
 @return No devulve nada.
 @autor carlos
 @ver 1.0
 */
void FiltrarDatos (int &numero){
	do{
		cout << "Introduce un número para calcular la sucecion de fibonacci: ";
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
	cout << "Bienvenido al programa que calculará un número de la sucesión de Fibonacci." << endl;

}

int main(){
	int numero = 0;

	Bienvenida();
	FiltrarDatos(numero);
	cout << Fibonacci(numero) << endl;

}
