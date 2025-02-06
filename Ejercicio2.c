#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
#define NOMBRES 30
#define NOTAS 10
 
typedef struct{
    char nombre[NOMBRES];
    char apellido[NOMBRES];
    float nota[NOTAS];
}Estudiante;

int main (){
int n_estudiantes;
    printf("Ingresa el numero de estudiantes: ");
    scanf("%d",&n_estudiantes);


    Estudiante * persona=(Estudiante*)malloc(sizeof(Estudiante)*n_estudiantes); //Guardamos los libros en memoria dinamica
    for (int i = 1; i <= n_estudiantes ; i++)
    {
        printf("Ingresa el nombre del estudiante: ");
        scanf("%s", persona[i].nombre);

        printf("Ingresa el apellido del estudiante: ");
        scanf("%s", persona[i].apellido);

        printf("Ingresa la nota del estudiante: ");
        scanf("%f", &persona[i].nota[0]);
        
    }    
    
    for (int i = 0; i < n_estudiantes; i++) {
        printf("%s %s - Nota: %.2f\n", persona[i].nombre, persona[i].apellido, persona[i].nota[0]);
    }
    // Mostrar los números ordenados
   /* printf("Los números ordenados de mayor a menor son:\n");
    for (int i = 0; i < n_estudiantes; i++) {
        printf("%.2f\n", numeros[i]);

    }*/

	return 0;
}
