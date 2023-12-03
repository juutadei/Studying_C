#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define TAM 10
/*
	Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
	endereço de cada posição do array.
*/

void imprimeArr(int vet[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		printf("Endereco do vet: %p\tValor: %d\n", vet + i, *(vet + i));
	}
}

int main(){
	
	int v[TAM], i;
	
	srand(time(NULL));
	
	for(i = 0; i < TAM; i++)
		v[i] = 1 + rand() % 20;
		
	for(i = 0; i < TAM; i++)
		printf("%d ", v[i]);
	printf("\n");
		
	imprimeArr(v, TAM);
	
	return 0;
}
