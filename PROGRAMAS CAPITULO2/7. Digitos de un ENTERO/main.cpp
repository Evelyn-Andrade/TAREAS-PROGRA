#include <iostream>

using namespace std;

int main()
{
    // Declaraci�n de variables
    int numero, digito1, digito2, digito3, digito4, digito5;

    // Solicitar al usuario que ingrese un n�mero de cinco d�gitos
    cout << "Ingrese un numero de CINCO digitos: ";
    cin >> numero;

    // Separar el n�mero en sus d�gitos individuales usando operadores de divisi�n entera y m�dulo
    digito5 = numero % 10;
    numero /= 10;
    digito4 = numero % 10;
    numero /= 10;
    digito3 = numero % 10;
    numero /= 10;
    digito2 = numero % 10;
    numero /= 10;
    digito1 = numero % 10;

    // Imprimir los d�gitos separados por tres espacios
    cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << endl;
    return 0;
}
