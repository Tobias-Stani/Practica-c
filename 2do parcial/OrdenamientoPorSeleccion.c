#include <stdio.h>

void seleccion(int[], int);

int main() {
    int vec[] = {3, 4, 5, 2, 10, 1, 7, 6, 8, 9};
    int tam = sizeof(vec) / sizeof(vec[0]);
    
    seleccion(vec, tam);
    
    printf("Vector ordenado por seleccion: ");
    	for (int i = 0; i < tam; i++) {
        	printf("%d ", vec[i]);
    }
    return 0;
}
void seleccion (int vec[], int l){
	
	int i, posmin;
	int aux, prim;
	
	for(prim = 0 ;prim < l-1 ;prim++) {
		posmin = prim;
	
		for(i = prim + 1; i < l; i++) { //busqueda del minimo
			if(vec[i] < vec[posmin]){
				posmin = i;
			}
		}	
		aux = vec[prim];
		vec[prim] = vec[posmin];
		vec[posmin] = aux;	
    }
}
