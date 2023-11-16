#include <stdio.h>
#include <string.h>
int main()
{
	char palabra1[100], palabra2[250], palabra3[100];
	int i,r,cont=0, cont2=0;
	printf("Introduzca palabra\n");
	gets(palabra1);
	for(i=0;i<=strlen(palabra1)-1;i++)
	{
		if(palabra1[i]!=' ')
		{
		palabra3[cont2]=palabra1[i];
		cont2++;
		}
	}
	puts(palabra1);
	puts(palabra3);
	/*Eliminamos los espacios en blanco*/
	for(i=strlen(palabra3)-1;i>=0;i--)
	{
		palabra2[cont]=palabra3[i];
		cont++;
	}
	r=strcmp(palabra3,palabra2); /*regresa cero si son iguales*/
    if (r==0)
        printf("La Cadena es un Palindromo\n");
    else
        printf("La cadena no es un Palindromo\n");
}