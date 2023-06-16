#include <stdio.h>
#include <stdlib.h>

#define filas 3
#define columnas 3

void cargar(int [][columnas], int , int ); 
void mirar(int [][columnas], int , int ); 
int sumaDiagonal(int [][columnas], int );
int sumaDiagonalInvertida(int [][columnas], int );
int multiplicacionDiagonal(int [][columnas], int );

int main() {
    int mat[filas][columnas];
    srand(10);
    
    cargar(mat, filas, columnas); 
    mirar(mat, filas, columnas);
    
    int sumaDiagonales = sumaDiagonal(mat, 3);
    int sumaDiaglonalesInvertidas = sumaDiagonalInvertida(mat, 3);
    int multiplicacionDiagonales = multiplicacionDiagonal(mat, 3 ); 
	
	printf ("\n\n\n\n La suma de la diagonal principal es: %d\n", sumaDiagonales); 
	printf ("\n\n La suma de la diagonal secundaria es: %d\n", sumaDiaglonalesInvertidas); 
	printf ("\n\n La suma de la diagonal secundaria es: %d\n", multiplicacionDiagonales); 

    return 0;
}

void cargar(int m[][columnas], int f, int c) {
	
    // Carga de la matriz
    int i, j;
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) {
        	
        	//generar valores de la matriz.
         
            m[i][j] = rand() % 100;
        }
    }
	
}

void mirar(int m[][columnas], int f , int c){
	
    // Impresión de la matriz
    int i, j;
    printf("\n\n\n\tImpresion de la matriz\n\n\n");
    for (i = 0; i < f; i++) {
        printf("\n\n\t");
        for (j = 0; j < c; j++) {
            printf("%8d ", m[i][j]);
        }
    }
	
} 

int sumaDiagonal(int m[][columnas], int n){
	
	int suma = 0;
	int i;
	
	for(i=0; i < n; i++) {
		suma += m[i][i];
	}
	return suma;
}

int sumaDiagonalInvertida(int m[][columnas], int n) {
	
	int suma = 0;
	int i, j;
	
	for(i=0; i<n; i++){
		j = n - 1 - i;
		
		suma += m[i][j];
	}
	
	return suma;
	
}

int multiplicacionDiagonal (int m[][columnas], int n){
	
	int multiplicacion = 1;
	int i, j;
	
	for (i=0; i<n; i++){
		
		multiplicacion *= m[i][j];
	}
	return multiplicacion;
}

















