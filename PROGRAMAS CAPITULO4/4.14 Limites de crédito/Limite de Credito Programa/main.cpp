//Limite de Credito 4.14
//Programa en C++
//Programa de Evelyn Andrade
#include <iostream>
using namespace std;

int main() {
    int cuenta;
    double saldoInicial, cargosTotales, creditosTotales, limiteCredito, nuevoSaldo;

//Introducir # de cuenta o -1 para salir del programa
    cout << "Introduzca el numero de cuenta (o -1 para salir): ";
    cin >> cuenta;

// Pide ingresar los datos a los clientes
    while (cuenta != -1) {
        cout << "Introduzca el Saldo Inicial: ";
        cin >> saldoInicial;

        cout << "Introduzca los Cargos Totales: ";
        cin >> cargosTotales;

        cout << "Introduzca los Creditos Totales: ";
        cin >> creditosTotales;

        cout << "Introduzca el Limite de Credito: ";
        cin >> limiteCredito;

// Formula
        nuevoSaldo = saldoInicial + cargosTotales - creditosTotales;

// Condición e Impresion de Resultados

        if (nuevoSaldo > limiteCredito) {
            cout << "El nuevo saldo es " << nuevoSaldo << endl;
            cout << "Cuenta: " << cuenta << endl;
            cout << "Limite de credito: " << limiteCredito << endl;
            cout << "Saldo: " << nuevoSaldo << endl;
            cout << "Se excedio el limite de su credito." << endl;
        } else {
            cout << "El nuevo saldo es " << nuevoSaldo << endl;
        }

        cout << "Introduzca el numero de cuenta (o -1 para salir): ";
        cin >> cuenta;
    }

    return 0;
}
