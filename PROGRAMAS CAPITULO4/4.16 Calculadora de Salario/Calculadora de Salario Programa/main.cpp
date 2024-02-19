#include <iostream>

// Ejercicio 4.16 programa
// Calculadora de Salario
// Evelyn Andrade
using namespace std;

int main()
{
    // definir variables tipo float
     float horasTrabajadas, tarifaPorHora, salarioBruto;

    cout << "Introduzca las horas trabajadas (-1 para salir): ";
    cin >> horasTrabajadas;

    while (horasTrabajadas != -1) {
        cout << "Introduzca la tarifa por horas del empleado (Q 00.00): ";
        cin >> tarifaPorHora;

        if (horasTrabajadas <= 40) {
            salarioBruto = horasTrabajadas * tarifaPorHora;
        } else {
            salarioBruto = (40 * tarifaPorHora) + ((horasTrabajadas - 40) * (tarifaPorHora * 1.5));
        }

        cout << "El salario es Q" << salarioBruto << endl;

        cout << "Introduzca las horas trabajadas (-1 para salir): ";
        cin >> horasTrabajadas;
    }
    return 0;
}
