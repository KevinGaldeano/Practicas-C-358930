/**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int dim_usu;
	int dim_par;
	int n;/* para recorrer los for*/
	int m;/*Para generar el arreglo de numeros pares*/
	int *pvec_usu;/*Puntero al arreglo alimententado por el usuario*/
	int *pvec_par;/*Puntero al arreglo de elementos pares(Dinamico)*/
	printf("Cual es la dimension del arreglo (unidimensional): ");
	scanf("%d",&dim_usu);
	/*pvec_usu=(int*)calloc(dim_usu,sizeof(int)); asigna memoria para el array */
	pvec_usu=(int *) malloc(dim_usu*sizeof(int));
	if(pvec_usu==NULL)
	{
		printf("Error : no hay memoria suficiente para crear vector de %d elementos\n",dim_usu);
	}
	else
	{
		for(n=0;n<dim_usu;n++)
		{
			printf("Elemento %d = ",n);
			scanf("%d",&(pvec_usu[n]));
		}
	}
	dim_par=0;
	for(n=0;n<=dim_usu;n++)
		if((pvec_usu[n]%2)==0) dim_par++;
	pvec_par=(int *) calloc(dim_par,sizeof(int));
	if(pvec_par==NULL)
		printf("Error : no hay suficiente memoria para el vector de %d elementos",dim_par);
	else
	{
		m=0;
		for(n=0;n<dim_usu;n++)
		{
			if((pvec_usu[n]%2)==0)
			{
				pvec_par[m]=pvec_usu[n];
				m++;
			}
		}
	}
	for(n=0;n<dim_par;n++)
		printf("Elementos par %d = %d\n",n,pvec_par[n]);
	free(pvec_par);
	printf("_______________________\n");
	free(pvec_par);
	for(n=0;n<dim_par;n++)
		printf("Elementos par %d = %d\n",n,pvec_par[n]);
	free(pvec_usu);
}