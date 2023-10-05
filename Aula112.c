#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX1 5
#define MAX2 7

/*
	Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
	a) some cada uma das linhas armazenando o resultado em um vetor;
	b) some cada uma das colunas armazenando o resultado em um vetor;
	c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/

int main(){

	int i, j, vet[i][j];
	int sumLinha[MAX1], sumColuna[MAX2], soma;
	
	srand(time(NULL));
	
	//Cria a matriz
	for(i = 0; i < MAX1; i++){
		for(j = 0; j < MAX2; j++){
			vet[i][j] = 1 + rand() % 100;
		}
	}
	
	//Imprime a matriz
	for(i = 0; i < MAX1; i++){
		for(j = 0; j < MAX2; j++){
			printf("%2d ", vet[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < MAX1; i++){
		soma = 0;
		for(j = 0; j < MAX2; j++){
			soma += vet[i][j];
		}
		sumLinha[i] = soma;
	}
	
	soma = 0;
	for(j = 0; j < MAX2; j++){
		soma = 0;
		for(i = 0; i < MAX1; i++){
			soma += vet[i][j];
		}
		sumColuna[j] = soma;
	}
	
	printf("\nSomas Linhas:");
	for(i = 0; i < MAX1; i++)
			printf("\nLinha %d: %d", i, sumLinha[i]);
	
	printf("\n\nSomas Colunas:");		
	for(j = 0; j < MAX2; j++)
		printf("\nColuna %d: %d", j, sumColuna[j]);

	return 0;
}
