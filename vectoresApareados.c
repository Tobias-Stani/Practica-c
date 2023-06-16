#include <stdio.h>
#define N 10

void acceso(int[], char[], float[], int, int);
void mostrar(int[], char[], float[], int);
int buscar(int[], int, int);

int main() {
    int cuenta[N] = {432, 544, 322, 643, 754, 123, 532, 641, 866, 912};
    char tipo[N] = {'a', 'b', 'b', 'b', 'a', 'a', 'c', 'a', 'c', 'b'};
    float saldo[N] = {458.34, 236.45, 643.66, 754.54, 243.64, 912.43, 325.75, 123.55, 765.44, 992.33};

    int c;

    mostrar(cuenta, tipo, saldo, N);
    printf("\nNumero de cuenta a consultar: ");
    scanf("%d", &c);
    acceso(cuenta, tipo, saldo, N, c);

    return 0;
}

void mostrar(int cuenta[], char tipo[], float saldo[], int l) {
    int i;
    printf("\ncuenta \t tipo \t saldo \n\n");
    for (i = 0; i < l; i++)
        printf("%d \t %c \t %.2f \n\n", cuenta[i], tipo[i], saldo[i]);
}

//muestra los campos resultantes de la busqueda
void acceso(int cuenta[], char tipo[], float saldo[], int l, int c) {
    int pos;
    pos = buscar(cuenta, l, c);

    if (pos < 0)
        printf("\nNumero de cuenta inexistente\n");
    else {
        printf("%d %c %.2f\n", cuenta[pos], tipo[pos], saldo[pos]);
    }
}

//retorna la posicion de la cuenta buscada o -1
int buscar(int cuenta[], int l, int num) {
    int i;
    for (i = 0; i < l; i++) {
        if (cuenta[i] == num)
            return i;
    }
    return -1;
}
