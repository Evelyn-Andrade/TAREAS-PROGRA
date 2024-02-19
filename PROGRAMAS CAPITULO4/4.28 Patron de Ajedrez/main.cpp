// Ejercicio 4.28
//autor : Evelyn Andrade
#include <iostream>

using namespace std;

int main()

// Establecer el ciclo para generar el patrón de ajedrez con *
{
   for (int fila = 1; fila <= 8; fila++) {
        for (int columna = 2; columna <= 16; columna++) {
            if ((fila + columna) % 2 == 0) {
                cout << "* ";
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
