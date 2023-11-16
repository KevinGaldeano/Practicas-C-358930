#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE*archivo;
	archivo= fopen("alumnos.dat","rb");
	int z;
		struct datosPersonas {
		char nombre[20];
		int edad;
		float calif1;
	} persona[5];
	fread(&persona,sizeof(persona[z]),5,archivo);
	for(z=0;z<=;z++)
	{
	printf("%s tiene %d a%cos y su calificacion es de %.2f\n",
	persona[z].nombre,persona[z].edad,164,persona[z].calif1);
 	}                                                        
	fclose(archivo);
	getch();
	return 0;
}	
	