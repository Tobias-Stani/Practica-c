#include <stdio.h>

#define N 5

int main () {
	
	int VEC[N], I;
	int SUMA, CUENTA;
	float PROM;
	int VEC1[5];
	int VECCOPIA [] = {1,2,3,4,5};


// copia de vectores	
	for(I = 0; I<5 ; I++)
		VEC1[I] = VECCOPIA[I]; 
		
		
	
	printf("VEC1: ");
    for (I = 0; I < 5; I++) {
        printf("%d ", VEC1[I]);
    }

    printf("\n");

    printf("VECCOPIA: ");
    for (I = 0; I < 5; I++) {
        printf("%d ", VECCOPIA[I]);
    }

    printf("\n");
// copia de vectores	
	
	
	printf("\t\n Ingreso de valores: \n\n\t");
	
	for(I = 0; I < N; I++){
		printf("\n VEC[%d] = ", I);
		scanf("%d" , &VEC[I]);
	}
	
	
	
	
		printf("Impresion de valores del vector: \t");
		
		for( I = 0; I < N; I++)
			printf("%4d", VEC[I]);		
			getchar(); getchar();
			
			
		printf("\t\n CALCULO DEL PROMEDIO \t\n");
		
		SUMA = 0;
		
		for( I = 0; I < N ; I++){
			
			SUMA = SUMA + VEC[I];
		}
		
		PROM = (float)SUMA / N;		
			
		printf("\t\n PROMEDIO = %.2f \t\n", PROM);
		getchar();
			
			
		printf("cantidad de valores que superan el promedio \t");
		
		CUENTA = 0;
		
		for( I = 0; I < N; I++)
			
			if(VEC[I] > PROM)	
				CUENTA++;
			
		printf("\t\n HAY %d VALORES QUE SUPERAN A %.2F \t\n",CUENTA, PROM);
		getchar();
			
			
			
			
			
			
			
			
			
			
			
			
			
	
		printf("\t\n Impresion inversa de valores del vector: \t\n");
		
		for( I = N-1; I >= 0 ; I--)
			printf("%6d", VEC[I]);		
			
			
		printf("\t\n Impresion de valores del vector INVERSOS: \t");
		
		for( I = 0; I < N; I++)
			printf("%6d", VEC[N-I-1]);		
			
	
	
	
	return 0; 
}