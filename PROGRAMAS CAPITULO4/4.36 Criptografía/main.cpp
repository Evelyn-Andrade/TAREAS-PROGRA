// Ejercicio 4.36
// autor Evelyn Andrade
#include <iostream>

using namespace std;

// Funci�n para cifrar un n�mero de cuatro d�gitos
int cifrar(int numero) {
    // Extraer los d�gitos
    int digito1 = numero / 1000;
    int digito2 = (numero / 100) % 10;
    int digito3 = (numero / 10) % 10;
    int digito4 = numero % 10;

    // Sumar 7 a cada d�gito y obtener el residuo despu�s de dividir por 10
    digito1 = (digito1 + 7) % 10;
    digito2 = (digito2 + 7) % 10;
    digito3 = (digito3 + 7) % 10;
    digito4 = (digito4 + 7) % 10;

    // Intercambiar los d�gitos 1 y 3, y los d�gitos 2 y 4
    int cifrado = digito3 * 1000 + digito4 * 100 + digito1 * 10 + digito2;

    return cifrado;
}

// Funci�n para descifrar un n�mero de cuatro d�gitos cifrado
int descifrar(int cifrado) {
    // Extraer los d�gitos
    int digito1 = cifrado / 1000;
    int digito2 = (cifrado / 100) % 10;
    int digito3 = (cifrado / 10) % 10;
    int digito4 = cifrado % 10;

    // Intercambiar los d�gitos 1 y 3, y los d�gitos 2 y 4
    int numero = digito3 * 1000 + digito4 * 100 + digito1 * 10 + digito2;

    // Restar 7 a cada d�gito y obtener el residuo despu�s de dividir por 10
    digito1 = (digito1 + 3) % 10;
    digito2 = (digito2 + 3) % 10;
    digito3 = (digito3 + 3) % 10;
    digito4 = (digito4 + 3) % 10;

    // Descifrar el n�mero original
    numero = digito1 * 1000 + digito2 * 100 + digito3 * 10 + digito4;

    return numero;
}

int main() {
    int numero;
    cout << "Ingrese un numero de cuatro digitos: ";
    cin >> numero;

    // Cifrar el n�mero
    int cifrado = cifrar(numero);
    cout << "Numero cifrado: " << cifrado << endl;

    // Descifrar el n�mero cifrado
    int descifrado = descifrar(cifrado);
    cout << "Numero descifrado: " << descifrado << endl;

    return 0;
}
