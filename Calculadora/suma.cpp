#include "suma.h"
#include <iostream>
using namespace std;

/* Este es el ejemplo del cpp
 si no saben como crear este archivo y el .h
 En Visual Studio 2022
 pulsar sobre proyecto, luego pulsar en agregar clase
 das un nombre a tu clase y listo

 En este archivo cpp se agrega la definicion de nuestro constructor
 y funcion o funciones

 */

	suma :: suma()
	{
		Valor1 = 0;
		Valor2 = 0;
		resultado = 0;
	};

	void  suma :: funcion()
	{
		cout << "Ingresa el primer valor: ";
		cin >> Valor1;
		cout << "Ingresa el segundo valor: ";
		cin >> Valor2;

		resultado = Valor1 + Valor2;

		cout << "Este es el resultado: " << resultado << endl;
	
	};