#include <iostream>

using namespace std;

int main()
{
    // Declaraci�n de variables
    int num1, num2;

    // Solicitar al usuario que ingrese dos n�meros ENTEROS
    cout << "Ingrese el PRIMER numero entero: ";
    cin >> num1;
    cout << "Ingrese el SEGUNDO numero entero: ";
    cin >> num2;

    // Comparar los n�meros y que se muestre el m�s grande o indicar si son iguales
    if (num1 > num2) {
        cout << num1 << " es mas GRANDE" << endl;
    } else if (num2 > num1) {
        cout << num2 << " es mas GRANDE" << endl;
    } else {
        cout << "Estos numeros son IGUALES" << endl;
    }

    return 0;
}
