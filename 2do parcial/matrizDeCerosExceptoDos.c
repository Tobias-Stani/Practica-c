#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 8
#define COLUMNAS 8

void generarMatriz(int matriz[][COLUMNAS]);
void mostrarMatriz(int matriz[][COLUMNAS]);

int main() {
    int matriz[FILAS][COLUMNAS];
    
    srand(7);  // Inicializar la semilla aleatoria
    
    generarMatriz(matriz);
    mostrarMatriz(matriz);
    
    return 0;
}

void generarMatriz(int matriz[][COLUMNAS]) {
    // Inicializar todos los elementos de la matriz a 0
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = 0;
        }
    }
    
    // Generar dos posiciones aleatorias para los elementos con valor 1
    int count = 0;
    while (count < 2) {
        int fila = rand() % FILAS;
        int columna = rand() % COLUMNAS;
        
        if (matriz[fila][columna] == 0) {
            matriz[fila][columna] = 1;
            count++;
        }
    }
}

void mostrarMatriz(int matriz[][COLUMNAS]) {
    printf("Matriz:\n\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%7d ", matriz[i][j]);
        }
        printf("\n");
    }
}
