#ifndef NOTAS_MATRIZ_H
#define NOTAS_MATRIZ_H

#include <iostream> // Incluimos una librería que nos permite trabajar con la entrada y salida estándar.
#include <iomanip> // Esta librería nos ayuda a manipular la salida de datos.
#include <string> // Necesitamos esta librería para usar cadenas de texto.

#define NUMERO_ALUMNOS 5  // Definimos el número de alumnos como 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

void llamaCiclo(); // Declaramos una función llamada llamaCiclo.
int busquedaAleatorios(int minimo, int maximo); // Declaramos una función llamada busquedaAleatorios
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]); // Declaramos una función llamada llenarMatriz
void imprimirMatrizLinea();  // Declaramos una función llamada imprimirMatrizLinea.
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], std::string nombreFacultad); // Declaramos una función llamada imprimirMatriz

#endif



