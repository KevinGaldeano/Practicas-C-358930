//El operador condicional
#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout <<"Escriba un numero : ";
	cin >>x;
	cout <<"Escriba otro : ";
	cin >>y;
	z=(x,y) ? x : y;
	cout <<"El mayor es = "<<z <<endl;
	return 0;
}