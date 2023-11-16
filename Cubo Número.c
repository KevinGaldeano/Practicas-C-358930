#include <stdio.h>  /* Funcion recursiva que eleve un numero al cubo 3 veces y muertre el resultado ^3*/
#include <math.h>
int cubo(int x,int y);
int main()
{
	int num,z,y=3;
	printf("Ingresa un numero para elevar al cubo : ");
	scanf("%d",&num);
	z=cubo(num,y);
	printf("El cubo del numero es: %d",z);
	return 0;
}
int cubo(int x,int y)
{
	int res;
	if (y==0)
		return 1;
	else
	{
	res=pow(x,3);
	return(res*cubo(x,y=y-1));
 	}
}
