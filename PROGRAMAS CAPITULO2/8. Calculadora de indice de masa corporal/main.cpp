#include <iostream>

using namespace std;

int main()
{
    // Declaración de variables
    double peso_kg, altura_metros, bmi;

    // Solicitar al usuario que ingrese su peso en kilogramos y su altura en metros
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso_kg;
    cout << "Ingrese su altura en metros: ";
    cin >> altura_metros;

    // Calcular el BMI usando la fórmula dada
    bmi = peso_kg / (altura_metros * altura_metros);

    // Mostrar el índice de masa corporal del usuario
    cout << "Su Indice de masa corporal (BMI) es: " << bmi << endl;

    // Determinar en qué categoría se encuentra el usuario y mostrar un mensaje que diga donde esta
    cout << "VALORES DE BMI" << endl;
    if (bmi < 18.5) {
        cout << "Bajo peso: menos de 18.5" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal: entre 18.5 y 24.9" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Sobrepeso: entre 25 y 29.9" << endl;
    } else {
        cout << "Obeso: 30 o mas" << endl;
    }

    cout << "\nInformacion del BMI segun el Departamento de Salud y Servicios Humanos/Instituto Nacional de Salud:\n";
    cout << "\n";
    cout << "BMI                Clasificacion\n";
    cout << "\n";
    cout << "Menos de 18.5      Bajo peso\n";
    cout << "18.5 - 24.9        Peso normal\n";
    cout << "25.0 - 29.9        Sobrepeso\n";
    cout << "30.0 o mas         Obesidad\n";
    return 0;
}
