#include <stdio.h>

int VERIFICACION (float,int,int,int);
int COSTO_ENVIO (float,int,int,int);

int main (){
	
	float PESO;
	int ANCHO, ALTO, PROFUNDIDAD;
	
	printf("ingrese el peso de su paquete: ");
	scanf("%f", &PESO);
	
	printf("\n ingrese el ancho, alto y la profundidad del paqute: ");
	scanf("%d %d %d", &ANCHO, &ALTO, &PROFUNDIDAD);
	
	if (VERIFICACION(PESO, ANCHO, ALTO, PROFUNDIDAD)) {
		
		printf("El paquete es apto para ser enviado\n");
		printf("El costo de envio es: %.2f\n", COSTO_ENVIO(PESO, ANCHO, ALTO, PROFUNDIDAD));
		
	} else {
		printf("El paquete NO es apto para ser enviado\n");
	}
	
}

int VERIFICACION (float p, int an, int al, int prof) {
	
    if (p > 20 || an > 100 || al > 100 || prof > 100) {
        return 0;
    } else {
        return 1;
    }
	
}

int COSTO_ENVIO (float p, int an, int al, int prof) {
	
	int costo_base = 80;
    int costo_peso = 0;
    int costo_volumen = 0;

    // Verificar si el peso es mayor a 20kg
    if (p > 20) {
        printf("Error: El peso no puede ser mayor a 20 kg.\n");
        return -1;
    }

    // Verificar si alguna dimensión es mayor a 100cm
    if (an > 100 || al > 100 || prof > 100) {
        printf("Error: Ninguna dimensión puede ser mayor a 100cm.\n");
        return -1;
    }

    // Calcular costo por peso
    if (p > 5) {
        costo_peso = 40 * (p - 5);
    }

    // Calcular costo por volumen
    float volumen = an * al * prof;
    if (volumen > 50 * 50 * 50) {
        costo_volumen = costo_base * 0.3;
    }

    return costo_base + costo_peso + costo_volumen;
	
}