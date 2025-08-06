// Ejemplo5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


/*
 * Universidad de El Salvador (UES)
 * Facultad de Ingeniería y Arquitectura (FIA)
 * Escuela de Ingeniería de Sistemas Informaticos (EISI)
 * Estructuras de Datos (ESD)
 * Ciclo 02-2025
 *
 * Ejemplo 1: Paso de parámetros por valor
 * Realizado en: Lenguaje de Programación C++
 *
 * Praticado por: NixieNixi
 * Fecha: 05/08/2025
 *
 * Descripción: Demuestra cómo los parámetros pasados por valor
 * pueden modificarse dentro de una función sin afectar la variable original.
 */

#include <iostream>
using namespace std;
void DemoLocal(int valor)
{
	cout << "Dentro de DemoLocal, n = " << valor << endl;
	valor = 75;
	cout << "Dentro de DemoLocal, valor = " << valor << endl;
}

int main()
{
   // std::cout << "Hello World!\n";
	int n = 10;
	cout << "Antes de llamar a DemoLocal, n = " << n << endl;
	DemoLocal(n);
	cout << "Después de llamar a DemoLocal, n = " << n << endl;
	cout << "Pulse intro para continuar ";
	cin.get();
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
