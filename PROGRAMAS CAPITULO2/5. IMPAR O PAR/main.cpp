#include <iostream>

using namespace std;

int main()
{
    // Declaraci�n de variables
    int numero;

    // Solicita al usuario que ingrese un n�mero entero
    cout << "Ingrese un NUMERO ENTERO: ";
    cin >> numero;

    // Determinar si el n�mero es IMPARr o PAR usando el operador m�dulo (%)
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es PAR." << endl;
    } else {
        cout << "El numero " << numero << " es IMPAR." << endl;
    }
    return 0;
}
