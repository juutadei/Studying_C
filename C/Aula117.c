#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

/*
	Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
	matriz 4 x 4.
	
	   0   1   2   3
	0  85  13  20  35
	1  60  87  32  48 - 1, 0
	2  13  15  27  99 - 2, 1
	3   2  29  54  63 - 3, 2
*/

int main(){
	
	int i, j, mat[MAX][MAX];
	
	srand(time(NULL));
	
	for(i = 0; i < MAX; i ++){
		for(j = 0; j < MAX; j++){
			mat[i][j] = rand() % 100;
		}
	}
	
	printf("Matriz Original:\n");
	for(i = 0; i < MAX; i ++){
		for(j = 0; j < MAX; j++){
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nValores abaixo da diagonal principal:\n");	
	for(i = 1; i < MAX; i ++){
		for(j = 0; j < MAX; j ++){
			if(i > j){
				printf("%2d ", mat[i][j]);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
