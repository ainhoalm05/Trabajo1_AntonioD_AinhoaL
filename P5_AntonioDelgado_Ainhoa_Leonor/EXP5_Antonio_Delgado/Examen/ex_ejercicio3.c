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
	float temperatura[DIAS]= {23,12.5,201,24,15,20,-25.2} ;
	float promedio=0;
	float mayor;
	float menor;
	int dias_promedio=0;
	int dia_mayor,dia_menor;

	for (int i=0; i <DIAS; i++){
		/*como las temperaturas son estáticas esta parte no se usa
		printf("Introduce la temperatura del %s\n",dias[i]);
		scanf("%f", &temperatura[i]);*/

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

	//Fin del código original

	int eliminar[DIAS];//un array para marcar las temperaturas como atípicas
	float promedio_final=0;//promedio sin temperaturas atípicas
	int dias_promedio_final;//variable para guardar los días no atípicos
	
	for (int i=0;i<DIAS;i++){

		if (temperatura[i]<promedio){
			//El bucle compara la temperatura de cada día con el promedio y si esta es menor printea.
			printf("%s: %.1fºC\n",dias[i],temperatura[i]);
		}
	}


	for (int i=0; i <DIAS; i++){

		if (temperatura[i]<-10||temperatura[i]>45){
			eliminar[i]=1;//marca la temperatura del día como atípica

		}else{
			eliminar[i]=0;//marca la temperatura del día como normal
			dias_promedio_final++;//añade 1 al contador de días normales 
		}

		if(eliminar[i]==0){
			promedio_final+=temperatura[i];//calcula el total de la suma de los días normales
		}
	}
	promedio_final/=dias_promedio_final;//calcula el nuevo promedio y lo imprime
	printf("Nuevo Promedio: %.1fºC\n",promedio_final);

	return 0;
}
