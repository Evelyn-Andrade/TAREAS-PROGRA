// Evelyn Sofia Andrade Luna 9959-23-1224

#ifndef NOTAS_MATRIZ_H
#define NOTAS_MATRIZ_H

#include <iostream> // Incluir libreria para entrada y salida de datos
#include <iomanip> // libreria para manipular datos de salida
#include <string> // libreria para usasr cadenas de texto

#define NUMERO_ALUMNOS 5  // definir el rango
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

void llamaCiclo(); // Declar funci�n  llamaCiclo.
int busquedaAleatorios(int minimo, int maximo); // Declar funci�n busquedaAleatorios
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]); // Declar funci�n llenarMatriz
void imprimirMatrizLinea();  // Declarar funci�n imprimirMatrizLinea.
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], std::string nombreFacultad); // Declaramos una funci�n llamada imprimirMatriz

#endif



