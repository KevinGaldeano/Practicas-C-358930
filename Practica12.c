#include<stdio.h>

/* Este programa muestra los peligros que acechan
        al incauto lector de caracteres */

char unaletra, otraletra;

void main(void)
{
        printf("Escriba una letra y pulse intro, por favor: ");
        scanf("%c%*c", &unaletra);
        
        printf("La letra que ha pulsado era %c y su valor decimal es %d\n", unaletra, unaletra);
        
        printf("Ahora escriba otra letra, por favor: ");
        scanf("%c",&otraletra);
        
        printf("La letra que ha pulsado era %c y su valor decimal es %d\n", otraletra, otraletra);


}
/*
        El resultado de la ejecución de este programa es:
Escriba una letra y pulse intro, por favor: a
La letra que ha pulsado era a y su valor decimal es 97
Ahora escriba otra letra, por favor: La letra que ha pulsado era 
 y su valor decimal es 10


Terminación normal del programa.

¿Qué ha pasado?
*/
