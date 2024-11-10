#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){
int cantidad;
int continente[cantidad];
//para cada dato hago un array con tamaño cantidad para poder añadir más productos usando un bucle más  adelante
int sede[cantidad];
int categoria[cantidad];
int modelo[cantidad];
int lote[cantidad];

int inventario[1][2][3][4][9]; //Necesito un array de 5 dimensiones para guardar todos los datos

inventario[0][0][0][0][0]=50; //Primer Ejemplo
inventario[1][1][1][2][1]=120; //Segundo Ejemplo


printf("¿Cuántos productos quieres añadir?");
scanf("%d",&cantidad);
for (int i=0;i<cantidad;i++){
//Recogo todos los datos necesarios para registrar las unidades
printf("Introduce el continente (0 América 1 Europa): \n");
scanf("%d",&continente[i]);
//Guardo los  datos en un array para luego imprimirlos todos de golpe
printf("Introduce la sede (0,1 o 2): \n");
scanf("%d",&sede[i]);

printf("Introduce la categoría (0 para televisores, 1 para teléfonos, 2 para ordenadores o 3 para electrodomésticos: \n");
scanf("%d",&categoria[i]);

printf("Introduce el modelo (0 a 4): \n");
scanf("%d",&modelo[i]);

printf("Introduce el lote (0 a 9): \n");
scanf("%d",&lote[i]);


printf("Introduce las unidades: \n");
scanf("%d",&inventario[continente[i]][sede[i]][categoria[i]][modelo[i]][lote[i]]);
//Estoy usando los arrays continente[i] sede[i] etc para señalar al array inventario[] dónde tiene que guardar las unidades
}

//Imprimimos los dos ejemplos
printf("Unidades Primer ejemplo: %d\n",inventario[0][0][0][0][0]); 
printf("Unidades Segundo ejemplo: %d\n",inventario[1][1][1][2][1]);

//Imprimimos todos los productos 
for (int i=0;i<cantidad;i++){
printf("Unidades Producto %d: %d\n",i,inventario[continente[i]][sede[i]][categoria[i]][modelo[i]][lote[i]]);
}

	return 0;
}
