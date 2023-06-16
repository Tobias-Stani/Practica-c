#include <stdio.h>

#define filas 3
#define columnas 4

int main() {
    int matriz[filas][columnas];
    int i, j;

    // Carga de la matriz
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("\n\t matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impresión de la matriz
    printf("\n\n\n\tImpresion de la matriz\n\n\n");
    for (i = 0; i < filas; i++) {
        printf("\n\t\t");
        for (j = 0; j < columnas; j++) {
            printf("%8d ", matriz[i][j]);
        }
    }

    return 0;
}
	