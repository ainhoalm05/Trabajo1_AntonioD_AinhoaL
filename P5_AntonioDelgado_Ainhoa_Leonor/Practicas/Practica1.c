#include <stdio.h>
#include <stdlib.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

#define DIAS 7
int main (){

	char dias[DIAS][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
	float temperatura[DIAS] ;
	float promedio=0;
	float mayor;
	float menor;

	int dias_promedio=0;
	int dia_mayor,dia_menor;

	for (int i=0; i <DIAS; i++){
		printf("Introduce la temperatura del %s\n",dias[i]);
		scanf("%f", &temperatura[i]);
		promedio+=temperatura[i];

		if(i==0){ //en el primer ciclo del bucle asignamos el valor de la temperatura a mayor y menor para compararlas con el resto de días y sacar la temperatura mínima y máxima
			mayor=temperatura[i];
			dia_mayor=i; //dia_mayor guarda la posición del array a la que apuntar luego en el final
			menor=temperatura[i];
			dia_menor=i;

		}else if (mayor<temperatura[i]){ //si la temperatura es mayor que la guardada en la variable se le asigna el valor  a esta, si no no hace nada
			mayor=temperatura[i];
			dia_mayor=i;

		}
		if (menor>temperatura[i]){
			menor=temperatura[i];
			dia_menor=i;
		}
	}

	promedio=promedio/DIAS;

	for (int i=0;i<DIAS;i++){  
		if(temperatura[i]>promedio){//Se compara la temperatura de cada día y si esta es superior al promedio se añade 1 a la variable que hace de contador
			dias_promedio++;
		}
	}
	printf("La temperatura promedio de la semana: %.1lfºC\n", promedio);
	printf("Temperatura más alta: %s %.1fºC\n",dias[dia_mayor],mayor);
	printf("Temperatura más baja: %s %.1fºC\n",dias[dia_menor],menor);
	printf("Número de dias con temperaturas superiores al promecio: %d\n", dias_promedio);
	printf("Días con temperaturas por debajo del promedio\n");
	
	for (int i=0;i<DIAS;i++){
	
		if (temperatura[i]<promedio){
		//El bucle compara la temperatura de cada día con el promedio y si esta es menor printea.
			printf("%s: %.1fºC\n",dias[i],temperatura[i]);
		}
	}



	return 0;
}
