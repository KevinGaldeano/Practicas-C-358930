#include <stdio.h>
int main()
{
	int numero[5] = {200,150,100,-50,300};
	int suma=0,i;
	int longitud;
	for (i=0;i<=4;i=i+1)
	{
		suma=suma+numero[i];
	}
	printf("El resultado de la suma es %d\n",suma);
	printf("El segundo elemento es: %d\n",numero[1]);
	longitud=sizeof(numero)/sizeof(numero[0]);
	printf("El tama%co del arreglo es %d\n",164,longitud);
	printf("El ultimo elemento es %d\n",numero[longitud-1]);
	return 0;
}