//Captura de texto y variables numericas por teclado e impresion
//de dichas variables
#include<iostream>
#include<string>
int main()
{
	int e,No;
	std::string nombre;
	//Captura de datos
	std::cout <<" Escribe tu nombre: ";
	std::getline(std::cin,nombre);
//	std::cin >> nombre;
	std::cout <<" Ingresa tu edad: ";
	std::cin >>e;
	std::cout <<" Escribe tu matricula: ";
	std::cin >>No;
	// Impresion de datos
	std::cout <<" Nombre: "<<nombre <<std::endl;
	std::cout <<" Edad: "<<e <<"\n";
	std::cout <<" Numero de matricula: "<<No <<std::endl;
	return 0;	
}