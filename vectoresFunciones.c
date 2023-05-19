#include <stdio.h>

#define N 6

int main() {

	int vector[] = {6,3,5,2,4,1};

	
	for (int i = 0; i < 5; i++) {
		
		for (int j = i + 1; j < 6; j++) {
			
			if(vector[i] < vector[j]) {
				
				int aux = vector[i];
				vector[i] = vector [j];
				vector [j] = aux;
				
			}
			
		}
		
	}


	for (int i = 0; i < 6; i++) {
		printf("%d\n", vector[i]);
	}
    
    
    return 0;
}



 