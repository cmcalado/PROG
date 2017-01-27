#include <iostream>
using namespace std;

/*
 @brief Procedimiento que imprime un mensaje de Despedida al usuario.
 @pre El programa tenga activa la salida por pantalla
 @post Saluda por pantalla el usuario
 @return No devuelde nada.
 @autor carlos
 @ver 1.0
 */
void Despedida(){
	cout << endl;
	cout << "Transmición terminada..." << endl;
	cout << "Cerrando programa..." << endl;

}

/*
 @brief Procedimiento que filtra los datos del usuario para que estos sean números mayores o iguales que 0.
 @param (S) int numero Variable que contendrá la sucesión que números que el usuario introducirá.
 @pre Ninguna
 @post numero >= 0.
 @return Devuelve numero cuando se cumpla la post condición.
 @autor carlos
 @ver 1.0
 */
void FiltroDatos (int &numero){
	do{
		cout << "\tIntroduce un número: ";
		cin >> numero;

		if (!(numero >= 0)){
			cout << "\t\t ¡ERROR! " << endl;
			cout << "\tTiene que ser un número mayor que 0." << endl;
		}

	}while(!(numero >= 0));

}

/*
 @brief Procedimiento que calcula la media más alta de los paquetes de datos.
 @param (S) int media Variable que contendrá las medias de los paquetes de datos.
 @param (S) int posicion Variable que contendrá la posición del paquete de datos con mayor media.
 @param (E) int numero Variable que contendrá la sucesión que números que el usuario introducirá.
 @pre numero >= 0.
 @post La media mayor será la que se devolvera como solucion
 @return No devuelve nada.
 @autor carlos
 @ver 1.0
 */
void Rosetta (double &media_max, int &posicion){
	int numero = 0, posicion_actual = 0;
	double contador = 0.0, suma = 0.0, media = 0.0;
	bool fin = false;
	
	media_max = 0.0;
	while (fin == false){

		FiltroDatos(numero);
		contador++;
		suma = suma + numero;
		media = suma / contador;

		if (numero == 0){
			posicion_actual++;
			contador = 0.0;
			suma = 0.0;
			FiltroDatos(numero);
			contador++;
			suma = suma + numero;
			media = suma / contador;

				if (numero == 0){
					fin = true;
				}
		}

		if (media > media_max){
			media_max = media;
			posicion = posicion_actual;
		}
	}

	cout << endl;
	cout << "La posición del paquete de datos con mayor media es: " << posicion << endl;
	cout << "La media de este paquete es: " << media_max << endl;
}

/*
 @brief Procedimiento que imprime un mensaje de Bienvenida al usuario.
 @pre El programa tenga activa la salida por pantalla
 @post Saluda por pantalla el usuario
 @return No devuelde nada.
 @autor carlos
 @ver 1.0
 */
void Bienvenida (){
	cout << endl;
	cout << "Bienvenido al programa que recibe los datos de la sonda Rosetta y calcula cual de los paquetes de datos tiene una media mayor." << endl;
	cout << endl;

}

int main (){
	int numero = 0, posicion = 0;
	double media_max = 0.0;

	Bienvenida();
	Rosetta(media_max, posicion);
	Despedida();
}
