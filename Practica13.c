#include<stdio.h>

/* Este programa muestra la utilización de cadenas en C */

char cadena[8], resto[80];

void main(void)
{
        printf("Escriba una cadena: ");
        scanf("%s", cadena); /* Las cadenas NO llevan & */
        
        printf("\n\nLa cadena leida era %s\n\n", cadena);
        
        printf("Y el resto era");
        gets(resto);
        puts(resto);
        printf("Terminacion normal del programa.\n\n");
}