// ejercicio 4.32
//autor: Evelyn Andrade
#include <iostream>

using namespace std;

int main()
{
// solicitar valores de los tres lados
    double lado1, lado2, lado3;

    cout << "Ingrese el primer lado del Triangulo: ";
    cin >> lado1;

    cout << "Ingrese el segundo lado del Triangulo: ";
    cin >> lado2;

    cout << "Ingrese el tercer lado del Triangulo: ";
    cin >> lado3;

// determina si podría o no representar los lados de un triangulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        cout << "Estos valores podrian representar los lados de un triangulo." << endl;
    } else {
        cout << "Estos valores no podrian representar los lados de un triangulo." << endl;
    }
    return 0;
}
