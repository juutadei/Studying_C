#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

/*
	Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
	em uma matriz C. Imprima as três matrizes.
*/

int main(){
	
	int matA[MAX][MAX], matB[MAX][MAX], matC[MAX][MAX];
	int i, j;
	
	srand(time(NULL));
	
//	Gerando a matriz A e B
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			matA[i][j] = 1 + rand() % 10;
			matB[i][j] = rand() % 10;
		}
	}
	
	//Somando as matrizes A e B
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
	
//	Imprimindo a matriz A
	printf("Matriz A:\n");
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%2d ", matA[i][j]);
		}
		printf("\n");
	}
	
	//Imprimino a matriz B
	printf("\nMatriz B:\n");
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%2d ", matB[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz C(soma das matrizes A e B):\n");
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%2d ", matC[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
