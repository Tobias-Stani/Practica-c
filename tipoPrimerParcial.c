#include <stdio.h>

//Primer parcial 

int PRIMO (int);
int PERFECTO (int);
int POTENCIA (int);
int EUCLIDES (int);


int main () {
	
	int n1;
	
	printf("ingrese un numero: \n");
	scanf("%d", &n1);
	
	
//	if( PRIMO(n1) ){
//		
//		printf("el numero es primo");
//		
//	} else {
//		
//		printf("el numero no es primo");
//	}
	
	
	
//	if(PERFECTO(n1)){
//		printf("El numero es perfecto");
//	}else {
//		printf("el numero no es perfecto");
//	}
//	
	
	printf("el resultado de la potencia es %d \n", POTENCIA(n1));
	

	printf("El resultado de la funcion EUCLIDES es: %d\n", EUCLIDES(n1));

}

int PRIMO (int n) {
	
	int i;
	
	if (n == 0 || n == 1) return 0;

 	if (n == 4) return 0;
 	
  	for (i = 2; i < n / 2; i++) {

    	if (n % i == 0) return 0;
    
  }
  // Si no se pudo dividir por ninguno de los de arriba, sí es primo
  return 1;
	
}


int PERFECTO (int n) {
	
	int i, sum = 0;
	
	for( i =1; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	
	if (sum == n) 
		return 1;
	else
	    return 0;	
}


int POTENCIA (int p) {
	
	int i, resultado=1;
	
	for(i = 0; i < p; i++){
		
		resultado *= 2;
		
	}
	
	return resultado;
	
}


int EUCLIDES (int p) {
	
	return POTENCIA(p -1 * 2);
	
}

















