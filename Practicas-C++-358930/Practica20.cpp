#include <iostream>
#include <cmath>
#include "cuadratica.h"
using namespace std;
int main()
{
	int y=1;
	cout <<"Ingresa el valor a : ";
	cin>>a;
	cout <<"Ingresa el valor b : ";
	cin>>b;
	cout <<"Ingresa el valor c : ";
	cin>>c;
	m=pow(b,2)-(4*a*c);
	cout <<"El discriminante es : "<<m<<endl;
	if(m>=0)
	{
	cout <<"La primer raiz es : " <<positiva(y) <<endl;
	cout <<"La segunda raiz es : " <<negativa(y);		
	}
	else
	{
	cout <<"La primer raiz es : " <<positiva(y)<<" + "<<sqrt(m)/(2*a)<<"i" <<endl;
	cout <<"La segunda raiz es : " <<negativa(y)<<" - "<<sqrt(m)/(2*a)<<"i";
	}
	return 0;
}