/* manejo de struct
como arreglos de datos

estructuras3.c
*/

#include<stdio.h>
#include<string.h>
int main() 
{
	FILE *archivo;
	archivo = fopen("alumnos.dat", "wb");

	int i;
	struct datosPersonas {
		char nombre[20];
		int edad;
		float calif1;
	} persona[5];
	if (archivo != 0)
	{
	for (i=0;i<=4;i++) {

		printf("Escribe tu nombre: ");
		gets(persona[i].nombre);
		printf("Escribe tu edad: ");
		scanf("%d",&persona[i].edad);
		printf("Escribe tu calificacion: ");
		scanf("%f",&persona[i].calif1);
		fflush(stdin);
		printf("%s tiene %d a%cos y su calificacion es de %.2f\n ",persona[i].nombre,persona[i].edad,164,
      persona[i].calif1);
	}
	fwrite(&persona,sizeof(persona),3,archivo);
	fclose(archivo);
	}
	return 0;
}