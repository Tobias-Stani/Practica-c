#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno {
    int leg;
    char sex;
    float prom;
};

#define NUM 11 

void cargar(struct alumno[], int);
void mirar(struct alumno[], int);

int main() {
    struct alumno vec[NUM];
    
    cargar(vec, NUM);
    mirar(vec, NUM);
    
    return 0;
}

void cargar(struct alumno v[], int n) {
    int i;
    
    printf("\n\nCarga de los datos\n\n");
    
    for (i = 0; i < n; i++) {
        v[i].leg = 1000 + rand() % 90000;
        v[i].sex = rand() % 2 ? 'M' : 'F';
        v[i].prom = 2 + (rand() % 801) / 100.0;
    }
}

void mirar(struct alumno v[], int n) {
    int i;
    
    printf("\n\nImpresion de datos\n\n");
    
    printf("\n\n\tLEGAJO \tSEXO \tPROMEDIO\n\n");
    
    for (i = 0; i < n; i++) {
        printf("\n\n\t%5d %5c %15.2f", v[i].leg, v[i].sex, v[i].prom);
    }
}
