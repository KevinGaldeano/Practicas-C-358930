#include<stdio.h>
int main()
{
	int x,y=0;
	int m,s=0;
	int notas[3][3] ={1,2,3,4,5,6,7,8,9};
	/*el primer elemento son los renglones el segundo las columnas*/
	printf("La diagonal principal es %d %d %d\n",notas[0][0],notas[1][1],notas[2][2]);
	m=notas[0][0]*notas[0][1]*notas[0][2];
	printf("La multiplicacion de los tres primeros numeros es %d\n",m);
	for (x=0;x<=2;x=x+1)
	{
		for(y=0;y<=2;y=y+1)
		s=s+notas[x][y];
	}
	printf("La suma de todos los numeros del arreglo es %d\n",s);
	return 0;
}