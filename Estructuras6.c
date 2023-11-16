#include <stdio.h>
#include <string.h>
int main()
{
	FILE *archivo;
	archivo = fopen("alumnos.dat", "wb");
	int z=0,x;
	while(z!=4)
	{
		printf("Que quieres hacer?\n");
		printf("1-Capturar datos\n");
		printf("2-Modificar datos\n");
		printf("3-Mostrar datos\n");
		printf("4-Salir\n");
		scanf("%d",&z);
	}
	struct datosPersonas {
	char nombre[20];
	int edad;
	float calif1;
	}persona[5];
		switch(z)
	{
		case 1:
			FILE *archivo;
			archivo = fopen("alumnos.dat", "ab");
			system("pause");
			printf("Cuantos datos vas agregar?");
			
			printf("Gracias por agregar mas datos\n");
			break;
			fclose(archivo);
		case 2:
			FILE *archivo;
			archivo = fopen("alumnos.dat", "ab");
			break;
			fclose(archivo);
		case 3:
			break;
		default:
			printf("Solo valores del 1 al 4 \n");
			system ("pause");
			break;
	}
}