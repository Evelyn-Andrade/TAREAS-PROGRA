#include "notas_matriz.h"  // Se incluye el archivo de encabezado "notas_matriz.h" para usar las funciones definidas en él.
#include <stdio.h>         // Incluye la biblioteca estándar de C para operaciones de entrada y salida.
#include <stdlib.h>        // Incluye la biblioteca estándar de C para funciones de utilidad.
#include <unistd.h>        // Incluye la biblioteca estándar de C para funciones de sistema.
#include <string.h>        // Incluye la biblioteca estándar de C para operaciones de cadena de texto.

using namespace std; // Se añade para evitar tener que usar std:: en cada referencia a string

void llamaCiclo() {
    // Función principal del programa que realiza un ciclo de comparación de promedios entre tres facultades.

    // Declaración de variables locales.
    float matriz_facultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    char opcion;
    bool repetir = true;
    float promedio_facultad_1;
    float promedio_facultad_2;
    float promedio_facultad_3;
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos","Luis","Maria","Pedro","Juan"};

    do {
        system("cls");  // Limpia la pantalla.
        promedio_facultad_1 = 0;
        promedio_facultad_2 = 0;
        promedio_facultad_3 = 0;

         // Muestra título y llena matrices de calificaciones para cada facultad.
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        llenarMatriz(matriz_facultad_1);
        promedio_facultad_1 = imprimirMatriz(matriz_facultad_1, alumnos, "Facultad de Ingenieria");
        llenarMatriz(matriz_facultad_2);
        promedio_facultad_2 = imprimirMatriz(matriz_facultad_2, alumnos, "Facultad de Arquitectura");
        llenarMatriz(matriz_facultad_3);
        promedio_facultad_3 = imprimirMatriz(matriz_facultad_3, alumnos, "Facultad de Administracion");

        // Compara promedios y muestra resultados.
        if (promedio_facultad_1 > promedio_facultad_2 && promedio_facultad_1 > promedio_facultad_3) {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Ingenieria" << " Promedio: " << promedio_facultad_1 << endl;
        } else if (promedio_facultad_2 > promedio_facultad_1 && promedio_facultad_2 > promedio_facultad_3) {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Arquitectura" << " Promedio: " << promedio_facultad_2 << endl;
        } else if (promedio_facultad_3 > promedio_facultad_2 && promedio_facultad_3 > promedio_facultad_1) {
            cout << " La facultad con el mejor promedio es : " << "Facultad de Administracion" << " Promedio: " << promedio_facultad_3 << endl;
        } else {
            cout << " Algunas facultades tienen el mismo promedio " << endl << endl;
        }
        // Pregunta si se desea repetir el cálculo.
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n') {
            repetir = false;
        }
    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo) {
   // Función que genera un número aleatorio en un rango dado.
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]) {
    // Función que llena la matriz de calificaciones con valores aleatorios y calcula el promedio de cada alumno.
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        float suma = 0;
        int calificacion = 0;
        for (x = 0; x < NUMERO_NOTAS; x++) {
// Genera calificaciones aleatorias para diferentes componentes de evaluación.
            if (x == 0 || x == 3)  // Primer parcial o actividades.
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 20);
            else if (x == 1)  //Calculo del segundo parcial
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 25);
            else if (x == 2)  //Calculo del examen final
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 35);
            suma += (float)calificacion;  // Suma las calificaciones para calcular el promedio
            matriz[y][x] = calificacion;  // Almacena la calificación en la matriz.
            calificacion = 0;
        }
        // Calcula y agrega el promedio al final de la fila de calificaciones.
        matriz[y][NUMERO_NOTAS] = suma / NUMERO_NOTAS;
    }
}

void imprimirMatrizLinea() {
    // Función que imprime una línea horizontal para separar las filas de la matriz
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_NOTAS + 1; x++) {
        cout << "+---------";
    }
    cout << "+\n";
}

float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], std::string nombreFacultad) {
    // Función que imprime la matriz de calificaciones junto con los nombres de los alumnos y los promedios.// Función que imprime la matriz de calificaciones junto con los nombres de los alumnos y los promedios.
    int y, x;
// Variables para calcular los promedios mayor y menor.
    float promedioMayor = matriz[0][NUMERO_NOTAS];
    float promedioMenor = matriz[0][NUMERO_NOTAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);

    // Imprime el nombre de la facultad.
    cout << nombreFacultad << endl;
    cout << "(Nota1)=>Primer Parcial  (Nota2)=>Segundo Parcial (Nota3)=>Final (Nota4)=>Actividades" << endl;
    imprimirMatrizLinea();
    // Imprime las etiquetas de las columnas.
    cout << setw(9) << "Alumno";
    for (x = 0; x < NUMERO_NOTAS; x++) {
        cout << setw(9) << "Nota" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();

    // Imprime los datos de la matriz de calificaciones y calcula los promedios.
    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_NOTAS; x++) {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
            suma += calificacion;
        }
        float promedio = suma / NUMERO_NOTAS;
        totalGeneral += promedio;

// Actualiza los promedios mayor y menor, y los nombres correspondientes
        if (promedio > promedioMayor) {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor) {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }

// Imprime el promedio de cada alumno.
        cout << setw(9) << fixed << setprecision(2) << promedio << "|" << endl;
        imprimirMatrizLinea();
    }
// Calcula el promedio general de la facultad.
    promedioGeneral = totalGeneral / NUMERO_ALUMNOS;
    cout << "Nota mayor: " << setw(10) << alumnoPromedioMayor << setw(10) << promedioMayor << endl;
    cout << "Nota menor: " << setw(10) << alumnoPromedioMenor << setw(10) << promedioMenor << endl;
    cout << "Nota promedio : " << setw(10) << promedioGeneral << endl << endl;
    return promedioGeneral; // Devuelve el promedio general de la facultad
}
