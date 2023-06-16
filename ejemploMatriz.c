#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

int main() {
    int matriz[FILAS][COLUMNAS];

    // Inicializar la matriz con valores
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = i + j;
        }
    }

    // Acceder a los elementos de la matriz
    printf("Elementos de la matriz:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

