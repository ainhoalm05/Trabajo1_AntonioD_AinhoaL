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
	float mayor;
	float menor;
	
	for (int i=0; i <7; i++){
		printf("Introduce la temperatura del %s\n",dias[i]);
		scanf("%f", &temperatura[i]);
		promedio+=temperatura[i];
		
		if(i==0){ //en el primer ciclo del bucle asignamos el valor de la temperatura a mayor y menor para compararlas con el resto de días y sacar la temperatura mínima y máxima
		menor=temperatura[i];
		}else if (mayor<temperatura[i]){ //si la temperatura es mayor que la guardada en la variable se le asigna el valor  a esta, si no no hace nada
		mayor=temperatura[i];
		}
		if(i==0){
		menor=temperatura[i];
		}else if (menor>temperatura[i]){
		menor=temperatura[i];
		}
	}
	promedio=promedio/7;
	printf("La temperatura promedio de la semana: %lfºC\n", promedio);
	printf("Temperatura más alta: %fºC\n",mayor);
	printf("Temperatura más baja: %fºC\n",menor);

	return 0;
}
