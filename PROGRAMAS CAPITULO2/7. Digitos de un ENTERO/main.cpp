#include <iostream>

using namespace std;

int main()
{
    // Declaración de variables
    int numero, digito1, digito2, digito3, digito4, digito5;

    // Solicitar al usuario que ingrese un número de cinco dígitos
    cout << "Ingrese un numero de CINCO digitos: ";
    cin >> numero;

    // Separar el número en sus dígitos individuales usando operadores de división entera y módulo
    digito5 = numero % 10;
    numero /= 10;
    digito4 = numero % 10;
    numero /= 10;
    digito3 = numero % 10;
    numero /= 10;
    digito2 = numero % 10;
    numero /= 10;
    digito1 = numero % 10;

    // Imprimir los dígitos separados por tres espacios
    cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << endl;
    return 0;
}
