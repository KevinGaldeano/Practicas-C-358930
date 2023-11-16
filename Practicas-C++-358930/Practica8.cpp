#include <iostream>
//Practica 8
using namespace std;
int main()
{
	int a=2;
	int b=2;
	a = a+1;
	printf("El resultado de estos incrementos / decrementos es : %d\n",a);
	a++;
	a--;
	printf("El resultado de estos incrementos / decrementos es : %d\n",a);
	b = a++;
	printf("El resultado de esta asignacion e incremento es : a=%d y b=%d\n",a,b);
	b= ++a;
	printf("El resultado de esta asignacion e incremento es : a=%d y b=%d\n",a,b);	
	printf("Antes de la ultima operacion : a=%d y b=%d\n",a,b);
	a += b;
	printf("El resultado de esta asignacion e incremento es : a=%d y b=%d\n",a,b);
	a -= b;
	printf("El resultado de esta asignacion e incremento es : a=%d y b=%d\n",a,b);
	a *= b;
	printf("El resultado de esta asignacion e incremento es : a=%d y b=%d\n",a,b);
	a /= b;
	printf("El resultado de esta asignacion e incremento es : a=%d y b=%d\n",a,b);
	a %= b;
	printf("El resultado de esta asignacion e incremento es : a=%d y b=%d\n",a,b);

}