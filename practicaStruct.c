#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 2

struct producto {
    int codigo;
    char descripcion[40];
    int precio;
};

void cargar(struct producto vec[tam]) {
    int i;

    for (i = 0; i < tam; i++) {
        printf("Ingrese el codigo del producto: ");
        scanf("%d", &vec[i].codigo);
        fflush(stdin);

        printf("\nIngrese la descripcion: ");
        gets(vec[i].descripcion);

        printf("\nIngrese el precio: ");
        scanf("%d", &vec[i].precio);
        fflush(stdin);
    }
}

void imprimir(struct producto vec[tam]) {
    int i;

    for (i = 0; i < tam; i++) {
        printf("%d \t %s \t %d \n", vec[i].codigo, vec[i].descripcion, vec[i].precio);
    }
}

void precioMayor(struct producto vec[tam]) {
	
	int pos = 0;
	int i;
	
	for(i=1; i<tam; i++){
		
		if(vec[i].precio > vec[pos].precio){
			pos = i;
		}
		
	}
	
	printf("\n EL PRODUCTO MAS CARO ES de %d", vec[pos].precio);
	
}

int main() {
    struct producto vec[tam];
    
    
    cargar(vec);
    imprimir(vec);
    precioMayor(vec);

    return 0;
}



