/*Funcion recursiva para sumar e imprimir los numeros naturales indicados por el usuario*/
#include <stdio.h>
#include <math.h>
int fx(int x);
int main()
{
	int x;
	printf("Ingrese un numero : ");
	scanf("%d",&x);
	printf("La suma de los primeros %d numeros naturales son : %d\n",x,fx(x));
}
int fx(int x)
{
	if(x==0)
	return 0;
	else
	{
		return(x+fx(x-1));
	}
}
