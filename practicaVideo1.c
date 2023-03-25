#include <stdio.h>
#include <math.h>

int main() {
	
//	Perimitir el ingreso del radio e imprimir en pantalla la longitud de la circunferencia y la superficie del circulo correspondiente

	
// 	float pi=3.14, l, s, r;
// 	
// 	 printf("ingrese el radio:");
// 	 scanf("%f", &r);
//	  
//	  s = pi * r*2;
//	  
// 	 printf("\nla superficie del circulo es: %f", s);
// 	 
// 	 
// 	 l = 2 * pi * r;
// 	 
// 	  
// 	 printf("\n\n la longitud de la circunferencia es: %f", l);
 	 
 	 
////////////////////////////////////////////////////////////////
	   
// Ingresar 3 valores enteros y calcular su promedio.

//    int n1, n2, n3, p;
//    
//    printf("ingrese el valor del valor 1: ");
//    scanf("%d", &n1);
//    
//    printf("\ningrese el valor del valor 2: ");
//    scanf("%d", &n2);
//    
//    printf("\ningrese el valor del valor 3: ");
//    scanf("%d", &n3);
//    
//    p = (n1 + n2 + n3 )/ 3;
//    
//    printf("\n el promedio es: %d", p);
    
////////////////////////////////////////////////////////////////

//	 realizar un programa que permita el ingreso de las diagonales de un rombo y muestre el valor de su superficie

//	float d1, d2, s;
//	
//	printf("ingrese la diagonal 1:");
// 	scanf("%f", &d1);
// 	
//	printf("ingrese la diagonal 2:");
// 	scanf("%f", &d2);
// 	
// 	s = (d1*d2) / 2;
// 	
// 	printf("la superficie del rombo es %f:", s);

////////////////////////////////////////////////////////////////

//ingreso de un valor de temperatura y muestre los valores equivalentes en las 3 escalas. dado que no se sabe en que escala se ingreso el valor debran contemplar los 3 casos

//	float t, c,f,k;
//	
//	printf("\\\\\\\\\\\\\\\\\\\\calculador de temperatura en 3 escalas//////////////\n\n");
//
//	
//	printf("ingrese el valor de temperatura:");
// 	scanf("%f", &t);
// 	
// 	c=t;
// 	
// 	printf("ingrese el valor de temperatura en celcius es %f: \n", c);
// 	
// 	f= (c*1.8) + 32;
// 	
// 	printf("ingrese el valor de temperatura en Farenheit es %f \n:", f);
// 	
// 	k= c + 273.15;
// 	
// 	printf("ingrese el valor de temperatura en Farenheit es %f:", k);
 	
 	
//////////////////////////////////////////////////////////////////////////////////
 	
 	
//	permitir el ingreso de la supeprficie de un circulo y determinar su diamentro utlizando la funcuin sqrt

//	float s, d, pi=3.14;
//	
//	printf("ingrese el valor de la superficie:");
// 	scanf("%f", &s);
//	
//	s= 2 * sqrt(s/pi);
//
//	printf("ingrese el valor de la superficie: %f", s);


////////////////////////////////////////////////////////////////////////////////////////

//permitir el ingreso de 5 letras que componen una palabra. al finalizar mostrar en pantalla la palabra formada por los codigos ascii de cada letra a los que se le sumo el valor 5

////////////////////////////////////////////////////////////////////////////////////////

// dibujar en pantalla un triangulo rectangulo, utilizando asateriscos 

//	printf("*\n");
//	printf("**\n");
//	printf("***\n");
//	printf("****\n");
//	printf("*****\n");
//	
//	printf("\n     *");
//	printf("\n    **");
//	printf("\n   ***");
//	printf("\n  ****");
//	printf("\n *****");

//////////////////////////////////////////////////////////////////////////////////////////

//ingresar el total de una factura y el porcentaje a descontar, mostrar en pantalla el precio final.

//	float F, D, C;
//	
//	printf("ingrese el valor de factura:");
// 	scanf("%f", &F);
// 	
//	printf("ingrese el porcentaje de descuento:");
// 	scanf("%f", &D);
// 	
// 	C = (D / 100) * F;	
// 	
// 	printf("\n\nEl descuento es de: %f \n ", C);
// 	
// 	C = F - C;
// 	
// 	printf("El precio final es de: %f", C);
	
////////////////////////////////////////////////////////////////////////////////////////////
	
//////////////////////////////////////	CONTROL DE FLUJO ///////////////////////////////////
	
	int a=18, b=40;
	
	if( a > b)
		
		printf("\n\n %d es mayor que %d", a, b);
		
	 else 
		
		printf("\n\n %d es menor o igual que  %d", a, b);
		
		printf("\n\n\n\n");
		
	
	
	return 0;
}