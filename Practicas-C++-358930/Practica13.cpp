//Practica 13 manejo de cadenas de texto
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string texto1, texto2,texto3, texto4,texto5;
	cout <<"Escribe tu nombre : ";
	cin >>texto1;
	cout <<"Escribe tu apellido : ";
	cin >>texto2;
	texto3=texto1+ " "+texto2;
	cout <<"Tu nombre es : " <<texto3 <<endl;
	texto4.assign(texto1);
	texto4.append(" ");
	texto4.append(texto2);
	cout <<"O tambien : " <<texto4 <<endl;
	cout <<"Los caracteres almacenados en texto 3 son : " <<texto3.length() <<endl;
	texto5=texto3.substr(0,4); //Subcadena de texto
	cout <<"Y las primeras 4 letras son : " <<texto5<<endl;
	cout <<"Tu primera letra de nombre es : " <<texto3[0] <<endl;
	cout <<"La segunda letra capturada es . " <<texto3.at(1) <<endl;
	if(texto3.compare(texto5)==0)
		cout <<"Son iguales" <<endl;
	else
		cout <<"No son iguales" <<endl;
	return 0;
}