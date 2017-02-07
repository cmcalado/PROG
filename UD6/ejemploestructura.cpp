#include <iostream>
#include <cmath>
using namespace std;

/**************************************
 * Definición de la Estructura Tiempo
 **************************************/
struct Tiempo{
    int hora;
    int minutos;
    int segundos;
};

/********************************************
 * Módulos SET y GET de la Estructura Tiempo
 ********************************************/

/**
 * @brief Devuelve la hora de una variable de tipo Tiempo.
 * @param const Tiempo &untiempo Referencia constante de tipo tiempo donde se encuentran los datos de tipo Tiempo de los que quiero obtener la hora.
 * @pre No olvidar declarar en la función llamante la variable de Tipo Tiempo.
 * @return Devuelve un número entero (int) con la hora que contiene la variable de tipo Tiempo sobre la que quiero consultar.
 */
int getHora(const Tiempo &untiempo){
	return untiempo.hora;
}

/**
 * @brief Devuelve los minutos de una variable de tipo Tiempo.
 * @param const Tiempo &untiempo Referencia constante de tipo tiempo donde se encuentran los datos de tipo Tiempo de los que quiero obtener los minutos.
 * @pre No olvidar declarar en la función llamante la variable de Tipo Tiempo.
 * @return Devuelve un número entero (int) con la hora que contiene la variable de tipo Tiempo sobre la que quiero consultar.
 */
int getMinutos(const Tiempo &untiempo){
	return untiempo.minutos;
}

/**
 * @brief Devuelve los segundos de una variable de tipo Tiempo.
 * @param const Tiempo &untiempo Referencia constante de tipo tiempo donde se encuentran los datos de tipo Tiempo de los que quiero obtener los segundos.
 * @pre No olvidar declarar en la función llamante la variable de Tipo Tiempo.
 * @return Devuelve un número entero (int) con la hora que contiene la variable de tipo Tiempo sobre la que quiero consultar.
 */
int getSegundos(const Tiempo &untiempo){
	return untiempo.segundos;
}

/**
 * @brief Establece la hora de una variable de tipo Tiempo.
 * @param Tiempo &untiempo Referencia constante de tipo tiempo donde se encuentran los datos de tipo Tiempo a los que quiero modificar la hora.
 * @param int nuevo_hora Variable entera con la nueva hora que quiero establecer en la variable de tipo Tiempo que paso por referencia.
 * @pre No olvidar declarar en la función llamante la variable de Tipo Tiempo.
 * @post La hora que contiene la variable de tipo Tiempo sobre la que quiero cambiar, estará modificada con el parametro nueva_hora.
 */
void setHora(Tiempo &untiempo, int nueva_hora){
	untiempo.hora = nueva_hora;
}

/**
 * @brief Establece los minutos de una variable de tipo Tiempo.
 * @param Tiempo &untiempo Referencia constante de tipo tiempo donde se encuentran los datos de tipo Tiempo a los que quiero modificar los minutos.
 * @param int nuevo_minuto Variable entera con la nueva hora que quiero establecer en la variable de tipo Tiempo que paso por referencia.
 * @pre No olvidar declarar en la función llamante la variable de Tipo Tiempo.
 * @post La hora que contiene la variable de tipo Tiempo sobre la que quiero cambiar, estará modificada con el parametro nuevo_minuto.
 */
void setMinutos(Tiempo &untiempo, int nuevo_minuto){
	untiempo.minutos = nuevo_minuto;
}

/**
 * @brief Establece los segundos de una variable de tipo Tiempo.
 * @param Tiempo &untiempo Referencia constante de tipo tiempo donde se encuentran los datos de tipo Tiempo a los que quiero modificar los minutos.
 * @param int nuevo_minuto Variable entera con la nueva hora que quiero establecer en la variable de tipo Tiempo que paso por referencia.
 * @pre No olvidar declarar en la función llamante la variable de Tipo Tiempo.
 * @post La hora que contiene la variable de tipo Tiempo sobre la que quiero cambiar, estará modificada con el parametro nuevo_minuto.
 */
void setSegundos(Tiempo &untiempo, int nuevo_segundo){
	untiempo.segundos = nuevo_segundo;
}


//Ejemplo de Definición de Módulo Pasándole una Variable Estructura por Referencia
void ImprimirHora(Tiempo &untiempo){
	cout << "Hora: " << untiempo.hora <<":"<< untiempo.minutos <<":"<< untiempo.segundos << endl;
}

 void IntroducirHoraUsuario(Tiempo &t){
	int hora, minutos, segundos;
	cout << "Introduce la hora actual: ";
	cin >> hora;
	setHora(t,hora);
	cout << "Ahora los minutos: ";
	cin >> minutos;
	setMinutos(t,minutos);
	cout << "Y los segundos: ";
	cin >> segundos;
	setSegundos(t,segundos);
 }

 void CalcularTiempoRestanteaAlarma(Tiempo &tusuario, Tiempo &alarma, Tiempo &dif){
	int hora_res;
	int min_res;
	int seg_res;

	hora_res = abs(getHora(tusuario) - getHora(alarma));
	setHora(dif,hora_res);

	min_res = abs(getMinutos(tusuario) - getMinutos(alarma));
	setMinutos(dif,min_res);

	seg_res = abs(getSegundos(tusuario) - getSegundos(alarma));
	setSegundos(dif,seg_res);
 }

int main(){
	//Declaración de Variables de Tipo Estructura
	Tiempo ahora = {13,58,33}, alarma, tusuario, dif;
    
	//Diferentes formas de Asignación de Valores a los Miembros de una Estructura
	setHora(alarma,7);
	setMinutos(alarma,getMinutos(ahora));
	setSegundos(alarma,45);
    
	IntroducirHoraUsuario(tusuario);
	ImprimirHora(tusuario);

	//LLamada a módulo usando una variable estructura
	ImprimirHora(alarma);
    
	//Asignación directa de Variables Estructura
	//La asignación se hace miembro a miembro automáticamente...
	alarma = ahora;
    
	ImprimirHora(alarma);

	CalcularTiempoRestanteaAlarma(tusuario,alarma,dif);

	ImprimirHora(dif);
}



































