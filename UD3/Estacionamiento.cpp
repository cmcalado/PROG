#include <iostream>
using namespace std;

/*
 @brief Función muestra por pantalla una tabla los vehículos y sus cargos correspondientes.
 @pre El cargo de cada vehículo ya calculado.
 @post Muestra por pantalla una tabla.
 @return No devuelve nada.
 @autor carlos
 @ver 1.0 
 */
void ImprimeTodo (double horas1, double horas2, double horas3, double automovil1, double automovil2, double automovil3){

	cout << "Automóvil" << "\tHoras" << "\tCargo" << endl;
	cout << "1" << "\t\t" << horas1 << "\t" << automovil1 << "$" << endl;
	cout << "2" << "\t\t" << horas2 << "\t" << automovil2 << "$" << endl;
	cout << "3" << "\t\t" << horas3 << "\t" << automovil3 << "$" << endl;
	cout << "Total" << "\t\t" << horas1+horas2+horas3 << "\t" << automovil1+automovil2+automovil3 << "$" << endl;

}

/*
 @brief Procedimiento calcual el cargo correspondiente a una cantidad concreta de horas
 @param (E) double horas la cantidad de horas que ha estado el coche en el estacionamiento.
 @param (s) double cargo la cantidad a pagar por las horas que ha estado estacionado el cohce.
 @pre horas >= 0 && horas <= 24
 @post calcula el cargo de los vehículos
 @return EL cargo por una cantidad de horas
 @autor carlos
 @ver 1.0 
 */
double CalcularCargo (double horas){
	double cargo = 1.0;

	if (horas >= 0 && horas <= 3)
		cargo = 2.0;

	else if (horas > 3 && horas <= 19){
		cargo = 2.0;
		while (horas > 3 && horas < 19) {
			cargo = cargo + 0.50;
			horas--;
		}
	}
	else if (horas > 19 && horas <= 24)
		cargo = 10.00;

	return cargo;
}

/*
 @brief Procedimiento que filtra los datos del usuario para que este solo puede introducir un valor entre 0 y 24 horas.
 @param (S) double horas la cantidad de horas que ha estado el coche en el estacionamiento.
 @pre Ninguna.
 @post Se devuelve por referencia en horas el tiempo que ha pasado estacionado el coche en dicho estacionamiento.
 @return No devulve nada.
 @autor carlos
 @ver 1.0
 */
void FiltrarDatos (double &horas1, double &horas2, double &horas3){
	do {
		cout << "Introduzca las horas que ha estado estacionado el primer coche, teniendo en cuenta que no puede pasar más de 24 en el estacionamiento: ";
		cin >> horas1;

		if (horas1 < 0 || horas1 > 24)
			cout << "El coche no puede pasar más de 24 horas en el estacionamiento" << endl;
		
	} while (horas1 < 0 || horas1 > 24);

		do {
		cout << "Introduzca las horas que ha estado estacionado el segundo coche, teniendo en cuenta que no puede pasar más de 24 en el estacionamiento: ";
		cin >> horas2;

		if (horas2 < 0 || horas2 > 24)
			cout << "El coche no puede pasar más de 24 horas en el estacionamiento" << endl;
		
	} while (horas2 < 0 || horas2 > 24);

		do {
		cout << "Introduzca las horas que ha estado estacionado el tercer coche, teniendo en cuenta que no puede pasar más de 24 en el estacionamiento: ";
		cin >> horas3;

		if (horas3 < 0 || horas3 > 24)
			cout << "El coche no puede pasar más de 24 horas en el estacionamiento" << endl;
		
	} while (horas3 < 0 || horas3 > 24);
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
	cout << "Este programa calculará los cargos aplicados a tres vehículos estacionados en un estacionamiento" << endl;

}

int main (){
	//Declaración de variables
	double horas1 = 0.0, horas2 = 0.0, horas3 = 0.0;
	double automovil1 = 0.0, automovil2 = 0.0, automovil3 = 0.0;

	Bienvenida ();
	FiltrarDatos (horas1, horas2, horas3);
	automovil1 = CalcularCargo (horas1);
	automovil2 = CalcularCargo (horas2);
	automovil3 = CalcularCargo (horas3);
	ImprimeTodo (horas1, horas2, horas3, automovil1, automovil2, automovil3);
}























