// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
// Aqui pueden agregar las clases de cada funcion de la calculadora
#include "ejemplo.h" // un ejemplo de como incluir la clase
#include "resta.h"
#include "suma.h" 
#include "multiplicacion.h" 
#include "division.h" 
#include "potencia.h" 


using namespace std; // necesario para no tener que escribir std :: antes de cada cin o cout

int main()
{
	int opcion = 0;
	// crear los objetos de las clases
	ejemplo EjObjeto; // ejemplo de como crear el objeto
	resta RestaObj;
	suma SumaObj;
	multiplicacion MultiObj;
	division DivObj;
	potencia PotenciaObj;

	cout << "Bienvenido a la calculadora!!!\n";

	do
	{
		cout << "\n Selecciona una opcion:\n 1. Suma. \n 2. Resta. \n 3. Multiplicacion. \n 4. Division. \n 5. Elevar a una potencia. \n 6. Salir. \n";
		cin >> opcion;

		switch (opcion)
		{

		case 1: // suma
		{
			SumaObj.funcion();
			break;
		}

		case 2: // resta
		{
			cout << "Seleccionaste Resta.\n \n";
			RestaObj.funcion();
			break;
		}

		case 3: // multiplicacion
		{
			cout << "Seleccionaste Resta.\n \n";
			MultiObj.multiplicar();
			break;
		}

		case 4: // division
		{
			DivObj.dividir();
			break;
		}
		case 5: // elevar a potencia
		{
			PotenciaObj.calcularPotencia();
			break;
		}
		case 6: // Salir
		{
			cout << "Seleccionaste Salir.\n Adios...";
			break;
		}
		case 7: // ejemplo
		{
			cout << "Seleccionaste Ejemplo.\n \n";
			RestaObj.funcion();
			break;
		}
		default:
			cout << "Opcion incorrecta !!! intentalo de nuevo \n";
			break;
		}


	} while (opcion != 6);

	return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
