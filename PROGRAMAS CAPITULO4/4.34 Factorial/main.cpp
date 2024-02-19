// Ejercicio 4.34
// Autor Evelyn Andrade
#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    return result;
}

int main() {
    int opcion;
    bool continuar = true;

// Seleccionar que opcion queremos

    while (continuar) {
        cout << "Seleccione una opcion:\n1. Calcular el factorial de un entero no negativo.\n2. Estimar el valor de la constante matematica e.\n3. Calcular el valor de e^x.\n4. Salir.\n";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n;
                int factorial = 1;

                cout << "Ingrese un entero no negativo: ";
                cin >> n;

                if (n < 0) {
                    cout << "El numero debe ser no negativo." << endl;
                    return 1;
                }

                while (n > 0) {
                    factorial *= n;
                    n--;
                }

                cout << "El factorial es: " << factorial << endl;
                break;
            }
            case 2: {
                int precision;
                double e = 1;

                cout << "Ingrese la precision deseada de e (numero de terminos en la suma): ";
                cin >> precision;

                if (precision < 1) {
                    cout << "La precision debe ser al menos 1." << endl;
                    return 1;
                }

                for (int i = 1; i <= precision; i++) {
                    e += 1.0 / factorial(i);
                }

                cout << "El valor estimado de e es: " << e << endl;
                break;
            }
            case 3: {
                int precision;
                double x;
                double e_x = 1;

                cout << "Ingrese el valor de x: ";
                cin >> x;

                cout << "Ingrese la precision deseada de e^x (numero de terminos en la suma): ";
                cin >> precision;

                if (precision < 1) {
                    cout << "La precision debe ser al menos 1." << endl;
                    return 1;
                }

                for (int i = 1; i <= precision; i++) {
                    e_x += pow(x, i) / factorial(i);
                }

                cout << "El valor estimado de e^x es: " << e_x << endl;
                break;
            }
            case 4:
                continuar = false;
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }
    }

    return 0;
}
