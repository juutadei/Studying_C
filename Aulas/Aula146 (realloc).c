#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Utilizando a funcao realloc para realocar espaco de memoria
*/

int main(){
	int tam, i;
	int *vet;
	srand(time(NULL));

	printf("Quantos elementos: ");
	scanf("%d", &tam);
	
	//alocar memoria para vetor 
	vet = (int*)malloc(tam * sizeof(int));
	
	//verificar alocacao
	if(vet){
		//inicializar vetor
		for(i = 0; i < tam; i++)
			*(vet + i) = 1 + rand() % 100;
			
		//Imprimir vetor
		for(i = 0; i < tam; i++)
			printf("%d ", vet[i]);
			
		printf("\nDigite o tamanho do novo vetor: ");
		scanf("%d", &tam);
		
		vet = realloc(vet, tam * sizeof(int)); //Realocando espaco para o novo vetor
		
		//imprimir novo vetor
		for(i = 0; i < tam; i++)
			printf("%d ", vet[i]);
			
		free(vet); //Liberando memoria alocada
		
	}else
		printf("Erro ao alocar memoria.\n");
	
	return 0;
}
