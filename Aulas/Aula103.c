#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

/*
	Utilizando a função rand e srand para preencher uma matriz
*/

int main(){
	
	int mat1[MAX][MAX];
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			mat1[i][j] = 1 + rand() % 99;
		}
	}
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
