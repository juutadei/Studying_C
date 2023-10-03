#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

/*
	Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main(){
	
	int mat[MAX][MAX], i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			mat[i][j] = 10 + rand() % 90;
		}
	}
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nDiagonal secundaria:\n");
	for(i = 0; i < MAX; i++)
		printf("%d ", mat[i][MAX - 1 - i]);
	
	return 0;
}
