#include <stdio.h>
//construiur la funcion pot(int) que reciba un numero natural y retorne 2^N
//construir la funcion primo que reciba un numero entero P y retorne 1 si P es primo, y 0 si no lo es.
//hacer una funcion MERSSENNE que reciba un numero entero p, y retorne M = (2^p) -1
//hacer un programa que muestre los primeros 10 numeros primos, sus primeros correspondienters numeros M, e indicar si M tambien es primo

int esPrimo (int);
int pot (int);
int merssenne (int);

int main () {
	
	int p, cont=0, m;
	
	for(p=2; cont<10 ; p++) {
		
		if (primo (p) ==1) {
			
			
			m = merssenne (p);
			
			printf("con primo %d M= %d", p, m);
			
			cont++;
	    }
		   						
	}
	
 return 0;

}


int esPrimo (int num) {  // punto 2, retorna 1 si es primo 0 si no
	
	int i, esPrimo=1;
	
	for (i = 2; i < num; i++) {
		if (num % i == 0)
		
			return esPrimo=0;
	}
	
	return esPrimo;
	
}

int pot (int n) { // retorna 2^n
	
	int i, potencia = 1;
	
	for(i = 0; i < n; i++)
	  potencia = potencia *2;
	  
	return potencia;
	
}

int merssenne (int p) {  //retorna 2^p -1 

	int m;

	m = pot (p) -1; //(2^p) -1
	
	return m;
	
}


































