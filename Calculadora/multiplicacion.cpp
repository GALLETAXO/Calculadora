#include "multiplicacion.h"
using namespace std;
#include <iostream>

multiplicacion::multiplicacion()
{
    Valor1 = 0;
    Valor2 = 0;
    resultado = 0;
};

void multiplicacion :: multiplicar() {
    
    cout << "Seleccionaste Multiplicacion.\n";
    cout << "Introduce el primer numero: ";
    cin >> Valor1;
    cout << "Introduce el segundo numero: ";
    cin >> Valor2;

    double resultado = Valor1 * Valor2;
    cout << "El resultado de la multiplicacion es: " << resultado << "\n";
}