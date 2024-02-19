#include <iostream>

using namespace std;

int main()
{
    int resultado;

    cout << "Introduzca el resultado del examen (1 = Aprobado, 2 = Reprobado): ";
    cin >> resultado;

    while (resultado != 1 && resultado != 2) {
        cout << "Valor incorrecto. Introduzca el resultado del examen (1 = Aprobado, 2 = Reprobado): ";
        cin >> resultado;
    }

    if (resultado == 1) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }
    return 0;
}
