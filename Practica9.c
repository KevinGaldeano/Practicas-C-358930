# include <stdio.h>
# include <time.h>
int main()
{
int adivina=-1;
int contador=0;
srand(time(NULL));// inicializando los números aleatorios
int NoOculto=rand()%51;
//printf("%d",NoOculto);
while(NoOculto!=adivina)
{
	contador=contador+1;
	printf("Adivina el numero oculto entre 0 y 50: ");
	scanf("%d",&adivina);
	if(adivina==NoOculto)
	{
	printf("Adivinaste el numero oculto: %d\n",NoOculto);
	printf("Ganaste en %d intentos\n",contador);
	}
	else if(adivina>NoOculto)
	printf("Dame un numero menor\n");
	else
	printf("Dame un numero mayor\n");
	   if (contador==5)
   {
   	printf("Perdiste\n");
   	adivina=NoOculto;
   }
}
}