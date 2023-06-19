#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 4
#define l 10 

int main() {
	char vectorStrings[n][l];
	int i;

	// Carga de datos
	for (i = 0; i < n; i++) {
		printf("\n\n NOMBRE: ");
		gets(vectorStrings[i]);
	}

	// Impresión de datos
	printf("\n\nImpresion de nombres\n");
	for (i = 0; i < n; i++) {
		printf("\n\n %s \n", vectorStrings[i]);
	}

	return 0;
}
