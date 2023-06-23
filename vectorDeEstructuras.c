//vector de estructuras.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tipo global
	struct alumno{
		int leg;
		char sex;
		float prom;
	} ;

#define N 2


int main () {
	struct alumno vec[N];
	int i;
	
	printf("\n\n carga de los datos \n\n");
	
	for(i=0; i<N; i++){
		
	printf("\n LEGAJO: ");
	scanf("%d", &(vec[i].leg));
	
	fflush(stdin);
	
	printf("\n SEXO: ");
	vec[i].sex = getchar();
	
	printf("\n PROMEDIO: ");
	scanf("%f", &(vec[i].prom));
		
	}
	
	//impresion de los datos
	
	printf("\n\n IMPRESION DE DATOS \n\n");
	
	printf("\n\n LEGAJO \t SEXO \t PROMEDIO  \n\n");
	
	for(i=0; i<N; i++){
		
	printf("\n\n %10d %10c %10f", vec[i].leg, vec[i].sex, vec[i].prom );
		
	}
	
	
}




























