#include <stdio.h>
#include<string.h>
int main()
{
	int numero,i;
	char mes[12][20];
	char valor[20];
	for(i=0;i<=11;i=i+1)
	{
		printf("Escribe el mes :");
		gets(valor);
		strcpy(mes[i],valor);
	}
	printf("Cual quieres imprimir?: ");
	scanf("%d",&numero);
	printf("El %d, mes corresponde a : %s\n",numero,mes[numero-1]);
	printf("todo el arreglo impreso es :\n");
	for(i=0;i<=11;i++)
	{
		printf("El mes %d, corresponde a %s\n",i+1,mes[i]);
	}
	printf("La segunda letra del tercer mes es %c\n",mes[2][1]);
	printf("La primer letra del mes + la segunda letra del 4to mes son: %c + %c\n ",mes[2][0],+mes[3][1]);
}