#include <iostream>
using namespace std;

void Segundos (int segundos) {

	int minutos, horas, dias;

	minutos = segundos / 60;
	horas = minutos / 60;
	dias = horas / 24;
	segundos = segundos / 86400;

	//SEGUNDOS

	if (segundos <= 1) {
		cout << segundos << " segundo" << endl;
	}
	else {
		cout << segundos << " segundos" << endl;
	}

	//MINUTOS
	
	if (minutos <= 1) {
		cout << minutos << " minuto" << endl;
	}
	else {
		cout << minutos << " minutos" << endl;
	}

	//HORAS

	if (horas <= 1) {
		cout << horas << " hora" << endl;
	}
	else {
		cout << horas << " horas" << endl;
	}

	//DÍAS

	if (dias <= 1) {
		cout << dias << " día" << endl;
	}
	else {
		cout << dias << " días" << endl;
	}
}

int main (){

	int segundos, minutos, horas, dias;

	cout << "Aquí podrá transformar una cantidad de segundos en segundos, minutos, horas y dias" << endl;

	do {
		cout << "Introduce los segundos: ";
		cin >> segundos;
	} while (segundos < 0);

	Segundos (segundos);
}
