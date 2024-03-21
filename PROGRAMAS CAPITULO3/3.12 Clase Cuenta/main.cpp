#include <iostream>
using namespace std;

// Definición de la clase Cuenta
class Cuenta {
private:
    int saldoOriginal;  // Saldo original de la cuenta
    int saldoActual;    // Saldo actual de la cuenta

public:
    // Constructor para inicializar el saldo de la cuenta
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            saldoOriginal = saldoInicial;
            saldoActual = saldoInicial;
        } else {
            saldoOriginal = 0;
            saldoActual = 0;
        }
    }

    // Función para agregar dinero al saldo de la cuenta
    void abonar(int monto) {
        saldoActual += monto;
        cout << "Se abonaron Q" << monto << " a la cuenta." << endl;
    }

    // Función para retirar dinero del saldo de la cuenta
    void cargar(int monto) {
        if (monto <= saldoActual) {
            saldoActual -= monto;
            cout << "Se cargo Q" << monto << " de la cuenta." << endl;
        } else {
            cout << "El monto a cargar excede el saldo de la cuenta." << endl;
            cout << "Saldo original de la cuenta: Q" << saldoOriginal << endl;
        }
    }

    // Función para obtener el saldo actual de la cuenta
    int obtenerSaldo() {
        return saldoActual;
    }

    // Función para obtener el saldo original de la cuenta
    int obtenerSaldoOriginal() {
        return saldoOriginal;
    }
};

int main() {
    cout << "Bienvenido" << endl;

    // aqui creo las cuentas
    Cuenta cuenta1(1000);  // Saldo inicial de Q1000
    Cuenta cuenta2(500);   // Saldo inicial de Q500

    // Operaciones en cuenta1
    cout << "\nCuenta 1:" << endl;
    cuenta1.abonar(500);   // Abonar Q500 a cuenta1

    // Operaciones en cuenta2
    cout << "\nCuenta 2:" << endl;
    cuenta2.cargar(200);  // Intentar retirar Q2000 de cuenta2 (operación inválida)

    // Mostrar saldos finales de las cuentas
    cout << "\nSaldos finales:" << endl;
    cout << "Saldo cuenta1: Q" << cuenta1.obtenerSaldo() << endl;
    cout << "Saldo cuenta2: Q" << cuenta2.obtenerSaldo() << endl;

    return 0;
}

