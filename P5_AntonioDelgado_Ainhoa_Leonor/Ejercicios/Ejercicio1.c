#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){
	int cantidad;

	int inventario[1][2][3][5][9]; //Necesito un array de 5 dimensiones para guardar todos los datos

	inventario[0][0][0][0][0]=50; //Primer Ejemplo
	inventario[1][1][1][2][1]=120; //Segundo Ejemplo

	inventario[0][2][0][0][7]=6;
	inventario[0][0][1][1][4]=25;
	inventario[1][1][2][2][8]=87;
	inventario[1][2][3][3][9]=152;
	inventario[1][0][2][4][0]=999;



	//Imprimimos los dos ejemplos
	printf("Unidades Primer ejemplo: %d\n",inventario[0][0][0][0][0]); 
	printf("Unidades Segundo ejemplo: %d\n",inventario[1][1][1][2][1]);

	//Imprimimos las unidades de 5 posiciones elegidas al azar dentro de los límites
	printf("Producto 1: %d\n",inventario[0][2][0][0][7]);
	printf("Producto 2: %d\n",inventario[0][0][1][1][4]);
	printf("Producto 3: %d\n",inventario[1][1][2][2][8]);
	printf("Producto 4: %d\n",inventario[1][2][3][3][9]);
	printf("Producto 5: %d\n",inventario[1][0][2][4][0]);
	return 0;
}
