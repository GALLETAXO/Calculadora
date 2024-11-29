#include "resta.h"
#include <iostream>
using namespace std;

resta::resta() {
    Valor1 = 0;
    Valor2 = 0;
    resultado = 0;
}

void resta::funcion() { // Aquí usamos el nombre correcto de la clase
    cout << "Ingresa el primer valor: ";
    cin >> Valor1;
    cout << "Ingresa el segundo valor: ";
    cin >> Valor2;

    resultado = Valor1 - Valor2; // Realiza la resta
    cout << "Este es el resultado de la resta: " << resultado << endl;
}
