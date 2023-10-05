#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

/* Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não. */

int main(){
	
	int i, j, vet[TAM][TAM] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
	int total, soma, falhou = 0;
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%2d ", vet[i][j]);
		}
		printf("\n");
	}
	
	//Soma da diagonal principal
	soma = 0;
	for(i = 0; i < TAM; i++)
		soma += vet[i][i];
	printf("\nSoma Diagonal Principal: %d\n", soma);
	
	total = soma;
		
	//Soma da diagonal secundaria
	soma = 0;
	for(i = 0; i < TAM; i++)
		soma += vet[i][TAM - 1 - i];
	printf("\nSoma Diagonal Secundaria: %d\n", soma);
	
	if(total != soma){
		printf("\nDiagonal secundaria diferente!\n");
		falhou = 1;
	}
	
	printf("\n");
	//Soma das linhas
	for(i = 0; i < TAM; i++){
		soma = 0;
		for(j = 0; j < TAM; j++)
			soma += vet[i][j];
		printf("Soma da linha %d: %d\n", i, soma);
		
		if(total != soma){
			printf("A linha %d eh diferente.\n", i);
			falhou = 1;
		}
	}
	
	printf("\n");
	//Soma das colunas
	soma = 0;
	for(j = 0; j < TAM; j++){
		soma = 0;
		for(i = 0; i < TAM; i++)
			soma += vet[i][j];
		printf("Soma da coluna %d: %d\n", j, soma);
		
		if(total != soma){
			printf("A coluna %d eh diferente.\n\n", j);
			falhou = 1;
		}
	}
	
	if(falhou)
		printf("\nNao eh um quadrado magico\n");
	else
		printf("\nEh um quadrado magico\n");
	
	return 0;
}
