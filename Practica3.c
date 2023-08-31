/*Realizo: Kevin Galdeano
fecha: 23 de agosto de 2023
función: verifica si el usuario es mayor de edad y tiene INE podrá votar
*/
#include <stdio.h>
int main()
{
	int edad;
	int ine;
	printf("Cual es tu edad?: ");
	scanf("%d",&edad);
	printf("Tienes INE 1=si,0=no");
	scanf("%d",&ine);
	if(edad>=18 && ine==1) 
	{
		printf("Puedes votar");
	}
	else
	printf("No puedes votar, eres menor");
}                          