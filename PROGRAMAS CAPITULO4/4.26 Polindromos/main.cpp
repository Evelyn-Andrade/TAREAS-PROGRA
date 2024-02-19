// ejercicio 4.26
// Evelyn Andrade
#include <iostream>
using namespace std;

int main() {

    //Declarar variables
    int numero;
    int digito1, digito2, digito4, digito5;

    //Solicitar el numero
    cout << "Ingrese un numero de cinco digitos: ";
    cin >> numero;

    digito1 = numero / 10000;
    digito2 = (numero % 10000) / 1000;
    digito4 = (numero % 100) / 10;
    digito5 = numero % 10;

// condicion si es o no Palíndromo
    if (digito1 == digito5 && digito2 == digito4) {
        cout << "El numero " << numero << " es un palindromo." << endl;
    } else {
        cout << "El numero " << numero << " no es un palindromo." << endl;
    }

    return 0;
}
