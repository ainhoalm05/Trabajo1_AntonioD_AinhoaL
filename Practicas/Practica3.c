#include <stdio.h>
#include <stdlib.h>


#define CANT_PRODUC 10
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){
	int producto;
	char nom_producto[CANT_PRODUC][20];
	int stock[CANT_PRODUC];

	printf("¿Cuantos productos quieres gestionar?:\n");
	scanf("%d", &producto);
	
	if (producto <= CANT_PRODUC){
	for(int i=0; i < producto; i++){
		printf("Introduce el nombre de cada producto:\n");
		scanf("%s", nom_producto[i]);
		printf("Introduce el stock de cada producto:\n");
		scanf("%d", &stock[i]);
		//stock+=nom_producto;
	}
	}
	printf("%d\n", producto);
	printf("%s\n", nom_producto[2]);
	printf("%d\n", stock[2]);
	
	return 0;
}
