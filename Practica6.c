/*10 tablas de multiplicar
realizo Kevin Galdeano
fecha: 24 de Agosto de 2023
*/
#include <stdio.h>
int main()
{
	int x,y;
	for(x=1;x<=10;x=x+1)
	{
		printf("La tabla de multiplicar del %d\n",x);
	   for(y=1;y<=10;y=y+1)
	   printf("%d x %d = %d\n",x,y,x*y);
	   puts(" ");
	}
}
             
