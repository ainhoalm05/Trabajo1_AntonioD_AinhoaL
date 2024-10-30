#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */


int main (){

	char dias[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
	float temperatura[7] ;
	float promedio=0;
	//float mayor=0;
	//float menor=0;
	
	for (int i=0; i <7; i++){
		printf("Introduce la temperatura del %s\n",dias[i]);
		scanf("%f", &temperatura[i]);
		promedio+=temperatura[i];

	}
	promedio=promedio/7;
	printf("La temperatura promedio de la semana: %lfºC\n", promedio);


	return 0;
}
