#include <stdio.h>

void burbujeo (int[], int);

int main() {
	int vec[] = {3,4,5,2,1,7,6,8,9};
	int tam = sizeof(vec) / sizeof(vec[0]);
	
	burbujeo(vec, tam);
	
	printf("vector ordenado por burbujeo: ");
		for(int i = 0; i < tam; i++){
			printf("%d - ", vec[i]);
		}
		
		return 0;
}

void burbujeo (int vec[], int l) {
	int i, j;
	int aux;
	
	for (i = 0; i < l - i - 1; i++) 
		for (j = 0; j < l - i - 1; j++)
			if(vec[j] > vec[j+1]) {
				// swapping
				
				aux = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = aux;
			}
}