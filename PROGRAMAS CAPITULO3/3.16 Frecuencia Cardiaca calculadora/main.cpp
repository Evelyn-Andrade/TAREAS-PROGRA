#include <iostream>
#include <string>
#include <ctime>  // Para obtener la fecha actual
using namespace std;

class FrecuenciasCardiacas {
private:
    string primerNombre;
    string apellido;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;

public:
    // Constructor
    FrecuenciasCardiacas(string nombre, string apellido, int dia, int mes, int anio) {
        primerNombre = nombre;
        this->apellido = apellido;
        diaNacimiento = dia;
        mesNacimiento = mes;
        anioNacimiento = anio; // coloque (anio) porque año no me deja me da error
    }

    // Función para obtener la edad
    int obtenerEdad() {
        time_t now = time(0);  // Obtener la fecha actual
        tm* localtm = localtime(&now);
        int anioActual = 1900 + localtm->tm_year;

        int edad = anioActual - anioNacimiento;
        return edad;
    }

    // Función para obtener la frecuencia cardíaca máxima
    int obtenerFrecuenciaCardiacaMaxima() {
        int edad = obtenerEdad();
        return 220 - edad;
    }

    // Función para obtener el rango de frecuencia cardíaca esperada
    pair<int, int> obtenerFrecuenciaCardiacaEsperada() {
        int frecuenciaMaxima = obtenerFrecuenciaCardiacaMaxima();
        int minimo = frecuenciaMaxima * 0.5;
        int maximo = frecuenciaMaxima * 0.85;
        return make_pair(minimo, maximo);
    }

    // Funciones obtener para los atributos
    string obtenerPrimerNombre() {
        return primerNombre;
    }

    string obtenerApellido() {
        return apellido;
    }

    int obtenerDiaNacimiento() {
        return diaNacimiento;
    }

    int obtenerMesNacimiento() {
        return mesNacimiento;
    }

    int obtenerAnioNacimiento() {
        return anioNacimiento;
    }
};

int main() {
    string nombre, apellido;
    int dia, mes, anio;

    cout << "Ingrese el primer nombre: ";
    cin >> nombre;
    cout << "Ingrese el apellido: ";
    cin >> apellido;
    cout << "Ingrese el dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese el mes de nacimiento (en numeros 00): ";
    cin >> mes;
    cout << "Ingrese YEAR de nacimiento (0000): "; // coloque "YEAR" en vez de año porque al momento de imprimir no me sale la ñ
    cin >> anio;

    FrecuenciasCardiacas persona(nombre, apellido, dia, mes, anio);

    cout << "\nInformacion de la persona:" << endl;
    cout << "Nombre: " << persona.obtenerPrimerNombre() << " " << persona.obtenerApellido() << endl;
    cout << "Fecha de Nacimiento: " << persona.obtenerDiaNacimiento() << "/" << persona.obtenerMesNacimiento() << "/" << persona.obtenerAnioNacimiento() << endl;

    cout << "\nCalculos:" << endl;
    cout << "Edad: " << persona.obtenerEdad() << " years old" << endl; // "years old" coloque porque no me deja poner (años)
    cout << "Frecuencia Cardiaca Maxima: " << persona.obtenerFrecuenciaCardiacaMaxima() << " bpm" << endl;

    auto rango = persona.obtenerFrecuenciaCardiacaEsperada();
    cout << "Rango de Frecuencia Cardiaca Esperada: " << rango.first << " - " << rango.second << " bpm" << endl;

    return 0;
}
