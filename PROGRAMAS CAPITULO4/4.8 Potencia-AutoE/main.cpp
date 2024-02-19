// Solución ejercicio 4.8 Autoevaluación
// Evelyn Andrade
#include <iostream>

using namespace std;
// Eleva x a la y potencia
int main()
{
    // declarar tipo entero
    int x, y, potencia = 1;

// Pedir ingresar valores
    std::cout << "Ingrese el valor de X: ";
    std::cin >> x;

    std::cout << "Ingrese el valor de y: ";
    std::cin >> y;

    unsigned int i = 1;
    while (i <= y) {
        potencia *= x;
        i++;
    }
//Mostrar resultados
    std::cout << "El resultado de " << x << " elevado a la " << y << " potencia es: " << potencia << std::endl;
    return 0;
}
