#ifndef NOTAS_MATRIZ_H
#define NOTAS_MATRIZ_H

#include <iostream> // Incluimos una librer�a que nos permite trabajar con la entrada y salida est�ndar.
#include <iomanip> // Esta librer�a nos ayuda a manipular la salida de datos.
#include <string> // Necesitamos esta librer�a para usar cadenas de texto.

#define NUMERO_ALUMNOS 5  // Definimos el n�mero de alumnos como 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

void llamaCiclo(); // Declaramos una funci�n llamada llamaCiclo.
int busquedaAleatorios(int minimo, int maximo); // Declaramos una funci�n llamada busquedaAleatorios
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]); // Declaramos una funci�n llamada llenarMatriz
void imprimirMatrizLinea();  // Declaramos una funci�n llamada imprimirMatrizLinea.
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], std::string nombreFacultad); // Declaramos una funci�n llamada imprimirMatriz

#endif



