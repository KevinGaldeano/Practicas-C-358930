//Calculadora de Kevin Galdeano
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int z;
	float num1,num2;
	cout <<"Cual operacion quieres realizar?" <<endl;
	cout <<"1= Suma" <<endl;
	cout <<"2= Resta" <<endl;
	cout <<"3= Multiplicacion" <<endl;
	cout <<"4= division" <<endl;
	cin >>z;
	system("cls");
	switch(z)
	{
		case 1:
		//Suma
		{
			cout <<"Ingresa el valor 1" <<endl;
			cin >>num1;
			cout <<"Ingresa el valor 2" <<endl;
			cin >>num2;
			cout <<"La suma es : " <<num1+num2 << endl;
			break;
		}
		case 2:
		//Resta
		{
			cout <<"Ingresa el valor 1" <<endl;
			cin >>num1;
			cout <<"Ingresa el valor 2" <<endl;
			cin >>num2;
			cout <<"La resta es : " <<num1-num2 <<endl;
			break;
		}
		case 3:
		//Multiplicacion
		{
			cout <<"Ingresa el valor 1" <<endl;
			cin >>num1;
			cout <<"Ingresa el valor 2" <<endl;
			cin >>num2;
			cout <<"La multiplicacion es : " <<num1*num2 <<endl;
			break;
		}
		case 4:
		//Division
		{
			cout <<"Ingresa el valor 1" <<endl;
			cin >>num1;
			cout <<"Ingresa el valor 2" <<endl;
			cin >>num2;
			if(num2==0)
			{
		    	cout <<"La division sobre cero matematicamente no existe" <<endl;				
			}
			else
			cout <<"La division es : " <<num1/num2 <<endl;
			break;
		}
	}
	return 0;
}