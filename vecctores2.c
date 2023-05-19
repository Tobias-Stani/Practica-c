#include <stdio.h>

#define N 5

int main () {
	
	int VEC[N], I,i;
	
	int VECTOR[] = {1,2,3,4,5,65};
	
	for( I = 0; I<N; I++ ) {
		
		printf("\n VEC[%d] = ", I);
		scanf("%d", &VEC[I]); 
		
	}
	
	printf("\n\n");
	
	for ( I=0 ; I<N; I++ )
	
	printf("%3d", VEC[I]);
	
	
	printf("\n\n");
	
	sizeof(VECTOR);
	
	for(i=0; i < n; i++){
		printf ("VECTOR[%d] = %d \n", VECTOR[i])
	}
	
	
	
	return 0;
}