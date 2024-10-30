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
	int dia_mayor,dia_menor;

	for (int i=0; i <7; i++){
		printf("Introduce la temperatura del %s\n",dias[i]);
		scanf("%f", &temperatura[i]);
		promedio+=temperatura[i];
		
		if(i==0){ //en el primer ciclo del bucle asignamos el valor de la temperatura a mayor y menor para compararlas con el resto de días y sacar la temperatura mínima y máxima
		menor=temperatura[i];
		dia_mayor=i; //dia_mayor guarda la posición del array a la que apuntar luego en el final
		
		}else if (mayor<temperatura[i]){ //si la temperatura es mayor que la guardada en la variable se le asigna el valor  a esta, si no no hace nada
		mayor=temperatura[i];
		dia_mayor=i;
		
		}
		if(i==0){
		menor=temperatura[i];
		dia_menor=i;
		}else if (menor>temperatura[i]){
		menor=temperatura[i];
		dia_menor=i;
		}
	}
	promedio=promedio/7;
	printf("La temperatura promedio de la semana: %lfºC\n", promedio);
	printf("Temperatura más alta: %s %fºC\n",dias[dia_mayor],mayor);
	printf("Temperatura más baja: %s %fºC\n",dias[dia_menor],menor);

	return 0;
}
