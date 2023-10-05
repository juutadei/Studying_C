#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

/*
	Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
	o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
	modificado.
*/

int main(){
	
	int vet[MAX];
	int i, copia, size = MAX;
	
	srand(time(NULL));
	
	for(i = 0; i < MAX; i++)
		vet[i] = 1 + rand() % 100;
		
	printf("Vetor:\n");
	for(i = 0; i < MAX; i++){
		printf("%d ", vet[i]);
	}
	
	//Modificando o vetor	
	for(i = 0; i < MAX / 2; i++){
		copia = vet[i];
		vet[i] = vet[size - 1];
		vet[size - 1] = copia;
		size--;
	}
	
	printf("\n\n");
	
	printf("Vetor ao contrario:\n");
	for(i = 0; i < MAX; i ++){
		printf("%d ", vet[i]);
	}
		
	return 0;
}
