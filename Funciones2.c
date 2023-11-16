#include <stdio.h>
#include <math.h>
int calculo(int x); /*declaración de función*/
int main()
{
	int valor;
	float salida;
	printf("Programa para raices cuadradas\n");
	printf("Ingrese el valor para calcular\n");
	scanf("%d",&valor);
	salida=calculo(valor); /*salida recibe el valor de entorno del calculo de la función*/
	printf("El resultado es %2.2f\n",salida);
	return (0);
}
int calculo(int x)
	{
	float resultado;
	resultado=sqrt(x);
	return resultado;
	}