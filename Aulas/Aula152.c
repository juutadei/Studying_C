#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Como alocar uma matriz dinamica
	
	-  vetor de vetores -> int* -> 10 27 32
						   int* -> 11 75 49
						   int* -> 30 45 37
						   int* -> 13 58 08
						   
	Como liberar memoria de uma matriz no final
*/

int main(){
	int **mat, i , j;
	
	srand(time(NULL));
	
	mat = malloc(4 * sizeof(int*));
	
	for(i = 0; i < 4; i++)
		mat[i] = malloc(3 * sizeof(int));
		
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			 *(*(mat + i) + j) = 1 + rand() % 50;
		//	mat[i][j] = 1 + rand() % 50;
		}
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("%2d ", *(*(mat + i) + j));
			//printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++)
		free(mat[i]);
	free(mat);
	
	return 0;
}
