/*Practica 8 buscar multiplos de 3 y 5
realizo Kevin Galdeano
30 de agosto de 2023
*/
#include <stdio.h>
int main()
{
	int x,y,z;
	for (x=1;x<=100;x=x+1)
	{
		y=x%3;
		z=x%5;
		if(y==0 && z==0)
		printf("%d = Fizz Buzz\n",x);
		else if (y==0)
		printf("%d = Fizz\n",x);
		else if(z==0)
		printf("%d = Buzz\n",x);
		else
		printf("%d\n",x);
	}
}