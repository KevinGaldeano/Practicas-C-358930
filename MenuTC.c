#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	int opcion=1,i,cod;
	int existe=0;
	struct producto{
		int codigo;
		char descripcion[41];
		float precio;
	} tproducto;
	FILE *arch;
	while (opcion!=6) {
		printf("1 - Crear un archivo binario llamado \"productos.dat\"\n");
		printf("2 - Carga de registros de tipo tproducto\n");
		printf("3 - Listado completo de productos.\n");
		printf("4 - Consulta de un producto por su codigo.\n");
		printf("5 - Modificacion del precio de un producto. \n");
		printf("6 - Finalizar\n\n");
		printf("Ingrese su opcion:");
		scanf("%i",&opcion);
		switch (opcion) {
			case 1:
				arch=fopen("productos.dat","wb");
				if (arch==NULL)
					exit(1);
				fclose(arch);
				printf("Presione una tecla para continuar\n\n");
				getch();
				break;
			case 2:

				arch=fopen("productos.dat","ab");
				if (arch==NULL)
					exit(1);
				printf("Ingrese el codigo del producto:");
				scanf("%i",&tproducto.codigo);
				fflush(stdin);
				printf("Ingrese el nombre del producto:");
				gets(tproducto.descripcion);
				printf("Ingrese precio:");
				scanf("%f",&tproducto.precio);
				fwrite(&tproducto, sizeof(tproducto), 1, arch);
				fclose(arch);
				printf("Presione una tecla para continuar\n\n");
				getch();
				break;
			case 3:

				arch=fopen("productos.dat","rb");
				if (arch==NULL)
					exit(1);

				fread(&tproducto, sizeof(tproducto), 1, arch);
				while(!feof(arch)) {
					printf("%i %s %0.2f\n", tproducto.codigo, tproducto.descripcion, tproducto.precio);
					fread(&tproducto, sizeof(tproducto), 1, arch);
				}
				fclose(arch);
				printf("Presione una tecla para continuar\n\n");
				getch();
				break;
			case 4:

				arch=fopen("productos.dat","rb");
				if (arch==NULL)
					exit(1);
				printf("Ingrese el codigo de producto a consultar:");
				int cod;
				scanf("%i", &cod);
				int existe=0;
				fread(&tproducto, sizeof(tproducto), 1, arch);
				while(!feof(arch)) {
					if (cod==tproducto.codigo) {
						printf("%i %s %0.2f\n", tproducto.codigo, tproducto.descripcion, tproducto.precio);
						existe=1;
						break;
					}
					fread(&tproducto, sizeof(tproducto), 1, arch);
				}
				if (existe==0)
					printf("No existe un producto con dicho codigo\n");
				fclose(arch);
				printf("Presione una tecla para continuar\n\n");
				getch();
				break;
			case 5:

				arch=fopen("productos.dat","rb+");
				if (arch==NULL)
					exit(1);
				printf("Ingrese el codigo de producto a modificar:");

				scanf("%i", &cod);

				fread(&tproducto, sizeof(tproducto), 1, arch);
				while(!feof(arch)) {
					if (cod==tproducto.codigo) {
						printf("%i %s %0.2f\n", tproducto.codigo, tproducto.descripcion, tproducto.precio);
						printf("Ingrese nuevo precio:");
						scanf("%f",&tproducto.precio);
						int pos=ftell(arch)-sizeof(tproducto);
						fseek(arch,pos,SEEK_SET);
						fwrite(&tproducto, sizeof(tproducto), 1, arch);
						printf("Se modifico el precio para dicho producto.\n");
						existe=1;
						break;
					}
					fread(&tproducto, sizeof(tproducto), 1, arch);
				}
				if (existe==0)
					printf("No existe un producto con dicho codigo\n");
				fclose(arch);
				printf("Presione una tecla para continuar\n\n");
				getch();
				break;
		}
	} 
	return 0;
}