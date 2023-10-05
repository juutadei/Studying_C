#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX1 5
#define MAX2 4

/*
	Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
	tela.
*/

int main(){
	
	int i, j, mat[MAX1][MAX2], matT[MAX2][MAX1];
	
	srand(time(NULL));
	
	for(i = 0; i < MAX1; i++){
		for(j = 0; j < MAX2; j++){
			mat[i][j] = rand() % 100;
		}
	}
	
	for(i = 0; i < MAX1; i++){
		for(j = 0; j < MAX2; j++){
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < MAX1; i++){
		for(j = 0; j < MAX2; j++){
			matT[j][i] = mat[i][j];
		}
	}
	
	
	printf("\nMatriz Transposta:\n");
	for(i = 0; i < MAX2; i++){
		for(j = 0; j < MAX1; j++){
			printf("%2d ", matT[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
