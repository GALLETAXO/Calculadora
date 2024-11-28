
#include <iostream>
#include <cmath> // Para la función pow()

using namespace std;

void mostrarMenu() {
    cout << "=============================\n";
    cout << "       Calculadora\n";
    cout << "=============================\n";
    cout << "1. Elevar un número a una potencia\n";
    cout << "2. Salir\n";
    cout << "Selecciona una opción: ";
}

void calcularPotencia() {
    double base, exponente, resultado;
    
    cout << "\nIngresa la base: ";
    cin >> base;

    cout << "Ingresa el exponente: ";
    cin >> exponente;

    // Calcular potencia
    resultado = pow(base, exponente);

    cout << "\nEl resultado de " << base << "^" << exponente << " es: " << resultado << endl;
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                calcularPotencia();
                break;
            case 2:
                cout << "\nSaliendo del programa. ¡Adiós!\n";
                break;
            default:
                cout << "\nOpción no válida. Intenta de nuevo.\n";
        }

        cout << endl; // Espacio entre ejecuciones del menú
    } while (opcion != 2);

    return 0;
}
