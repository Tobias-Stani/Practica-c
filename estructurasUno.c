#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	struct{
		
		short int num;
		char car;
		float f;
		
	} x, y;
	
	x.num = 912;
	x.car = 't';
	x.f = 9.1218;
	
	y = x;
	
	
	printf("\n\n tamanioi de x = %d\n", sizeof(x));
	
	printf("\n x.num: %d  x.car: %c  x.f: %.4f", x.num, x.car, x.f);
	
	printf("\n Y.num: %d  Y.car: %c  Y.f: %.4f", y.num, y.car, y.f);
	
}