#include <stdio.h>
#include <stdlib.h>

/**
 * Authors: Ainhoa Leonor y Antonio Delgado
 */

int main() {
    int n, m, suma = 0;

    // Pedir dimensiones
    printf("Filas: ");
    scanf("%d", &n);
    printf("Columnas: ");
    scanf("%d", &m);

    int matriz[4][8]; // Declarar matriz estática


    // Calcular la suma del contorno
    // Primera fila
    for (int j = 0; j < m; j++) {
        suma += matriz[0][j];
    }


    // Mostrar la suma del contorno
    printf("\nLa suma del contorno es: %d\n", suma);

    return 0;
}
