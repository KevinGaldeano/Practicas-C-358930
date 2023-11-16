//Practica 15 Manejo de archivos
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream archivo("prueba1.txt"); //Ofstream es igual a W
	archivo <<"Esta es una línea" <<endl;
	archivo <<"Esta es otra" <<endl;
	archivo <<"Y esta es despues de la anterior " <<endl;
	archivo.close();
	return 0;
}