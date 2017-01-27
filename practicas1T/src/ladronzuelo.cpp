#include <iostream>
using namespace std;

/*
 @brief Procedimiento que filtra los datos del usuario para que estos cumplan con la post condicion.
 @param (S) char movimiento Variable que contendrá los posibles movimientos que introduzca el usuario.
 @pre Ninguna
 @post char == D || char == I || char == A
 @return No devuelve nada.
 @autor carlos
 @ver 1.0
 */
void FiltrarDatos(char &movimiento){
	do{
		cout << "\tIntroduce uno de los posibles movimientos: ";
		cin >> movimiento;

		if ((int(movimiento) != 65) && (int(movimiento) != 68) && (int(movimiento) != 73))
			cout << "\tIntroduce uno de los movimientos posibles." << endl;

	} while((int(movimiento) != 65) && (int(movimiento) != 68) && (int(movimiento) != 73));
}

/*
 @brief Procedimiento que calcula si entre los caracteres que ha introducido el usuario se encuentra la combinación correcta para abrir la caja fuerte.
 @param (S) char movimiento Varieable que contendrá los posibles movimientos que introduzca el usuario.
 @pre char == D || char == I || char == A
 @post Devuelve un mensaje por pantalla que indica si se ha abierto o no la caja fuerte.
 @return No devuelve nada.
 @autor carlos
 @ver 1.0
 */
void Ladronzuelo(char movimiento){
	char derecha = 'D', izquierda = 'I', abrir = 'A';
	bool se_abre = false;
	int contador = 0;

	while (movimiento != abrir){
		FiltrarDatos(movimiento);
		contador = 0;

		if (movimiento == derecha){
			contador++;
			while (movimiento == derecha){
			FiltrarDatos(movimiento);

				if (movimiento == izquierda){
					contador++;
					while (movimiento == izquierda){
					FiltrarDatos(movimiento);

						if (movimiento == derecha){
							contador++;
							while (movimiento == derecha){
							FiltrarDatos(movimiento);

								if (movimiento == izquierda){
									contador++;
									se_abre = true;						
								}
							}
						}
					}
				}
			}
		}
	}

	if (se_abre == true && contador == 4)
		cout << "ABIERTA" << endl;
	else if (se_abre == false) 
		cout << "NO SE ABRE" << endl;
	
	//else if (se_abre == true)
	//	cout << "ABIERTA" << endl;
	
}



/*
 @brief Procedimiento que imprime un mensaje de Bienvenida al usuario y el procedimiento que ha de seguir para usar el programa.
 @pre El programa tenga activa la salida por pantalla
 @post Saluda por pantalla el usuario
 @return No devuelde nada.
 @autor carlos
 @ver 1.0
 */
void Bienvenida (){
	cout << endl;
	cout << "Bienvenido a Ladronzuelo, intenta adivinar la contraseña de la caja fuerte..." << endl;
	cout << "La combinación para abrir la caja fuerte es una combinación de dos letras D (derecha) e I (izquierda) finalizando con una A para intentar abrir." << endl;
	cout << endl;

}

int main (){
	char movimiento;

	Bienvenida();
	Ladronzuelo(movimiento);
	

}
