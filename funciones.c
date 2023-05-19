//encontrar el máximo de dos números:
//Escriba una función en C llamada "maximo" que tome dos argumentos enteros (num1 y num2)
// y devuelva el valor máximo entre los dos números. como lo resuelvo con una funcion

#include <stdio.h>


int POTENCIA (int, int); // punto 3 libro
int PRIMO (int); // punto 4 libro
int PRIMOS(int, int); // punto 5 libro
int PRIMOS_ENTRE_RANGOS (); //punto 6 libro 
int PERFECTO (int); // punto 7
void PRIMEROS_PERFECTOS (); //punto 7
int DIVISORES(int); //punto 8
int NUMEROS_AMIGOS(int,int); //punto 8
void siguiente_ascii(char); //punto 9



int main () {

	int X, Y, resultado, num, rango1, rango2, cant_primos;
	char caracter;
//	codigo para funcion potencia
	
//	printf("Ingrese 2 numeros: ");
//	scanf("%d %d", &X, &Y);
//
//	resultado = POTENCIA(X, Y);
//	
//	printf("\n\n El resultado de %d a la %d es %d", X, Y, resultado);
	
	
//	printf("Ingrese un numero: ");
//	scanf("%d", &num );
//	
//	if (PRIMO(num)) {
//		
//		printf("%d es primo \n", num);
//		
//	} else {
//		
//		printf("%d no es primo \n", num);
//		
//	}
//	
//	printf("Ingrese 2 numeros: ");
//	scanf("%d %d", &rango1, &rango2 );
//	
//	cant_primos = PRIMOS(rango1, rango2);
//	
//	printf("hay %d nuemros primos en el rango de %d y %d \n",cant_primos, rango1, rango2 );
	
//	cant_primos = PRIMOS_ENTRE_RANGOS();
//	
//	printf("hay %d nuemros primos en el rango de 1000 y 2000 \n",cant_primos );

//	printf("Ingrese un numero: ");
//	scanf("%d", &num );
//	
//	if(PERFECTO(num)){
//		
//        printf("%d es un numero perfecto\n", num);
//        
//    }else{
//    	
//        printf("%d no es un numero perfecto\n", num);
//    }
	
//	printf("Los primeros 5 numeros perfectos son:\n");
//    PRIMEROS_PERFECTOS ();

//    if (NUMEROS_AMIGOS(rango1, rango2)) {
//    	
//        printf("%d y %d son un par de numeros amigos.\n", rango1, rango2);
//        
//    } else {
//    	
//        printf("%d y %d NO son un par de numeros amigos.\n", rango1, rango2);
//        
//    }


    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    siguiente_ascii(caracter);
	
	return 0;

}

//funcion que calcule y retorne el valor de x a la y.

int POTENCIA (int base, int potencia) {
	
	int i, resultado=1;
	
	for (i=0; i < potencia; i++ ){
		resultado *= base;
	}
	
	return resultado;
}


//funcion primo que retorne 1 si el numero es positivo y 0 si no es primo

int PRIMO (int n){
	
	int i;
	
	if(n <= 1) {
		return 0;
	}
	
	for (i = 2; i < n; i++) {
		
		if(n % i == 0) {
			return 0;
		}
	}
	
	return 1;
}

// funcion que reciba 2 enteros y retorne la cantidad de numeros primos que hay en el 
//rango determinado por ellos

int PRIMOS (int inicio, int fin) {
	
	int i, contador = 0;
	
    for (i = inicio; i <= fin; i++) {
    	
        if (PRIMO(i)) {
        	
            contador++;
            
        }
    }
    
    return contador;
	
}


//funcion que muestra las cantidades de numeros primos que hay en el rango de 1000 A 2000 

int PRIMOS_ENTRE_RANGOS () {
	
		int i, contador = 0;
	
    for (i = 1000; i <= 2000; i++) {
    	
        if (PRIMO(i)) {
        	
            contador++;
            
        }
    }
    
    return contador;
	
}

// funcion que le envias un numero y te dice si es perfecto o no. 

int PERFECTO (int n){
	
    int i, sum = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
	
}

//funcion que muestra los primeros 5 numeros perfectos

void PRIMEROS_PERFECTOS () {
	
	int num = 2;
    int contador = 0;
    
    while(contador < 5) {
    	
        if(PERFECTO(num)) {
        	
            printf("%d ", num);
            
            contador++;
        }
        
        num++;
        
    }
	
}


//funcion que recibe 2 enteros y retoran 1 si estos son un par de numeros amigos y 0 si no los son

int DIVISORES(int n) {
	
    int i, sum = 0;

    for (i = 1; i < n; i++) {
    	
        if (n % i == 0) {
        	
            sum += i;
            
        }
    }

    return sum;
}

int NUMEROS_AMIGOS(int x, int y) {
	
    if (DIVISORES(x) == y && DIVISORES(y) == x) {
    	
        return 1;
        
    } else {
    	
        return 0;
        
    }
}


// funcion que lea un caracter y lo escriba en pantalla colocando el caracter cuyo codigo ascii es el 
//siguiente al recibido.

void siguiente_ascii(char c) {
	
    printf("El siguiente caracter ASCII de %c es %c\n", c, c+1);
    
}








