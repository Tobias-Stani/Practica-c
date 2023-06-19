#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define num 3
#define l 20

void cargar(char [][l], int);
void mostrar(char [][l], int);

int main (){
	
	char vs[num][l];
	
	cargar(vs, num);
	mostrar(vs, num);
	
}

void cargar(char v[][l], int n){
	int i;
	// Carga de datos
	for (i = 0; i < num; i++) {
		printf("\n\n NOMBRE: ");
		gets(v[i]);
	}

}

void mostrar(char v[][l], int n){
	int i;
	// Impresión de datos
	printf("\n\nImpresion de nombres\n");
	for (i = 0; i < num; i++) {
		printf("\n %s", v[i]);
	}
}

