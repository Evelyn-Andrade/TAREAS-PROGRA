#include <iostream>

using namespace std;

int main()
{
    // Declaración de variables
    int numero;

    // Solicita al usuario que ingrese un número entero
    cout << "Ingrese un NUMERO ENTERO: ";
    cin >> numero;

    // Determinar si el número es IMPARr o PAR usando el operador módulo (%)
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es PAR." << endl;
    } else {
        cout << "El numero " << numero << " es IMPAR." << endl;
    }
    return 0;
}
