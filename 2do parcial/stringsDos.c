#include <stdio.h>
#include <stdlib.h>

int main() {

	char string[20];

	printf("\n SCANF      INGRESE UNA FRASE: ");
	scanf("%s", string);
	
	printf("\n FRASE INGRESADA CON SCANF: ");
	puts(string);
	
	fflush(stdin);
	
	////////////////////////////////////////////
	
	printf("\n\n\n GETS       INGRESE UNA FRASE: ");
	gets(string);
	
	printf("\n FRASE INGRESADA CON GETS: ");
	puts(string);
	
}