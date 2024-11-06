#include <stdio.h>
#include <stdlib.h>


#define CANT_PRODUC 10
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
typedef struct{
	char nombre[20];
	int stock;
}Producto;

int main (){
	Producto producto[CANT_PRODUC];
	int cantidad;
	char respuesta;
	int adicion=0;

	printf("¿Cuantos productos quieres gestionar?:\n");
	scanf("%d",&cantidad);

	if (cantidad <= CANT_PRODUC){
		for(int i=0; i < cantidad; i++){
			printf("Introduce el nombre de cada producto:\n");
			scanf("%s", producto[i].nombre);
			printf("Introduce el stock de cada producto:\n");
			scanf("%d", &producto[i].stock);


		}
	}
	for (int i=0;i<cantidad;i++){
		printf("Producto %d:%s - %d unidades\n",i+1,producto[i].nombre,producto[i].stock);
	}

	printf("¿Desea rebastecer algun producto? (si/no):\n");
	scanf("%s", &respuesta);

	if (respuesta == "si"){
		printf("Ingrese el nombre del producto:\n");
		scanf("%s",producto);
		printf("Cantidad a añadir:\n");
		scanf("%d",&adicion);
		producto[].stock+=adicion
	}
	return 0;
}
