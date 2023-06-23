//pasaje de estructuras a funcion. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tipo global
	struct alfa{
		short int num;
		char car;
		float f;
		
	}x;
	
int  funcion(struct alfa  );
	
int main () {
	
	x.num = 912;
	x.car = 't';
	x.f = 9.1218;
	
	funcion (x);
		
}


int  funcion(struct alfa y ) {
	printf("\n Y.num: %d  Y.car: %c  Y.f: %.4f", y.num, y.car, y.f);
}