#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define num 10
#define l 20

void cargar(char [][l], int);
void mostrar(char [][l], int);
void ordenar(char [][l], int);

int main (){
	
	char vs[num][l];
	
	cargar(vs, num);
	printf("Nombres sin ordenar:\n\n");
	mostrar(vs, num);
	ordenar(vs, num);
	printf("\nNombres ordenados:\n\n");
	mostrar(vs, num);
	
	return 0;
}

void cargar(char v[][l], int n){
	// Carga de datos
	int i;
	
	char precarga[][l] = {"tobias","laura","fernando","jim","lautaro",
	"karina","facundo","bob","mike","pam"};
	
	for (i = 0; i < num; i++) {
		strcpy(v[i], precarga[i]);
	}
}

void mostrar(char v[][l], int n){
	// Impresión de datos
	int i;
	for (i = 0; i < num; i++) {
		printf("%s\n", v[i]);
	}
}

// Ordenamiento burbuja para strings.
void ordenar(char v[][l], int n){
	int i, j;
	char aux[l];
	
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (strcmp(v[j], v[j+1]) > 0) {
				
				strcpy(aux, v[j]);
				strcpy(v[j], v[j+1]);
				strcpy(v[j+1], aux);
				
			}
		}
	}
}







 