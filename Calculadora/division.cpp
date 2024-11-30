#include "division.h"
using namespace std;
#include <iostream>

division::division()
{
    Valor1 = 0;
    Valor2 = 0;
    resultado = 0;
};

void division::dividir() {

    cout << "Seleccionaste Division.\n";
    cout << "Introduce el primer numero: ";
    cin >> Valor1;
    cout << "Introduce el segundo numero: ";
    cin >> Valor2;

    if (Valor2 == 0) {
        cout << "Error: No se puede dividir entre cero.\n";
    }
    else {
        double resultado = Valor1 / Valor2;
        cout << "El resultado de la division es: " << resultado << "\n";
    }
}