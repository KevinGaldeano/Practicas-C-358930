#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	int w;
	cout <<"Escriba un numero : ";
	cin >>x;
	cout <<"Escriba otro : ";
	cin >>y;
	cout <<"Escriba una operacion(1 = Resta; otro = Suma): ";
	cin >>z;
	w= (z==1) ? x-y : x+y;
	cout <<"El resultado es " <<w;
	return 0;
}