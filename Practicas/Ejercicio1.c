#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){
int continente,sede,categoria,modelo,lote;

int inventario[1][2][3][4][9];

inventario[0][0][0][0][0]=50;
inventario[1][1][1][2][1]=120;


printf("Introduce el continente (0 América 1 Europa): \n");
scanf("%d",&continente);
printf("Introduce la sede: \n");
scanf("%d",&sede);
printf("Introduce la categoría: \n");
scanf("%d",&categoria);
printf("Introduce el modelo: \n");
scanf("%d",&modelo);
printf("Introduce el lote: \n");
scanf("%d",&lote);

printf("Introduce las unidades: \n");
scanf("%d",&inventario[continente][sede][categoria][modelo][lote]);

printf("%d\n",inventario[continente][sede][categoria][modelo][lote]);



	return 0;
}
