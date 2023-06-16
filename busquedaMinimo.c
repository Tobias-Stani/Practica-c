#include <stdio.h>

int cambio (int [], int);

int main () {
	
	int vec[] = {9,5,3,4,1,2,7,6,};
    int tam = sizeof(vec) / sizeof(vec[0]);

    cambio(vec, tam);

    printf("Vector modificado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    return 0;
}

int cambio (int vec[], int l){
	
	int i, aux, posmin = 0;
	
	for (i=1 ; i<l ; i++)
		if (vec[i] < vec[posmin])
			posmin = i;
			
	// swapping
	
	aux = vec[0];
	vec[0] = vec[posmin];
	vec[posmin] = aux;
	
}

















