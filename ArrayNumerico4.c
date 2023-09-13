#include <stdio.h>
#include <time.h>
int main()
{
	int x,y,z;
	printf("De que tama%co es tu arreglo?\n",164);
	scanf("%d",&x);
	int num[x];
	for (z=0;z<=x-1;z=z+1)
	{
     num[z]=rand()%11;
	}
	for (z=0;z<=x-1;z=z+1)
	{
		printf("El numero %d es = %d\n",z+1,num[z]);
	}	
	return 0;
}    
              