#include <stdio.h>

int main () {

//se ingresan numeros entereos positivos. Determinar cuantos de estos son pares,
//el ingreso finaliza con un numero negativo


//	int n;
//	
//	do{
//		
//		scanf("%d", &n);
//		
//		if(n % 2 == 0){
//			 printf("El numero %d es par\n", n);
//		} 
//		else {
//			 printf("El numero %d es impar\n", n);
//		}
//		
//	} while (n >= 0);



/* se ingresan 100 numeros enteros. sumarlos de orden impar  por un lado y por otro los impares. Determinar
cuales proporcionan la mayor suma. */

//	int i, n, sumPar=0, sumImpar=0;
//	
////	usuario ingresa los 100 numeros
//
//	for (i = 1; i <= 10; i++) {
//	
//		printf("\ningrese un numero %d: \n", i);
//		scanf("%d", &n);
//	 
////	 sumo por un lado los pares y por otro los impares
//
//		if(n % 2 == 0){
//		 
//		 sumPar += n ;
//		 
//		} 
//		else {
//		
//		sumImpar += n ;
//		
//		}
//	} 
//	
////   muestro la suma mayor
//
//	if ( sumPar > sumImpar ) {
//		
//	 printf("la suma de los pares es la mayor: %d \n", sumPar);
//	 
//	} 
//	 else {
//	 	
//	 printf("la suma de los impares es la mayor: %d\n", sumImpar);
//	 	
//	 }

	 
	 
/* ingresan numeros hasta el 235. indicar cuantas veces ocurrio el ingreso del numero 23*/

//	int i, contador=0, n;
//	
//
//	
//	for (i = 1; i <= 10; i++) {
//	
//		printf("\ningrese un numero %d: \n", i);
//		scanf("%d", &n);
//		
//		if ( n == 23 ) {
//			contador ++;
//		}
//		
//	} 
//
//		printf("\n las veces que se ingreso el 23 es de %d veces\n", contador);


// se ingresa una clave numerica y finaliza el ingreso cuando la clave sea 23645

//	int n, clave=23645;
//	
//	do{
//		
//		scanf("%d", &n);
//		
//		if(n == clave ){
//			 printf("la clave es correcta\n", n);
//		} 
//		else {
//			 printf("la clave es incorrecta \n", n);
//		}
//		
//	} while (n != clave);

// repetir el problema anterior permitiendo solo 3 intentos. luego de 3 intentos colocar una advertencia\


//	int clave, intentos = 0;
//
//    while (1) {
//        printf("Ingrese la clave: ");
//        scanf("%d", &clave);
//        
//        if (clave == 912) {
//            printf("Clave correcta! Acceso concedido.\n");
//            break;
//        }
//        
//        printf("Clave incorrecta. Intente nuevamente.\n");
//        intentos++;
//
//        if (intentos >= 3) {
//            printf("Ha excedido el numero maximo de intentos permitidos. Acceso denegado.\n");
//            break;
//        }
//    }


//determinar si un numero postitivo ingresado por teclado es o no un numero perfecto.

//    int num, i, sum=0;
//
//    printf("Ingrese un numero entero positivo: ");
//    scanf("%d", &num);
//
//    for (i = 1; i < num; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//
//    if (sum == num) {
//        printf("%d es un numero perfecto.\n", num);
//    }
//    else {
//        printf("%d no es un numero perfecto.\n", num);
//    }
//	
	
	
//mostrar los primeros 5 numeros perfectos


    int count = 0;  // Contador de números perfectos
    int num = 1;    // Primer número a verificar si es perfecto
    int i;          // Variable para el bucle

    printf("Los primeros 4 numeros perfectos son:\n");

    while (count < 5) {  // Mientras no se hayan encontrado 4 números perfectos
        int sum = 0;  // Suma de los divisores propios de num

        // Calcular la suma de los divisores propios de num
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {  // Si la suma de los divisores propios de num es igual a num, num es un número perfecto
            printf("%d\n", num);
            count++;
        }

        num++;  // Pasar al siguiente número
    }

	return 0;
	
}