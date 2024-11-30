#include "potencia.h"
using namespace std;
#include <iostream>

potencia::potencia()
{
    base = 0;
    exponente = 0;
    resultado = 0;
};

void potencia::calcularPotencia() {


    cout << "\nIngresa la base: ";
    cin >> base;

    cout << "Ingresa el exponente: ";
    cin >> exponente;

    // Calcular potencia
    resultado = pow(base, exponente);

    cout << "\nEl resultado de " << base << "^" << exponente << " es: " << resultado << endl;

}
