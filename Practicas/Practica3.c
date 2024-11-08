#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANTIDAD_PRODUCTO 10
#define LONGITUD_NOMBRE 20
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
typedef struct{
	char nombre[LONGITUD_NOMBRE];
	int stock;
}Producto;

int main (){
	Producto producto[CANT_PRODUC];
	int cantidad;
	char respuesta[2];
	char item[LONGITUD_NOMBRE];
	int adicion;
	char busqueda[LONGITUD_NOMBRE];

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


	printf("¿Desea rebastecer algun producto? (sí/no):\n");
	scanf(" %s",respuesta);

	if (strcmp(respuesta,"sí")==0){
		printf("Ingrese el nombre del producto:\n");
		scanf("%s",item);


		for(int i=0;i<cantidad;i++){
			if (strcmp(item,producto[i].nombre)==0){//compara el producto con toda la lista hasta que coincida
				printf("Cantidad a añadir: ");
				scanf("%d",&adicion);
				producto[i].stock+=adicion;
			}

		}
	}
	printf("Productos de baja existencia:\n");
	for (int i=0;i<cantidad;i++){
		if (producto[i].stock<5){
			printf("%s - %d unidades\n", producto[i].nombre, producto[i].stock);		
		}
	}

	printf("Ingrese el nombre del producto a buscar: ");
	scanf("%s",busqueda);

	for(int i=0;i<cantidad;i++){
		if (strcmp(busqueda,producto[i].nombre)==0){ //compara el producto con toda la lista hasta que coincida
			printf("Cantidad en stock: %d Unidades\n",producto[i].stock);

		}else if(i==cantidad-1){
			printf("El producto introducido no existe\n");	
		}
	}




	return 0;
}
