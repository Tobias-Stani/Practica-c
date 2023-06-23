/*
Desarrolla un programa en C que permita gestionar el registro de empleados de una empresa. El programa debe tener las siguientes funcionalidades:

a) Permite al usuario ingresar los datos de 5 empleados. Cada empleado debe tener un número de empleado, nombre, salario y edad. listo

b) Calcula y muestra en pantalla el promedio de salarios de todos los empleados. listo

c) Determina y muestra en pantalla el empleado de mayor edad.

d) Ordena los empleados por número de empleados en orden ascendente y muestra la lista ordenada en pantalla.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno {
    int numEmpleado;
    char nombre[20];
    int salario;
    int edad;
};

#define NUM 5

int cargaDatos (struct alumno [], int );
void empleadoMayor(int edades[], int );

int main () {
	struct alumno vec[NUM];
	
	cargaDatos(vec, NUM);
	
	int mayorEdad = empleadoMayor(vec, NUM);
	printf("\n\nEl empleado de mayor edad tiene %d años", vec[mayorEdad].edad);


	
	return 0; 
}

int cargaDatos (struct alumno v[], int n) {
	
    int i;
    int totalSalarios = 0;
    int edades[n];
    
    printf("\n\nCarga de los datos\n\n");
    
    for (i = 0; i < NUM; i++) {
    	
		printf("NUMERO EMPLEADO: ");
		scanf("%d", &v[i].numEmpleado);
		
		printf("NOMBRE: ");
		scanf("%s", &v[i].nombre);
		
		printf("SALARIO: ");
		scanf("%d", &v[i].salario);
		
		printf("EDAD: ");
		scanf("%d", &v[i].edad);
		
		totalSalarios += v[i].salario;
		edades[i] = v[i].edad;

    }
	
	float promedioSalarios = (float)totalSalarios / 5;
	
	printf("\n El promedio de los slarios es: %.2f", promedioSalarios);
	
	empleadoMayor(edades, n);
	
}

int empleadoMayor(int edades, int NUM){
	
	int i, posmax = 0;
	
	for(i=0; i<NUM; i++){
		if(edades[i] > edades[posmax]){
			posmax = i;
		}
	}
	
	return posmax;

}
