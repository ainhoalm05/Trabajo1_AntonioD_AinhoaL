#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*
 *
 *  Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

#define NOMBRES 30
#define NOTAS 10

typedef struct {
    char nombre[NOMBRES];
    char apellido[NOMBRES];
    float nota[NOTAS];  
} Estudiante;

// Ordenar por nota de mayor a menor
void ordenarNotas(Estudiante *p, int n) {
    Estudiante temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (p[j].nota[0] < p[j + 1].nota[0]) {  // Comparar solo la primera nota
                 temp = p[j];    // Guardamos el estudiante actual en la variable temporal
                p[j] = p[j + 1];// Movemos el estudiante siguiente a la posición actual
                p[j + 1] = temp;// Colocamos el estudiante en la siguiente posición
            }
        }
    }
}

// Ordenar alfabéticamente por apellido
void ordenarAlfabeticamente(Estudiante *p, int n) {
    Estudiante temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(p[j].apellido, p[j + 1].apellido) > 0) { // Intercambiar si el primer apellido es mayor
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n_estudiantes;

    // Solicitar el número de estudiantes
    printf("Ingresa el número de estudiantes: ");
    scanf("%d", &n_estudiantes);

    Estudiante *persona = (Estudiante*)malloc(sizeof(Estudiante) * n_estudiantes);
    if (persona == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Recoger datos de los estudiantes
    for (int i = 0; i < n_estudiantes; i++) {
        printf("\nIngresa el nombre del estudiante: ");
        scanf("%s", persona[i].nombre);

        printf("Ingresa el apellido del estudiante: ");
        scanf("%s", persona[i].apellido);

        printf("Ingresa la nota del estudiante: ");
        scanf("%f", &persona[i].nota[0]);  // Guardamos solo en nota[0]
    }

    // Ordenar por nota
    ordenarNotas(persona, n_estudiantes);

    // Mostrar estudiantes ordenados por nota
    printf("\nEstudiantes ordenados por nota (de mayor a menor):\n");
    for (int i = 0; i < n_estudiantes; i++) {
        printf("%s %s : %.2f\n", persona[i].nombre, persona[i].apellido, persona[i].nota[0]);
    }

    // Ordenar por apellido alfabéticamente
    ordenarAlfabeticamente(persona, n_estudiantes);

    // Mostrar estudiantes ordenados por apellido
    printf("\nEstudiantes ordenados por apellido (alfabéticamente):\n");
    for (int i = 0; i < n_estudiantes; i++) {
        printf("%s %s \n", persona[i].nombre, persona[i].apellido ); // Se mantiene la nota
    }

    free(persona);
    return 0;
}
