#define BLACK_COLOR "\033[1;30m"
#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define YELLOW_COLOR "\033[1;33m"
#define BLUE_COLOR "\033[1;34m"
#define PURPLE_COLOR "\033[1;35m"
#define CYAN_COLOR "\033[1;36m"
#define WHITE_COLOR "\033[1;39m"

#define F_BLACK_COLOR "\033[1;40m"
#define F_RED_COLOR "\033[1;41m"
#define F_GREEN_COLOR "\033[1;42m"
#define F_YELLOW_COLOR "\033[1;43m"
#define F_BLUE_COLOR "\033[1;44m"
#define F_PURPLE_COLOR "\033[1;45m"
#define F_CYAN_COLOR "\033[1;46m"
#define F_WHITE_COLOR "\033[1;47m"

#define RESTORE_DEFAULT_COLOR "\033[0m"

#include <iostream>
using namespace std;


const int DIM_FIL = 50;
const int DIM_COL = 50;

/*
 @brief Módulo que inicializa todos los valores de la matriz a '-'.
 @param char tablero[][], matriz con la que jugaremos.
 @param int util_fil, variable con la cual damos tamaño a la matriz.
 @param int util_col, variable con la cual damos tamaño a la matriz.
 @pre La matriz ya ha tenido que ser declarada.
 @post Da valor a todas las posiciones de la matriz.
 @return Nada
 @autor neozizou
 @ver 1.0 
 */
void InicializarTablero(char tablero[][DIM_COL], int &util_fil, int &util_col){
	util_fil = 3;
	util_col = 3;
	
	char caracter_inicializador = '-';
	for (int f = 0; f < util_fil; f++)
		for (int c = 0; c < util_col; c++)
			tablero[f][c] = caracter_inicializador;
}

/*
 @brief Módulo que imprime por pantalla los nombre de los jugadores y la tabla en la que se irán introduciendo las jugadas.
 @param char tablero[][], matriz con la que jugaremos.
 @param int util_fil, variable con la cual damos tamaño a la matriz.
 @param int util_col, variable con la cual damos tamaño a la matriz.
 @param char jugador1[], vector en el que se guarda el nombre del primer jugador. 
 @param char jugador2[], vector en el que se guarda el nombre del segundo jugador jugador.
 @pre La matriz ha tenido que ser inicializada para no mostrar basura y los nombres de los jugadores introducidos por los usuarios.
 @post Muestra por pantalla la tabla.
 @return Nada
 @autor Carlos
 @ver 1.0 
 */
void ImprimeMatriz(char matriz[][DIM_COL], int util_fil, int util_col, char jugador1[], char jugador2[]){
	cout << PURPLE_COLOR << "--------------------------------------------------------" << RESTORE_DEFAULT_COLOR << endl;
	cout << RED_COLOR << "\t Jugador 1: " << jugador1 << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << "\t Jugador 2: " << jugador2 << RESTORE_DEFAULT_COLOR << endl;
	cout << PURPLE_COLOR << "--------------------------------------------------------" << RESTORE_DEFAULT_COLOR << endl;

	cout << CYAN_COLOR << "Introduce las coordenadas separadas por un espacio." << RESTORE_DEFAULT_COLOR << endl;

	cout << endl;
	cout << GREEN_COLOR << "\t -------------" << RESTORE_DEFAULT_COLOR << endl;
	for (int i = 0; i < util_fil; i++){
		cout << "\t";
		for (int j = 0; j < util_col; j++){
			cout << GREEN_COLOR << " | " << RESTORE_DEFAULT_COLOR << matriz[i][j];
		}
		cout << GREEN_COLOR << " | " << YELLOW_COLOR << i << RESTORE_DEFAULT_COLOR << endl;
		cout << GREEN_COLOR << "\t -------------" << RESTORE_DEFAULT_COLOR << endl;
	}
	cout << YELLOW_COLOR<< "\t   0   1   2" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl;
}

/*
 @brief Módulo que cálcula si uno de los jugadores ha ganado con una línea horizontal.
 @param char tablero[][], matriz con la que jugaremos.
 @param int fil, fila en la que el usuario acaba hacer una jugada.
 @param int col, columna en la que el usuario acaba hacer una jugada.
 @param int util_fil, variable con la cual damos tamaño a la matriz.
 @param int util_col, variable con la cual damos tamaño a la matriz.
 @pre EL usuario ha tenido que introducir una jugada.
 @post Da a saber si ha ganado alguno de los usuarios.
 @return bool gana, se vuelve true en caso de que gane alguno de los usuarios.
 @autor Carlos
 @ver 1.0 
 */
bool Horizontal(char tablero[][DIM_COL], int fil, int col, int util_fil, int util_col){
	bool gana = false;
	int contador = 1;
		for (int i = 1; i < util_col; i++){
			if (tablero[fil][i] == tablero[fil][i - 1])
				contador++;
		}

	if (contador == 3)
		gana = true;
	return gana;
}

/*
 @brief Módulo que cálcula si uno de los jugadores ha ganado con una línea vertical.
 @param char tablero[][], matriz con la que jugaremos.
 @param int fil, fila en la que el usuario acaba hacer una jugada.
 @param int col, columna en la que el usuario acaba hacer una jugada.
 @param int util_fil, variable con la cual damos tamaño a la matriz.
 @param int util_col, variable con la cual damos tamaño a la matriz.
 @pre EL usuario ha tenido que introducir una jugada.
 @post Da a saber si ha ganado alguno de los usuarios.
 @return bool gana, se vuelve true en caso de que gane alguno de los usuarios.
 @autor Carlos
 @ver 1.0 
 */
bool Vertical(char tablero[][DIM_COL], int fil, int col, int util_fil, int util_col){
	bool gana = false;
	int contador = 1;
		for (int i = 1; i < util_fil; i++){
			if (tablero[i][col] == tablero[i - 1][col])
				contador++;
		}

	if (contador == 3)
		gana = true;
	return gana;
}

/*
 @brief Módulo que cálcula si uno de los jugadores ha ganado con una línea diagonal.
 @param char tablero[][], matriz con la que jugaremos.
 @pre EL usuario ha tenido que introducir una jugada.
 @post Da a saber si ha ganado alguno de los usuarios.
 @return bool gana, se vuelve true en caso de que gane alguno de los usuarios.
 @autor Carlos
 @ver 1.0 
 */
bool Diagonal1(char tablero[][DIM_COL]){
	bool gana = false;

	if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2])
		gana = true;
	return gana;
}

/*
 @brief Módulo que cálcula si uno de los jugadores ha ganado con una línea diagonal.
 @param char tablero[][], matriz con la que jugaremos.
 @pre EL usuario ha tenido que introducir una jugada.
 @post Da a saber si ha ganado alguno de los usuarios.
 @return bool gana, se vuelve true en caso de que gane alguno de los usuarios.
 @autor Carlos
 @ver 1.0 
 */
bool Diagonal2(char tablero[][DIM_COL]){
	bool gana = false;

	if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0])
		gana = true;
	return gana;
}

/*
 @brief Módulo que llama a todos los módulos de comprobaciones y donde se muestra si hay un ganador.
 @param char tablero[][], matriz con la que jugaremos.
 @param int fil, fila en la que el usuario acaba hacer una jugada.
 @param int col, columna en la que el usuario acaba hacer una jugada.
 @param int util_fil, variable con la cual damos tamaño a la matriz.
 @param int util_col, variable con la cual damos tamaño a la matriz.
 @param char jugador1[], vector en el que se guarda el nombre del primer jugador. 
 @param char jugador2[], vector en el que se guarda el nombre del segundo jugador jugador.
 @param int contador, pasado por referencia variable con la que se lleva la cuenta del número de jugadas realizadas.
 @param int turno, variable auxiliar que indica a que jugador le toca jugar.
 @pre El usuario ha tenido que introducir una jugada.
 @post Muestra por pantalla quien ha ganado o si se ha empatado.
 @return Nada
 @autor Carlos
 @ver 1.0 
 */
void Comprobar(char tablero[][DIM_COL], int fil, int col, int util_fil, int util_col, char jugador1[], char jugador2[], int &contador, int &turno){
	if (Horizontal(tablero, fil, col, util_fil, util_col) == true){
		if (tablero[fil][col] == 'X'){
			cout << RED_COLOR << "\t\tGana " << jugador1 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
			contador = 10;
			turno = 1;
		}else 	{
				cout << BLUE_COLOR << "\t\tGana " << jugador2 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
				contador = 10;
				turno = 3;
			}
	}
	if (Vertical(tablero, fil, col, util_fil, util_col) == true){
		if (tablero[fil][col] == 'X'){
			cout << RED_COLOR << "\t\tGana " << jugador1 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
			contador = 10;
			turno = 1;
		}else	{
				cout << BLUE_COLOR << "\t\tGana " << jugador2 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
				contador = 10;
				turno = 3;
			}
	}
	if (Diagonal1(tablero) == true){
		if (tablero[fil][col] == 'X'){
			cout << RED_COLOR << "\t\tGana " << jugador1 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
			contador = 10;
			turno = 1;
		}else 	{
				cout << BLUE_COLOR << "\t\tGana " << jugador2 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
				contador = 10;
				turno = 3;
			}
	}
	if (Diagonal2(tablero) == true){
		if (tablero[fil][col] == 'X'){
			cout << RED_COLOR << "\t\tGana " << jugador1 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
			contador = 10;
			turno = 1;
		}else 	{
				cout << BLUE_COLOR << "\t\tGana " << jugador2 << "!!" << RESTORE_DEFAULT_COLOR << endl << endl;
				contador = 10;
				turno = 3;
			}
	}
	if (contador == 9)
		cout << CYAN_COLOR << "\t\tEmpate..." << RESTORE_DEFAULT_COLOR << endl << endl;
}

/*
 @brief Módulo que recoge las jugadas de los usuarios y comprueba si son validas o no.
 @param char tablero[][], matriz con la que jugaremos.
 @param int util_fil, variable con la cual damos tamaño a la matriz.
 @param int util_col, variable con la cual damos tamaño a la matriz.
 @param char jugador1[], vector en el que se guarda el nombre del primer jugador. 
 @param char jugador2[], vector en el que se guarda el nombre del segundo jugador jugador.
 @pre Que esté ya impreso el tablero para que los jugadores puedan saber que posiciones están libres.
 @post ningna
 @return Nada
 @autor Carlos
 @ver 1.0 
 */
void Jugada(char tablero[][DIM_COL], int util_fil, int util_col, char jugador1[], char jugador2[]){
	int contador = 0;
	int fil;
	int col;
	bool terminar = false;
	int turno = 1;

	do{
		if (turno == 1){
			//Jugador1
			do{
				cout << RED_COLOR<< "\tJugador1: " << jugador1 << RESTORE_DEFAULT_COLOR << endl << endl;
				cout << "Introduzca la fila y columna donde quiere poner su ficha: ";
				cin >> fil >> col;
			}while (!((fil >= 0) && (fil < util_fil) && (col >= 0) && (col < util_col) && (tablero[fil][col] == '-')));
			tablero[fil][col] = 'X';
			ImprimeMatriz(tablero, util_fil, util_col, jugador1, jugador2);
			contador++;
			turno = 2;
			Comprobar(tablero, fil, col, util_fil, util_col, jugador1, jugador2, contador, turno);

		}else if (turno == 2){
			//Jugador2
			do {
				cout << BLUE_COLOR << "\tJugador2: " << jugador2 << RESTORE_DEFAULT_COLOR << endl << endl;;
				cout << "Introduzca la fila y columna donde quiere poner su ficha: ";
				cin >> fil >> col;
			}while (!((fil >= 0) && (fil < util_fil) && (col >= 0) && (col < util_col) && (tablero[fil][col] == '-')));
			tablero[fil][col] = 'O';
			ImprimeMatriz(tablero, util_fil, util_col, jugador1, jugador2);
			contador++;
			turno = 1;
			Comprobar(tablero, fil, col, util_fil, util_col, jugador1, jugador2, contador, turno);
		}
	}while (contador <= 8);
}

/*
 @brief Módulo que recoge los nombres de los jugadores.
 @param char jugador1[], vector en el que se guarda el nombre del primer jugador. 
 @param char jugador2[], vector en el que se guarda el nombre del segundo jugador jugador.
 @pre Ninguna.
 @post Ninguna.
 @return Nada.
 @autor Carlos
 @ver 1.0 
 */
void Jugadores(char jugador1[], char jugador2[]){
	cout << RED_COLOR << "Introduzca el nombre del primer jugador: " << RESTORE_DEFAULT_COLOR;
	cin.getline(jugador1, 50);
	cout << BLUE_COLOR << "Introduzca el nombre del segundo jugador: " << RESTORE_DEFAULT_COLOR;
	cin.getline(jugador2, 50);
}


int main(){
	//Declaración de la matriz	
	char tablero[DIM_FIL][DIM_COL];
	char jugador1[50], jugador2[50];
	int util_fil = 0;
	int util_col = 0;	

	cout << CYAN_COLOR << "\t««««Bienvenido al 3-enRaya»»»»\n" << RESTORE_DEFAULT_COLOR;

	InicializarTablero(tablero, util_fil, util_col);
	Jugadores(jugador1, jugador2);
	ImprimeMatriz(tablero, util_fil, util_col, jugador1, jugador2);
	Jugada(tablero, util_fil, util_col, jugador1, jugador2);
}
