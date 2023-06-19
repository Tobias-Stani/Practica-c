#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[20];
    char nombreAlfabetico[20] = "";
    int i;

	for (i=0; i<10; i++){
		printf("\n\n ingrese la palabra: ");
		gets(string1);
		
		if (i == 0 || strcmp(string1, nombreAlfabetico) < 0) {
        strcpy(nombreAlfabetico, string1);
     }
	}
	

	
	printf("\n\n %s Es la primer palabra que iria en un ordenamiento alfabetico", nombreAlfabetico);
	
    return 0;
}
