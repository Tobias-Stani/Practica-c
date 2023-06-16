#include <stdio.h>

int buscar (int[], int, int, int );

int main () {
	
	int vec[] = {1,2,3,4,5,6,7,8,9,10};
	int tam = sizeof(vec)/sizeof(vec[0]);
	int pos = buscar(vec, 9, 0, tam-1);
	
	if (pos != -1){
		printf("El dato se encuentra en la posicion %d \n", pos);
	} else {
		printf("El dato no se encuentra en el array \n");
	}
	
	return 0;
}

int buscar (int vec[], int dato, int inicio, int fin) {
	int mid;
	
	while (inicio <= fin) {
		mid = (inicio + fin) / 2;
			if (vec[mid] == dato) {
				return mid;
			} else if (dato < vec[mid] ) {
				fin = mid -1;
			} else {
				inicio = mid + 1;
			}
	} 
	return -1;
}