#include <stdio.h>
int main()
{
	struct datospersonas
	{
		char nombre[20];
		int edad;
		float calif1;
	};
	struct datospersonas persona={"Kevin",30,9.5};
	printf("El nombre es : %s\n",persona.nombre);
	printf("La edad es : %d\n",persona.edad);
	printf("La calificacion es : %.1f\n",persona.calif1);
}