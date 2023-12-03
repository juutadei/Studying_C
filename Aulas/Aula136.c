#include <stdio.h>
#include <stdlib.h>

/*
	Aritmetica de ponteiros com vetor
*/

void imprimir(int vet [], int tam){
	int i;
	
	for(i = 0; i < tam; i++)
		printf("%d ", *(vet + i)); //(vet + 1) vai somar a o endereco da primeira pos. do vetor com i e
							       //depois o '*' pega o conteudo apontado pelo end. de memoria e imprime
}

int main(){
	
	int i;
	int tam = 3;
	int vet[tam];
	
	printf("Preencha o vetor:\n");
	for(i = 0; i < tam; i ++)
		scanf("%d", &vet[i]);
	
	imprimir(vet, tam);
	
	return 0;
}
