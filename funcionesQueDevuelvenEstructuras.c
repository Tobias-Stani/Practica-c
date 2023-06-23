//funciones que retornan estructuras.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tipo global
	struct fecha{
		int dia;
		int mes;
		int anio;
		
	} ;
	
int  corregir(struct fecha);
	
int main () {
	
	struct fecha hoy;
	
	hoy.dia = 29;
	hoy.mes = 06;
	hoy.anio = 2023;
	
	printf("\n\n fecha = %2d : %2d : %2d", hoy.dia, hoy.mes, hoy.anio);
	
	hoy = corregir(hoy);
	
	
	printf("\n\n fecha corregida = %2d : %2d : %2d", hoy.dia, hoy.mes, hoy.anio);
	return 0;
}

void corregir(struct fecha h){

	if (h.dia == 29 && h.mes ==06) {
		h.dia = 1;
		h.dia = 11;
	}	
	
	return h;
	
}
