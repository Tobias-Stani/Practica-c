#include <stdio.h>
#define N 10

void ordenar(int[], char[], float[], int);
void mostrar(int[], char[], float[], int);

int main() {
    int cuenta[N] = {432, 544, 322, 643, 754, 123, 532, 641, 866, 912};
    char tipo[N] = {'a', 'b', 'b', 'b', 'a', 'a', 'c', 'a', 'c', 'b'};
    float saldo[N] = {458.34, 236.45, 643.66, 754.54, 243.64, 912.43, 325.75, 123.55, 765.44, 992.33};

    ordenar(cuenta, tipo, saldo, N);

    mostrar(cuenta, tipo, saldo, N);

    return 0;
}

void ordenar(int cuenta[], char tipo[], float saldo[], int l) {
    int i, j, auxint;
    char auxchar;
    float auxfloat;

    for (i = 0; i < l - 1; i++) {
        for (j = 0; j < l - i - 1; j++) {
            if (tipo[j] > tipo[j + 1]) {
                // Swapping
                auxint = cuenta[j];
                cuenta[j] = cuenta[j + 1];
                cuenta[j + 1] = auxint;

                auxchar = tipo[j];
                tipo[j] = tipo[j + 1];
                tipo[j + 1] = auxchar;

                auxfloat = saldo[j];
                saldo[j] = saldo[j + 1];
                saldo[j + 1] = auxfloat;
            }
        }
    }
}

void mostrar(int cuenta[], char tipo[], float saldo[], int l) {
    printf("\nCuenta\tTipo\tSaldo\n");
    for (int i = 0; i < l; i++) {
        printf("%d\t%c\t%.2f\n", cuenta[i], tipo[i], saldo[i]);
    }
}
