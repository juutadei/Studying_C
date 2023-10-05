#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX1 5
#define MAX2 5

/*
	Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

int main(){
	
	int i, j, vet[MAX1][MAX2];
	int soma = 0;
	
	srand(time(NULL));
	
	for(i = 0; i < MAX1; i ++){
		for(j = 0; j < MAX2; j++){
			vet[i][j] = 1 + rand() % 10;
			soma = soma + vet[i][j];
		}
	}
	
	for(i = 0; i < MAX1; i ++){
		for(j = 0; j < MAX2; j++){
			printf("%2d ", vet[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSoma de todos os elementos: %d\n", soma);
	
	return 0;
}
