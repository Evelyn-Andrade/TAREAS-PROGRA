#include <iostream>

using namespace std;

int main()
{
    // Declaración de variables
    int num1, num2;

    // Solicitar al usuario que ingrese dos números ENTEROS
    cout << "Ingrese el PRIMER numero entero: ";
    cin >> num1;
    cout << "Ingrese el SEGUNDO numero entero: ";
    cin >> num2;

    // Comparar los números y que se muestre el más grande o indicar si son iguales
    if (num1 > num2) {
        cout << num1 << " es mas GRANDE" << endl;
    } else if (num2 > num1) {
        cout << num2 << " es mas GRANDE" << endl;
    } else {
        cout << "Estos numeros son IGUALES" << endl;
    }

    return 0;
}
