/*ejercicio while y case Switch*/
#include <stdio.h>
#include<math.h>
int main()
{
int opcion=1;
int num1,pot,num3,c;
int resultado;
float num2,res;
while (opcion!=5)
   {
     system("cls");
     printf("1.-Determinar si el numero recibido es par o impar\n");
     printf("2.-Calcular la raiz cuadrada del numero recibido\n");
     printf("3.-Elevar el numero a la potencia indicada por el usuario\n");
     printf("4.-Pedir dos valores e imprimirlos,primero el mayor\n");
     printf("5.-Salir\n");
     printf("cual es la opcion:");
     scanf("%d",&opcion);
     system("cls");
      switch(opcion)
      {
      	case 1:
      		 printf("1.-Determinar si el numero recibido es par o impar\n");
      		 printf("Ingresa el numero\n");
      		 scanf("%d",&num1);
      		 resultado=num1%2;
      		 if (resultado==0)
      		 printf("%d = Numero par\n",num1);
      		 else
      		 printf("%d = Numero impar\n",num1);
      		break;
      	case 2:
      		printf("2.-Calcular la raiz cuadrada del numero recibido\n");
      		printf("Ingresa el numero\n");
      		scanf("%d",&num1);
      		if (num1>=0)
      		{
      		res=sqrt(num1);
      		printf("La raiz cuadrada de %d = %f\n",num1,res);
		     }
      		else
      		printf ("El numero %di es un numero complejo\n",num1*-1);
      		break;
      	case 3:
      		resultado=1;
          	 printf("3.-Elevar el numero a la potencia indicada por el usuario\n");
             printf("Cual es el numero?\n");
             scanf("%d",&num1);
           	printf("A que potencia quieres elevar el numero?\n");
      	  	scanf("%d",&pot);
      	  	for(c=1;c<=pot;c=c+1)
      	    {
      	   	resultado=resultado*num1;
		   	}
		     printf("El resultado es = %d\n",resultado);
      		break;
      	case 4:
      		printf("4.-Pedir dos valores e imprimirlos,primero el mayor\n");
      		printf("Ingresa el numero 1\n");
      		scanf("%d",&num1);
      		printf("Ingresa el numero 2\n");
      		scanf("%d",&num3);
      		if(num1>num3)
      		 printf("%d > %d\n",num1,num3);
      		else if(num3>num1)
             printf("%d > %d\n",num3,num1);
             else
             printf("%d = %d\n",num1,num3);
      		break;
      	case 5:
      		printf("Gracias por usar este programa\n");
      		break;
      	default:
      		printf("Recuerda que solo valores del 1 al 5\n");
      		break;
	  }
	  system("pause");
	  system("cls");
   }	
}