#include <stdio.h>
#include <stdlib.h>
/*
	por que nao utilizamos & para ler uma string de um vetor?
	Um vetor, por padrao na linguagem C, ja eh um ponteiro. A variavel do vetor eh um
	ponteiro para a primeira posicao do vetor.
*/
int main(){
	
	char palavra[100]; //Automaticamente 'palavra' ja eh um ponteiro para a primeira pos. do vetor
	
	//scanf("%100[^\n]", palavra);
	//printf("%s\n", palavra);
	
	printf("End. de memoria: %p\n", palavra);
	printf("End. de memoria: %p\n", &palavra);
	printf("End. de memoria: %p\n", &palavra[0]);
	
	return 0;
}
