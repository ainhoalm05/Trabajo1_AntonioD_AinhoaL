#include <stdio.h>
#include <stdlib.h>

/**
 * Authors: Ainhoa Leonor y Antonio Delgado
 */

int esPrimo(int num) {
    if (num < 2) return 0;
    for (int j = 2; j * j <= num; j++) {//(int j = 2; j * j <= i ; ++j) comprueba la raiz cuadrada
        if (num % j == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Es primo
}

int main() {
    int m;
    printf("Ingresa el número límite : ");
    scanf("%d", &m);

    // Contar la cantidad de primos hasta m
    int contador = 0;
    for (int i = 2; i <= m; i++) {
        if (esPrimo(i)==1) {
            contador++;
        }
    }

    // Reservar memoria solo para los primos encontrados
    int *arr = (int *)malloc(sizeof(int) * contador);
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Almacenar los primos en el array
    int nPrimos = 0;
    for (int i = 2; i <= m; i++) {
        if (esPrimo(i)==1) {
            arr[nPrimos++] = i;
        }
    }

    // Imprimir los números primos
    printf("Números primos menores o iguales a %d:\n", m);
    for (int i = 0; i < contador; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberar memoria
    free(arr);

    return 0;
}
