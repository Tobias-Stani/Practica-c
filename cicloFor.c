#include <stdio.h>

int main() {
	
	int N, acumulador = 0, promedio;
	
	for(int i = 0; i < 3; i ++) {
		printf("Ingrese un numero: ");
		scanf("%d", &N);
		
		acumulador += N;
		
	}
	
	promedio = acumulador / 3;
	
	printf("\n\n\ el promedio entre los numeros es %d: ", promedio);
	
}