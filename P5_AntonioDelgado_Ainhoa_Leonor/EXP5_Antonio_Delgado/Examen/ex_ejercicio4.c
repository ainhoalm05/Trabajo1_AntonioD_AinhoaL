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
	printf("¿Cuantos productos quieres gestionar?: ");
	scanf("%d",&cantidad);

	if (cantidad <= CANTIDAD_PRODUCTO){
		for(int i=0; i < cantidad; i++){
			printf("Introduce el nombre del producto: ");
			scanf(" %s", producto[i].nombre);
			printf("Introduce el stock del producto: ");
			scanf(" %d", &producto[i].stock);


		}
	}

	printf("\n");//Separación de párrafos

	for (int i=0;i<cantidad;i++){
		printf("Producto %d:%s - %d unidades\n",i+1,producto[i].nombre,producto[i].stock);
	}

	printf("\n");//espacio para separar párrafos

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
	printf("\n");//Separación de párrafos

	/*CÁLCULO DE PRODUCTOS EN BAJA EXISTENCIA*/
	printf("Productos en baja existencia:\n");
	for (int i=0;i<cantidad;i++){
		if (producto[i].stock<5){
			printf("%s - %d unidades\n", producto[i].nombre, producto[i].stock);		
		}
	}

	printf("\n");

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
	
	//Fin del código original
	
	int retirar;//nueva variable para guardar la cantidad a retirar
	while (1==1){//bucle infinito hasta que el usuario diga no o cualquier otra respuesta que no sea sí
	//Utilizo el mismo código que para agregar stock cambiando los printf para que el usuario no se confunda

		printf("¿Desea retirar algún producto? (sí/no): ");
		scanf(" %s",respuesta);

		if (strcmp(respuesta,"sí")==0){
			printf("Ingrese el nombre del producto: ");
			scanf(" %s",consulta);


			for(int i=0;i<cantidad;i++){
				if (strcmp(consulta,producto[i].nombre)==0){//compara el producto con toda la lista hasta que coincida
					printf("Cantidad a retirar: ");
					scanf("%d",&retirar);
					if (producto[i].stock<=retirar){//sólo retira stock si la cantidad a retirar es menor o igual al stock del producto
						producto[i].stock-=retirar;//si hay stock suficiente para retirar lo resta del stock
					}else{
					printf("ERROR: No hay suficiente stock para retirar la cantidad introducida\n");//si no hay stock suficiente imprime un error
					}

				}

			}
		}else{
			break;
		}
	}	



	return 0;
}
