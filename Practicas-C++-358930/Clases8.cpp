#include <iostream>
using namespace std;
class Persona {
protected:
	char nombre[40];
	int edad;
public:
 void cargarDatosPersonales(); //La clase principal tiene 2 metodos
 void imprimirDatosPersonales();
};
class Empleado : public Persona {
private:
	char puesto[40];
	float sueldo;
public:
	void cargarSueldo();
	void imprimirSueldo();
};
void Persona::cargarDatosPersonales()
{
	cout <<"Ingrese nombre :";
	cin.getline(nombre,40);
	cout <<"Ingrese edad : ";
	cin >>edad;
	cin.ignore();
}
void Persona::imprimirDatosPersonales()
{
	cout <<"Nombre : "<<nombre<<"\n";
	cout <<"Edad : "<<edad<<"\n";
}
void Empleado::cargarSueldo()
{
	cout<<"Ingrese sueldo : ";
	cin>>sueldo;
	cin.ignore(); //cambia de lugar el cin.ignore
	cout <<"Ingrese el puesto : ";
	cin.getline(puesto,40);
}
void Empleado::imprimirSueldo()
{
	cout<<"Sueldo : " <<sueldo<<"\n";
	cout<<"El puesto es : "<<puesto<<"\n";
}
int main()
{
	Persona persona1;
	persona1.cargarDatosPersonales();
	persona1.imprimirDatosPersonales();
	
	Empleado empleado1;
	empleado1.cargarDatosPersonales();
	empleado1.cargarSueldo();
	empleado1.imprimirDatosPersonales();
	empleado1.imprimirSueldo();
	return 0;
	
}