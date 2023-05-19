#include <stdio.h>


int main () {
	
	int tiro, c=0, s=0, i, cTiros=0;
	
	printf("ingrese cuantos tiros va a realizar\n");
	scanf("%d", &cTiros);
	
	srand (time (0)); // inicializo la funcion rand 
	
	for (i= 0; i < cTiros; i++){
		
		
	tiro = rand()%2; // el %x genera valores entre 0 y x-1
	
	
	if(tiro == 0){
		
		printf("salio CARA %d \n", tiro);
		c++;
			
	}
	else {
		
		printf("salio ceca %d\n", tiro);
		s++;
	
	}
					
  }
	

	printf("\n slieron %d CARAS y %d CECAS  \n", c, s);

	
	float porcentajeCara = ((float) c / (float) (c + s)) * 100;
	float porcentajeCeca = ((float) s / (float) (c + s)) * 100;

	printf("\n Porcentaje de caras: %.2f", porcentajeCara);
	printf("\n Porcentaje de cecas: %.2f", porcentajeCeca);











return 0;	
}