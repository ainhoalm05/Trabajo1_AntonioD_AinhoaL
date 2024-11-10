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
	Producto producto[CANTIDAD_PRODUCTO];
	int cantidad;
	char respuesta[2];
	char consulta[LONGITUD_NOMBRE];
	int adicion;

	/*INGRESO DE PRODUCTOS Y MOSTRAR INVENTARIO*/
	printf("¿Cuantos productos quieres gestionar?:\n");
	scanf("%d",&cantidad);

	if (cantidad <= CANTIDAD_PRODUCTO){
		for(int i=0; i < cantidad; i++){
			printf("Introduce el nombre de cada producto: ");
			scanf(" %s", producto[i].nombre);
			printf("Introduce el stock de cada producto: ");
			scanf("%d", &producto[i].stock);


		}
	}
	for (int i=0;i<cantidad;i++){
		printf("Producto %d:%s - %d unidades\n",i+1,producto[i].nombre,producto[i].stock);
	}
	
	/*REABASTECIMIENTO DE PRODUCTOS*/
	while (1==1){

		printf("¿Desea rebastecer algun producto? (sí/no): ");
		scanf(" %s",respuesta);

		if (strcmp(respuesta,"sí")==0){
			printf("Ingrese el nombre del producto: ");
			scanf(" %s",consulta);


			for(int i=0;i<cantidad;i++){
				if (strcmp(consulta,producto[i].nombre)==0){//compara el producto con toda la lista hasta que coincida
					printf("Cantidad a añadir: ");
					scanf("%d",&adicion);
					producto[i].stock+=adicion;
				}

			}
		}else{
			break;
		}
	}	
	
	/*CÁLCULO DE PRODUCTOS EN BAJA EXISTENCIA*/
	printf("Productos de baja existencia:\n");
	for (int i=0;i<cantidad;i++){
		if (producto[i].stock<5){
			printf("%s - %d unidades\n", producto[i].nombre, producto[i].stock);		
		}
	}

	/*BÚSCAR UN PRODUCTO POR NOMBRE*/
	printf("Ingrese el nombre del producto a buscar: ");
	scanf("%s",consulta);

	for(int i=0;i<cantidad;i++){
		if (strcmp(consulta,producto[i].nombre)==0){ //compara el producto con toda la lista hasta que coincida
			printf("Cantidad en stock: %d Unidades\n",producto[i].stock);
			break;
		}else if(i==cantidad-1){
			printf("El producto introducido no existe\n");	
		}
	}




	return 0;
}
