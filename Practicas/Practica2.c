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



	printf("Introduce el número de estudiantes\n");
	scanf("%d",&cantidad_estudiantes);
	double nota[cantidad_estudiantes];//La inicializo después del scanf para saber la cantidad de alumnos y por lo tanto el tamaño del array
	for (int i=0;i<cantidad_estudiantes;i++){

		printf("Nota final del estudiante número %d\n",i+1);//i+1 porque el array empieza en 0
		scanf("%lf",&nota[i]);
		promedio+=nota[i];
		
		if (nota[i]>APROBADO){//calculamos el número de aprobados y suspensos comparando la nota con la constante APROBADO
			aprobados++;

		}else{
			suspensos++;

		}
	}

	promedio/=cantidad_estudiantes;

	printf("Promedio de notas: %.2lf\n",promedio);

	printf("Número de estudiantes aprobados: %d\n",aprobados);
	printf("Número de estudiantes suspensos: %d\n",suspensos);



//WIP
	// printf("Nota máxima: %.2lf (Estudiante en la posición %d)",nota[],)

		return 0;
}
