#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 4
#define n 6


int main() {
	
	char vectorString [5][18];
	char nombres [][18] = {"tobias","lautaro","karina","sarah","fernando"};
	int i, j;
	
	strcpy(vectorString[0], "padua");
	strcpy(vectorString[1], "merlo");
	strcpy(vectorString[2], "ituzaingo");
	strcpy(vectorString[3], "lafe");
	strcpy(vectorString[4], "budge");
	
	
	for(i=0; i<5; i++){
		printf("\n %10s \t",vectorString[i]);
		
		for(j=0; j<18; j++){
			printf("%3c", vectorString[i][j]);
		}
	}
	
	printf("\n\n\n\n La asignacion directa de strings no deja basura \n\n\n\n");
	
	for(i=0; i<5; i++){
		printf("\n %10s \t",nombres[i]);
		
		for(j=0; j<18; j++){
			printf("%3c", nombres[i][j]);
		}
	}
	
} 