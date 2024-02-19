#include <iostream>
using namespace std;

int main() {
    unsigned int y = 1; // declara e inicializa y
    unsigned int x = 1; // declara e inicializa x
    unsigned int total = 0; // declara e inicializa el total

    while (x <= 10) { //itera 10 veces
        y = x * x; // realiza el cálculo
        cout << y << endl; // imprime el resultado
        total += y; // suma y al total
        ++x; // incrementa el contador x
    } // Fin de while

    cout << "El total es " << total << endl; // muestra el resultado

    return 0;
}



