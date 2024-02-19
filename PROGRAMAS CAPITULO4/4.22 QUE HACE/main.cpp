// Ejercicio 4.22: e104_22.cpp
// ¿Qué es lo que imprime este programa?
#include <iostream>
using namespace std;

int main()
 {
unsigned int fila = 10; // inicializa fila
while (fila >= 1) // itera hasta que fila < 1
 {
unsigned int columna =  1; // establece columna a 1 cuando empieza la iteración

while (columna <= 10) // itera 10 vecess
{
cout << (fila % 2 ? "<" : ">" ); // salida
++columna; // incrementa columna
} // fin de while interior
--fila; // decrementa fila
cout << endl; // empieza nueva linea de salida
} // fin de while exterior
} // fin de main
