#include <stdio.h>
#include <math.h>
main()
{
	int a=10,b=25,r1=0,r2=0,r3=0;
	suma(a,b,&r1,&r2,&r3);
	printf("El valor de la suma es %d el valor de la resta es %d\n",r1,r2);
	printf("La multiplicacion es %d\n",r3);
}
	suma(int a,int b,int *r1, int *r2, int *r3)
	{
	 *r1=(a+b);
	 *r2=(a-b);
	 *r3=a*b;
	}