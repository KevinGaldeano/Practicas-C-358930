#include <stdio.h>
/*Conflicto de variables con el mismo nombre*/
void f1();
int K = 5;
int main ()
{
	int i;
	for (i=1;i<=3;i++)
		f1();
}
void f1()
{
	int K = 2;
	K += K;
	printf("\n\nEl valor de la variable local es: %d",K);
	::K = ::K + K;
	printf("\nEl valor de la variable global es: %d", ::K);
}