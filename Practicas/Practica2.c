#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

#define APROBADO 5.0

int main (){

	int cantidad_estudiantes;
	double promedio;
	int aprobados=0, suspensos=0 ;
	double maximo,minimo;
	int posicion_maximo,posicion_minimo;


	printf("Introduce el número de estudiantes\n");
	scanf("%d",&cantidad_estudiantes);
	
	double nota[cantidad_estudiantes];//Inicializo después de obtener el número de estudiantes para que el array tenga un tamaño que pueda contener todos los alumnos sin importar la cantidad 
		for (int i=0;i<cantidad_estudiantes;i++){

		printf("Nota final del estudiante número %d\n",i+1);//i+1 porque el array empieza en 0 pero el primer alumno es el número 1
		scanf("%lf",&nota[i]);
		promedio+=nota[i];

		if (nota[i]>=APROBADO){//calculamos el número de aprobados y suspensos comparando la nota con la constante APROBADO
			aprobados++;

		}else{
			suspensos++;

		}
	}

	promedio/=cantidad_estudiantes; //calculamos el promedio dividiendo la suma de notas entre la cantidad de estudiantes

	printf("Promedio de notas: %.2lf\n",promedio);

	printf("Número de estudiantes aprobados: %d\n",aprobados);
	printf("Número de estudiantes suspensos: %d\n",suspensos);


	for (int i=0;i<cantidad_estudiantes;i++){
		if (i==0){ //Hago que la primera nota sea tanto el máximo como el mínimo para cubrir cualquier tipo de nota, incluyendo notas negativas en caso de haberlas
			maximo=nota[i];
			minimo=nota[i];
		}
		if (nota[i]>maximo){ //Si la nota es mayor que el máximo actual esta pasa a ser el nuevo máximo
			maximo=nota[i];
			posicion_maximo=i;//Guardo la posición de la nota máxima y mínima para luego
		}
		if (nota[i]<minimo){ //Si la nota es menor que el mínimo actual esta pasa a ser el nuevo mínimo
			minimo=nota[i];
			posicion_minimo=i;
		}
	}

	printf("Nota máxima: %.2lf (Estudiante en la posición %d)\n",maximo,posicion_maximo+1);//posicion_maximo+1 por la misma razón que antes. El array empieza en 0 pero el primer alumno es el 1
	printf("Nota mínima: %.2lf (Estudiante en la posición %d)\n",minimo,posicion_minimo+1);


	printf("Notas por encima del promedio: \n");
	for (int i=0;i<cantidad_estudiantes;i++){

		if (nota[i]>promedio){
			printf("Estudiante en la posición %d: %.2lf\n",i+1,nota[i]);
		}
	}




	return 0;
}
