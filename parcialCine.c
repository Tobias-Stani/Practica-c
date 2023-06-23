#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define F 4 
#define C 6 

struct sala {
	int codigo;
	int butaca [F][C];
	char peli[30]
} x;

int cargaStruct (); 



int main () {
	
	struct sala vec[F][C];
	
	cargaStruct (); 
	
	printf("\tDatos de la sala:\n\n");
    printf("Codigo: %d\n", x.codigo);
    printf("Pelicula: %s\n\n", x.peli);
    printf("\tEstado de las butacas:\n\n");
    
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", x.butaca[i][j]);
        }
        printf("\n");
    }

    return 0;
	
	
}

int cargaStruct () {
	
//	srand(9);
	x.codigo = 123;
	
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            x.butaca[i][j] = rand() % 2; 
        }
    }
	
	strcpy(x.peli, "Cars");

	
}


//int masVista(struct sala vec[4]){ //retorna codigo de sala mas concurrida.
//	
//}
//
//int buscarPeli(struct[4], char titulo[30]){ // retorna el codigo de la sala en la que se proyecta o -1 si no esta.
//	
//}