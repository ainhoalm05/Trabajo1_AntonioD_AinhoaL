#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Authors: Ainhoa Leonor y Antonio Delgado
 */

// Definición de la estructura
typedef struct {
    char nombre[50];
    char apellido[50];
    float nota;
} Estudiante;

// Función para ordenar por nota (de mayor a menor) usando Bubble Sort
void ordenarPorNota(Estudiante *estudiantes, int n) {
    Estudiante temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (estudiantes[j].nota < estudiantes[j + 1].nota) {
                // Intercambiar
                temp = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = temp;
            }
        }
    }
}

// Función para ordenar por apellido (alfabéticamente) usando Bubble Sort
void ordenarPorApellido(Estudiante *estudiantes, int n) {
    Estudiante temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(estudiantes[j].apellido, estudiantes[j + 1].apellido) > 0) {
                // Intercambiar
                temp = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Solicitar el número de estudiantes
    printf("¿Cuántos estudiantes quieres introducir? ");
    scanf("%d", &n);

    // Reservar memoria dinámica para los estudiantes
    Estudiante *estudiantes = (Estudiante *)malloc(n * sizeof(Estudiante));
    if (estudiantes == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Leer los datos de cada estudiante
    for (int i = 0; i < n; i++) {
        printf("\nIntroduce los datos del estudiante %d\n", i + 1);
        printf("Nombre: ");
        scanf("%49s", estudiantes[i].nombre);
        printf("Apellido: ");
        scanf("%49s", estudiantes[i].apellido);
        printf("Nota: ");
        scanf("%f", &estudiantes[i].nota);
    }

    // Ordenar por nota de mayor a menor
    ordenarPorNota(estudiantes, n);

    // Mostrar estudiantes ordenados por nota
    printf("\nEstudiantes ordenados por nota (de mayor a menor):\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s - Nota: %.2f\n", estudiantes[i].nombre, estudiantes[i].apellido, estudiantes[i].nota);
    }

    // Ordenar por apellido alfabéticamente
    ordenarPorApellido(estudiantes, n);

    // Mostrar estudiantes ordenados por apellido
    printf("\nEstudiantes ordenados por apellido (alfabéticamente):\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s - Nota: %.2f\n", estudiantes[i].nombre, estudiantes[i].apellido, estudiantes[i].nota);
    }

    // Liberar la memoria reservada
    free(estudiantes);

    return 0;
}
