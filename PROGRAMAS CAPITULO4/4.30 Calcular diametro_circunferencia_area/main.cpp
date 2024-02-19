// ejercicio 4.30
// autor Evelyn Andrade
#include <iostream>

using namespace std;

int main()
{
//declarar las variables tipo double
     double radio;
    const double PI = 3.14159;

    cout << "Ingrese el RADIO del circulo: ";
    cin >> radio;

//aplicando formulas para calcular el diametro, circunferencia y area de un circulo
    double diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * radio * radio;

//Mostrar resultados
    cout << "Diametro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Area: " << area << endl;
    return 0;
}
