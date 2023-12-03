#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
	variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/

void maiorMenorPont(int vet[], int tam, int *menor, int *maior){
	int i;
	*menor = *vet;
	*maior = *vet;
	
	for(i = 1; i < tam; i++){
		
		if(*menor > *(vet + i))
			*menor = *(vet + i);
			
		if(*maior < *(vet + i))
			*maior = *(vet + i);
	}
}

int main(){
	
	int tam = 4;
	int i, maior, menor;
	int vet[tam];
	
	srand(time(NULL));
	
	for(i = 0; i < tam; i++)
		vet[i] = 1 + rand() % 10;
		
	printf("Vetor:\n");
	for(i = 0; i < tam; i++)
		printf("%d ", vet[i]);
		
	printf("\n\nMaior: %d\tMenor: %d\n", maior, menor);
	
	maiorMenorPont(vet, 4, &menor, &maior);
	
	printf("\nPos funcao:\n");
	printf("Maior: %d\tMenor: %d\n", maior, menor);
	
	return 0;
}
