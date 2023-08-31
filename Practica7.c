/*Practica 7 imprimir todos los números del 1 al 100
realizo Kevin Galdeano
24 de agosto de 2023
*/
#include <stdio.h>
int main()
{
	int x, res;
	for (x=1;x<=100;x=x+1)
	{
		res=x%2;
     if(res==0)
	 printf("%d\n",x);
	}
}