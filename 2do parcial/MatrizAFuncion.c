#include <stdio.h>

#define filas 3
#define columnas 4

void cargar(int [][columnas], int , int ); 
void mirar(int [][columnas], int , int ); 

int main() {
    int mat[filas][columnas];
    
    cargar(mat, filas, columnas); 
    mirar(mat, filas, columnas);

    return 0;
}

void cargar(int m[][columnas], int f, int c) {
	
    // Carga de la matriz
    int i, j;
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) {
            printf("\n\t matriz[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
	
}

void mirar(int m[][columnas], int f , int c){
	
    // Impresión de la matriz
    int i, j;
    printf("\n\n\n\tImpresion de la matriz\n\n\n");
    for (i = 0; i < f; i++) {
//        printf("\n\t\t");
        for (j = 0; j < c; j++) {
            printf("%8d ", m[i][j]);
        }
    }
	
}