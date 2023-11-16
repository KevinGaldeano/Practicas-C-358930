//Practica 14 Registros anidados (Structs)
#include <iostream>
#include <string>
using namespace std;
struct fechaNacimiento
{
	int dia;
	int mes;
	int anio;
};
struct datosPersona
{
	string nombre;
	char inicial;
	struct fechaNacimiento diaDeNacimiento;
	float calif;
};
int main()
{
	datosPersona persona;
	persona.nombre="Kevin";
	persona.inicial='L';
	cout <<"Ingresa tu dia de nacimiento : ";
	cin >>persona.diaDeNacimiento.dia;
	cout <<"Ahora ingresa tu anio de nacimiento : ";
	cin >>persona.diaDeNacimiento.anio;
	persona.diaDeNacimiento.mes=8;
	persona.calif=7.5;
	system("cls");
	cout <<"Tu dia de nacimiento es : " <<persona.diaDeNacimiento.dia <<endl;
	cout <<"Tu anio de nacimiento es : " <<persona.diaDeNacimiento.anio <<endl;
	return 0;
	//Tarea capturar dia y anio de nacimiento y que lo imprima
}