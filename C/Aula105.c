#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 25

/*
	Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
	em um terceiro vetor. Imprima os três vetores na tela.
*/

int main(){
	
	int vet1[MAX], vet2[MAX], vet3[MAX];
	int i;
	
	srand(time(NULL));
	
	//Preenchendo vetor 1 e vetor 2
	for(i = 0; i < MAX; i++){
		vet1[i] = 1 + rand() % 10;
		vet2[i] = 1 + rand() % 10;
	}
	
	//Somando vetor 1 com vetor 2
	for(i = 0; i < MAX; i++)
		vet3[i] = vet1[i] + vet2[i];
	
	//Imprimindo os valores
	
	//Vetor 1
	printf("Vetor 1:\n");
	for(i = 0; i < MAX; i++){
		printf("%2d ", vet1[i]);
	}
	printf("\n\n");
	
	//Vetor 2
	printf("Vetor 2:\n");
	for(i = 0; i < MAX; i++){
		printf("%2d ", vet2[i]);
	}	
	printf("\n\n");
		
	//Vetores somados
	printf("Soma dos vetores 1 e 2:\n");
	for(i = 0; i < MAX; i++)
		printf("%2d ", vet3[i]);
	
	return 0;
}
