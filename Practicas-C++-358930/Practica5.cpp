//Codigo que pida un numero mayor que 100 y menor que 1000
//e imprima las centenas, las decenas y las unidades
//eje 453 va a imprimir 4 centenas, 5 decenas y 3 unidades
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	int y,z;
	cout <<" Ingresa un numero mayor que 100 y menor que 1000: ";
	cin >>x;
	if(x>=100 && x<=1000)
	{
		y=x%100;
		cout<<"Centenas" <<y <<endl;
	}
	else
	cout <<x <<endl;
}