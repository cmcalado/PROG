#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <iomanip>

using namespace std;

void copiarVector( int v_copia[], int util_v_copia, int v[], int &util_v ){
    for (int i=0; i < util_v_copia; i++){
        v[i] = v_copia[i];
    }
    util_v = util_v_copia;
}

void generarVector( int v[], int &util_v, int DIM_V){
    for (int i=0; i < DIM_V; i++){
        v[i] = (1 + rand() % 1000); //Cambiar la variabilidad del vector para evitar que se repitan los números
        util_v++;
    }
}

void imprimeVector(const int v[], int util_v){
    cout << "V = { ";
    for (int i=0; i < util_v; i++)
        cout << v[i] << " ";
    cout << "}" << endl;
}

void algoritmoOrdenacionBurbuja(int v[], int util_v){
    bool cambio = true; //para detectar una pasada sin cambios
    int aux;
    for (int izda = 0; izda < util_v && cambio; izda++){
        cambio = false;
        for (int i = util_v-1; i > izda; i--){
            if (v[i] < v[i-1]){
                cambio = true;
                //Intercambiamos
                aux = v[i];
                v[i] = v[i-1];
                v[i-1] = aux;
            }
        }
        //cout << "Iteración (" << izda << "): ";
        //imprimeVector(v, util_v);
    }
}

void OrdInsercion(int v[], int util_v){
	int izq, i, valor;
	
	for (izq = 1; izq < util_v; izq++){
		valor = v[izq];
		
		for (i = izq; i > 0 && valor < v[i - 1]; i--)
			v[i] = v[i -1];

	v[i] = valor;
	}
}

void OrdSeleccion(int v[],int util){
	int pos_min;
	int aux;

	for (int i = 0; i < util - 1; i++){
		pos_min = i;
		for (int j = i + 1; j < util; j++)
			if (v[j] < v[pos_min])
				pos_min = j;

	aux = v[i];
	v[i] = v[pos_min];
	v[pos_min] = aux;
	}
}

int main(){
    const int DIM_V = 50; //Cambiar las dimensiones para probar con diferentes tamaños
    int v[DIM_V] = {0};
    int util_v = 0;
    
    const int DIM_VCOPIA = 50; //Cambiar las dimensiones para probar con diferentes tamaños
    int v_copia[DIM_VCOPIA] = {0};
    int util_v_copia = 0;

    //Variable de clock
    clock_t t_iniBurbuja, t_finBurbuja, t_iniSeleccion, t_finSeleccion, t_iniInsercion, t_finInsercion;
    double secsBurbuja, secsSeleccion, secsInsercion;
    
    
    //Generamos el Vector Aleatorio
    generarVector( v_copia, util_v_copia, DIM_VCOPIA);

    //Algoritmo de Selección
    cout << endl << "********** ALGORITMO DE ORDENACIÓN POR SELECCIÓN *************" << endl;
    copiarVector( v_copia, util_v_copia, v, util_v );
    cout << "Mi Vector Inicial es: ";
    imprimeVector(v, util_v);

    t_iniSeleccion = clock();
    OrdSeleccion(v, util_v);
    t_finSeleccion = clock();
    
    cout << "Mi Vector Final es: ";
    imprimeVector(v, util_v);
    
    //Algoritmo de Inserción
    cout << endl << "********** ALGORITMO DE ORDENACIÓN POR INSERCIÓN *************" << endl;
    copiarVector( v_copia, util_v_copia, v, util_v );
    cout << "Mi Vector Inicial es: ";
    imprimeVector(v, util_v);

    t_iniInsercion = clock();
    OrdInsercion(v, util_v);
    t_finInsercion = clock();

    cout << "Mi Vector Final es: ";
    imprimeVector(v, util_v);
    
    //Algoritmo de la Burbuja
    cout << endl << "********** ALGORITMO DE ORDENACIÓN POR BURBUJA *************" << endl;
    copiarVector( v_copia, util_v_copia, v, util_v );
    cout << "Mi Vector Inicial es: ";
    imprimeVector(v, util_v);

    t_iniBurbuja = clock();
    algoritmoOrdenacionBurbuja(v, util_v);
    t_finBurbuja = clock();

    cout << "Mi Vector Final es: ";
    imprimeVector(v, util_v);
    
    //Calculo del tiempo de ejecución de los módulos.

    //Algoritmo de selección.
    secsSeleccion = (double)(t_finSeleccion - t_iniSeleccion) / CLOCKS_PER_SEC;
    cout << fixed << setprecision(16) << secsSeleccion << endl;

    //Algoritmo de Inserción.
    secsInsercion = (double)(t_finInsercion - t_iniInsercion) / CLOCKS_PER_SEC;
    cout << fixed << setprecision(16) << secsInsercion << endl;

    //Algoritmo de la Burbuja.
    secsBurbuja = (double)(t_finBurbuja - t_iniBurbuja) / CLOCKS_PER_SEC;
    cout << fixed << setprecision(16) << secsBurbuja << endl;
}
