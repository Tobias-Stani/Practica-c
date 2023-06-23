#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define NUM     16
#define NUMNOTA 8




struct ALUMNO {
       char NOM[20];
       int NUMEROS[NUMNOTA];
       int PUNTOS ;
};


void CARGAR ( struct ALUMNO [] , int );
void MIRAR ( struct ALUMNO [] , int );
void ORDENAR ( struct ALUMNO [] , int , int );
float PROMEDIO ( struct ALUMNO );

int main()
{
    struct ALUMNO VEC[NUM];
    int I , VALOR ;
    
    srand(523);
    
    CARGAR( VEC , NUM );
    MIRAR ( VEC , NUM );
    
    for ( I = 0 ; I < 300 ; I++ ) {
          VALOR = 1+rand()%98 ;
          ORDENAR ( VEC , NUM , VALOR );
          system("cls");
          printf ( "\n\n\t\t%10d%10d\n\n",I+1 , VALOR );
          MIRAR ( VEC , NUM );
          sleep(1000);       
    }    printf("\n\n\n  FIN DEL PROGRAMA\n");
    getchar();
    return 0 ;    
}


void CARGAR ( struct ALUMNO V[] , int N )
{
    char NOM[][20] = {"TIZIANO","PAULA","ANGELICA","GERMAN",
                      "MARIANO","SILVINA","FEDERICO","FABRIZIO",
                      "TIMOTEO","VALENTINA","DAMIAN","NAHUEL",
                      "VALE","ALEJANDRO","CRISTIAN","JOEL"};   
     int NUMEROS[] = {15,7,39,9,49,53,95,77,
                      2,30,25,14,42,33,3,5,
                      4,11,22,39,41,53,66,71,
                      8,24,33,12,17,68,71,43,
                      1,2,4,5,6,7,19,23,
                      3,53,33,13,11,9,27,1,
                      0,0,0,0,0,0,0,0,
                      10,21,29,35,77,46,36,3,
                      3,6,23,44,60,93,37,10,
                      12,14,17,31,63,25,29,5,
                      11,22,33,44,55,66,77,88,
                      10,20,30,40,50,60,70,80,
                      2,9,83,22,14,53,60,29,
                      90,91,92,93,94,95,96,97,
                      68,34,99,9,44,41,16,49,
                      11,23,94,25,69,53,56,35
                      };
     int I , J , K = 0 ;
     for ( I = 0 ; I < N ; I++ ) {
           strcpy ( V[I].NOM , NOM[I] );    
           for ( J = 0 ; J < NUMNOTA ; J++ )
                 V[I].NUMEROS[J] = NUMEROS[K++];
           V[I].PUNTOS = 0 ;
     }
}



void MIRAR ( struct ALUMNO V[] , int N )
{
     int I , J ;
                
     for ( I = 0 ; I < N ; I++ ) {
           printf("\n\n\t%-12s    ", 
           V[I].NOM );
           for ( J = 0 ; J < NUMNOTA ; J++ )
                 printf("%4d" , V[I].NUMEROS[J] );
           printf("\t %d", V[I].PUNTOS);
     }
     
}



void ORDENAR ( struct ALUMNO V[] , int N , int VAL )
{
     int I , J ;
     struct ALUMNO AUX ;
     
     for ( I = 0 ; I < NUM ; I++ )
         for ( J = 0 ; J < 8 ; J++ )
             if ( V[I].NUMEROS[J] == VAL )
                  V[I].PUNTOS++ ;
     
    
     for ( I = 0 ; I < N-1 ; I++ )
           for ( J = 0 ; J < N-I-1 ; J++ )
                 if ( V[J].PUNTOS < V[J+1].PUNTOS ) {
                        /*  swapping  */
                        AUX    = V[J] ;
                        V[J]   = V[J+1] ;
                        V[J+1] = AUX ;
                 }
 }





  