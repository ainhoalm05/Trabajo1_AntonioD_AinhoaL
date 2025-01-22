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
        scanf("%f", &persona[i].nota);
        
    }    
    
    for (int i = 1; i <= n_estudiantes; i++)
    {
        for (int j = 0; j <= n_estudiantes-1; j++)
        {
            /* code */
        }
        
    }
    

	return 0;
}
