#include <iostream>
#include <string>
using namespace std;

// crear la clase empleado
class Empleado {
private:
    string primerNombre;
    string apellidoPaterno;
    int salarioMensual;

public:
    // Constructor que inicia los datos miembros
    Empleado(string nombre, string apellido, int salario) {
        primerNombre = nombre;
        apellidoPaterno = apellido;
        // Verificamos si el salario es positivo
        salarioMensual = (salario > 0) ? salario : 0;
    }

    // Métodos para establecer y obtener información
    void establecerNombre(string nombre) {
        primerNombre = nombre;
    }

    string obtenerNombre() const {
        return primerNombre;
    }

    void establecerApellido(string apellido) {
        apellidoPaterno = apellido;
    }

    string obtenerApellido() const {
        return apellidoPaterno;
    }

    void establecerSalario(int salario) {
        // Verificamos si el salario es positivo
        salarioMensual = (salario > 0) ? salario : 0;
    }

    int obtenerSalario() const {
        return salarioMensual;
    }

    // Función para calcular salario anual
    int calcularSalarioAnual() const {
        return salarioMensual * 12;
    }

    // Función para aplicar aumento de salario
    void aplicarAumentoSalario(float aumentoPorcentaje) {
        salarioMensual += static_cast<int>(salarioMensual * (aumentoPorcentaje / 100));
    }
};

int main() {
    // Aqui creamos los objetos Empleado
    Empleado empleado1("Marlon", "Barrientos", 3000);
    Empleado empleado2("Sofia", "Andrade", 800);

    // Mostrar salario anual de cada empleado en quetzales (Q)
    cout << "Salario anual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido() << ": Q" << empleado1.calcularSalarioAnual() << endl;
    cout << "Salario anual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido() << ": Q" << empleado2.calcularSalarioAnual() << endl;

    // Aplicar aumento del 10% al salario de cada empleado
    empleado1.aplicarAumentoSalario(10);
    empleado2.aplicarAumentoSalario(10);

    // Mostrar salario anual DESPUES del aumento en quetzales (Q)
    cout << "\nDespues del aumento del 10%:\n";
    cout << "Salario anual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido() << ": Q" << empleado1.calcularSalarioAnual() << endl;
    cout << "Salario anual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido() << ": Q" << empleado2.calcularSalarioAnual() << endl;

    return 0;
}

