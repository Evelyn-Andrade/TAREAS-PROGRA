#include <iostream>

using namespace std;

int main()
{
    // Declaramos variables
    float num1, num2;

    // Solicitar al Usuario ingresar los números
    cout << "Ingrese el PRIMER valor :";
    cin >> num1;
    cout << "Ingrese el SEGUNDO valor :";
    cin >> num2;

    // Calcular la Suma, Producto, Diferencia y Cociente
    float suma = num1 + num2;
    float producto = num1 * num2;
    float diferencia = num1 - num2;
    float cociente = num1 / num2;

    // Imprimir los resultados
    cout << "Suma: " << suma << endl;
    cout << "Producto: " << producto << endl;
    cout << "Diferencia: " << diferencia << endl;
    cout << "Cociente: " << cociente << endl;

    return 0;
}
