#include<stdio.h>

char letra;
signed char letraconsigno;
unsigned char letrasinsigno;

int main()
{
	letra = 'A';
	printf("La letra es %c y su valor decimal es %d.\n\n",
				letra,letra);
	
	letraconsigno = -65;
	printf("Letra consigno es %d y su valor decimal es %c.\n\n",
				letraconsigno,letraconsigno);
	
	letrasinsigno = 165;
	printf("Letra sin signo es %d y su valor decimal es %c.\n\n",letrasinsigno,letrasinsigno);
	return 0;
}