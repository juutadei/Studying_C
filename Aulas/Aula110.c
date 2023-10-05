#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
/*
	Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
	após a ordenação.
*/

int main(){
	
	int i, aux, troca;
	int vet[MAX];
	
	srand(time(NULL));
	
	for(i = 0; i < MAX; i++)
		vet[i] = 1 + rand() % 999;
		
	for(i = 0; i < MAX; i++)
		printf("%3d ", vet[i]);
	printf("\n\n");
	
	do{
	    troca = 0;
		for(i = 0; i < MAX - 1; i++){
			if(vet[i] > vet[i + 1]){
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
				troca = 1;
			}
		}
	}while(troca);
	
	for(i = 0; i < MAX; i++)
		printf("%3d ", vet[i]);
	
	return 0;
}
