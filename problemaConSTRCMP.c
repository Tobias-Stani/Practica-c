#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esPalindromo(const char *cadena);

int main(){
	
	char palabra [20];
	
	
	printf("\n ingrese la palabra: ");
	gets(palabra);
	
	if (esPalindromo(palabra)) {
        printf("Es un palindromo.\n");
    } else {
        printf("No es un palindromo.\n");
    }

}

int esPalindromo(const char *cadena) {
    int longitud = strlen(cadena);
    int i, j;

    // Comparamos los caracteres de la cadena desde ambos extremos
    for (i = 0, j = longitud - 1; i < j; i++, j--) {
        if (cadena[i] != cadena[j]) {
            return 0; // No es un palíndromo
        }
    }

    return 1; // Es un palíndromo
}
