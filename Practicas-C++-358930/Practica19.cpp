//Calcular raiz cuadrada a un valor con una libreria
#include <iostream>
#include "Raiz.h"
using namespace std;
int main()
{
	int x;
	cout <<"Ingresa un numero : " <<endl;
	cin >>x;
	cout <<"Su raiz cuadrada es : " << Raiz(x) <<endl;
	cout <<"Su cuadrado es : " << C2(x) <<endl;
	return 0;
}