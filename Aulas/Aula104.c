#include <stdio.h>
#include <stdlib.h>

#define MAX 10

/*
	Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
	Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
	fim, imprima os dois vetores.
*/

int main(){
	
	int vet1[MAX], vet2[MAX];
	int i;
	
	for(i = 0; i < MAX; i++){
		printf("Preencha valor %d: ", i);
		scanf("%d", &vet1[i]);
	}
	printf("\n");
	
	printf("Vetor:\n");
	for(i = 0; i < MAX; i++){
		printf("%d ", vet1[i]);
	}
	
	//Calculando vetor
	for(i = 0; i < MAX; i++)
		vet2[i] = vet1[i] * vet1[i];
	
	printf("\n\n");
	
	//Imprimindo o quadrado do vetor
	printf("Quadrado do vetor:\n");
	for(i = 0; i < MAX; i++)
		printf("%d ", vet2[i]);
	
	return 0;
}

