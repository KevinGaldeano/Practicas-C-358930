//Practica 17 manejo de archivos para agregar información a un archivo
//Mediante un while y que pida nombre y matricula,semestre alumno.txt
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int x=1, mt,sm;
	string nombre="Prueba1.txt";
	string name;
	ofstream archivo;
	archivo.open(nombre.c_str(),ios_base::app);
	while(x!=0)	
	{
		cout <<"Ingresa el nombre del alumno : "<<endl;
		getline(cin,name);	
		cout <<"Ahora ingresa la matricula : "<<endl;
		cin >>mt;
		cout <<"Ingresa en que semestre va : "<<endl;
		cin >>sm;
		archivo <<"-" <<name <<" " <<mt <<" de " <<sm <<" semestre" <<endl;
		cout <<"Pulsa 0 para salir o cualquier numero para continuar : ";
		cin >>x;
		system("cls");
		cin.ignore(); //Limpia la entrada del buffer
	}
	archivo.close();
	return 0;
}