//Practica 16
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string nombre="Prueba1.txt";
	ofstream archivo;
	archivo.open(nombre.c_str(),ios_base::app);
	archivo <<" Nueva línea que se adjunta al final cada que se ejecuta\n";
	archivo.close();
	return 0;
}