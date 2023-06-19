#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 10
#define l 20

void cargar(char [][l], char [], int [], int);
void mostrar(char [][l], char [], int [], int);

int main (){
	char nom[NUM][l];
	char sex[NUM];
	int nota[NUM];

	cargar(nom, sex, nota, NUM);
	mostrar(nom, sex, nota, NUM);
	return 0;
}

void cargar(char nom[][l], char s[], int num[], int n){
	// Carga de datos
	int i;

	char precarga[][l] = {"tobias","laura","fernando","jim","lautaro",
	"karina","facundo","bob","mike","pam"};

	char sexo[] = {'M','F','M','M','M','F','M','M','M','F'};

	for (i = 0; i < NUM; i++) {
		strcpy(nom[i], precarga[i]);
		s[i] = sexo[i];
		num[i] = 2 + rand()%9;
	}
}

void mostrar(char nom[][l], char s[], int num[], int n){
	// Impresión de datos
	int i;

	printf("IMPRESION DE DATOS");
	printf("\n\n\t %-15s %10s %10s", "NOMBRE", "SEXO", "NOTA");

	for (i = 0; i < n; i++) {
		printf("\n\n\t %-15s %10c %10d", nom[i], s[i], num[i]);
	}
}





