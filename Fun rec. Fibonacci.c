#include <stdio.h>
#include <math.h>
int fix(int n);
int main()
{
	int n,y,z;
	printf("Hasta que numero quieres la sucesion de Fibonacci? ");
	scanf("%d",&n);
	printf("La suma de los primeros %d terminos es: %d\n",n,fix(n));
	for (y=0;y<=n;y++)
	{
		z=fix(y);
    printf("%d ",z);
	}
}
int fix(int n)
{
	if(n==0 || n==1)
	{
	return n;
	}
	else
	return (fix(n-1)+fix(n-2));
}