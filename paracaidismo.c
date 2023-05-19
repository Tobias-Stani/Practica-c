#include <stdio.h>
#include <math.h>

int ZONA ( int,int);
int CUADRADO (int);

int main () { 

	int CODIGO, x, y, PENALIZACIONES, codigomax;
	float puntaje=0, puntajemax=0;

do{
	
	printf("ingrese el codigo: \n");
	scanf("%d", & CODIGO);
	
	if(CODIGO >=0){
		
	printf("ingrese el cordenadas x e y: \n");
	scanf("%d %d", &x, &y);

	printf("ingrese cantidad de penalizaciones: \n");
	scanf("%d", &PENALIZACIONES);
		
	}
	
	if( ZONA (x,y) == 0 ) puntaje =50;
	if( ZONA (x,y) == 1 ) puntaje =40;
	if( ZONA (x,y) == 2 ) puntaje =30;
	
	
	if(PENALIZACIONES ==1 )
		puntaje = puntaje *0.75;
		
	if(PENALIZACIONES ==2 )
		puntaje = puntaje *0.50;
	
	
	
	if(puntaje > puntajemax) {
		codigomax = CODIGO;
		puntajemax = puntaje;
	}
	
} 

while (CODIGO >= 0);

	printf("el competidor ganador es codigo %d con %f puntos", codigomax, puntajemax);
	
	
	


	return 0;
}


int ZONA ( int x, int y ) {  //punto 1
	
	int area=3;
	float d;
	d= sqrt ( CUADRADO (x) + CUADRADO (y) );
	
	
	if (d <= 5)
		return 0;
			
	if( d > 5 && d <= 7.5 )
		return 1;
	
	if ( d > 7.5 && d <= 15 )
		return 2;
	
	if( d>15 )
		return 3;
  	
	
}

int CUADRADO (int num){   //punto 1
	return num * num;
}


















