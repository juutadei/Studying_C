#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

/*
	Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/

int main(){
	
	int mat[MAX][MAX], i, j;
	
	srand(time(NULL));
		
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			mat[i][j] = rand() % 10;
		}
	}
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDiagonal Principal:\n");
//	Imprimindo a diagonal principal
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(i == j){
				printf("%d ", mat[i][j]);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
//	Outra maneira
	printf("\n\nDiagonal Principal 2.0:\n");
	for(i = 0; i < MAX; i++)
		printf("%d ", mat[i][i]);
	
	return 0;
}
