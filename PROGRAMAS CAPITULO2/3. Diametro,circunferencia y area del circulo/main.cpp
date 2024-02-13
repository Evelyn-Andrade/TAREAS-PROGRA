#include <iostream>

using namespace std;

int main()
{
    // Declaración de variables
    int radio;

    // Solicitar al usuario que ingrese el RADIO del círculo valores enteros
    cout << "Ingrese el radio del circulo (entero): ";
    cin >> radio;

    // Calcular el diámetro, la circunferencia y el área del círculo
    int diametro = 2 * radio;
    float circunferencia = 2 * 3.14159 * radio;
    float area = 3.14159 * radio * radio;

    // Mostrar los resultados
    cout << "DIAMETRO del circulo: " << diametro << endl;
    cout << "Circunferencia del circulo: " << circunferencia << endl;
    cout << "AREA del circulo: " << area << endl;
    return 0;
}
