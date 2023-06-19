#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int i;
	char string [20];
	char nombreMasLargo[20] = "";
	

	for(i=0; i<5; i++){
		printf("\n\n INGRESE UN NOMBRE: \n");
		gets(string);
		
		if(strlen(string) > strlen(nombreMasLargo)){
			strcpy(nombreMasLargo, string);
		}
	}
	
	printf("EL NOMBRE MAS LARGO ES: %s", nombreMasLargo);
	
return 0;

}

	