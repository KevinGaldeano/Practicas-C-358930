/*ejercicio while y case Switch*/
#include <stdio.h>
#include<math.h>
int main()
{
int opcion=1;
int num1,pot,num3;
int resultado;
float num2,res;
while (opcion!=5)
   {
     system("cls");
     printf("1.-Determinar si el numero recibido es parmo impar\n");
     printf("2.-Calcular la raiz cuadrada del numero recibido\n");
     printf("3.-Elevar el numero a la potencia indicada por el usuario\n");
     printf("4.-Pedir dos valores e imprimirlos,primero el mayor\n");
     printf("5.-Salir\n");
     printf("cual es la opcion:");
     scanf("%d",&opcion);
      switch(opcion)
      {
      	case 1:
      		 printf("1.-Determinar si el numero recibido es parmo impar\n");
      		break;
      	case 2:
      		printf("2.-Calcular la raiz cuadrada del número recibido\n");
      		break;
      	case 3:
      		printf("3.-Elevar el numero a la potencia indicada por el usuario\n");
      		break;
      	case 4:
      		printf("4.-Pedir dos valores e imprimirlos,primero el mayor\n");
      		break;
      	case 5:
      		printf("Gracias por usar este programa\n");
      		break;
      	default:
      		printf("Recuerda que solo valores del 1 al 5\n");
      		break;
	  }
	  system("pause");
   }	
}