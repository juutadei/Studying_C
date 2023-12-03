#include <stdio.h>
#include <stdlib.h>

/*
	a funcao calloc tem o mesmo objetivo de malloc, porem vai ajustar todos os valores do vetor para 0
*/

int main(){
	int *a;
	int *b;
	int i;
	int tam = 10;
	
	a = (int*)malloc(sizeof(int));
	
	if(a){
		for(i = 0; i<tam; i++)
			printf("%d ", a[i]);
	}else
		printf("Erro ao alocar memoria.\n");
	
	free(a);
	a = NULL;
	
	printf("\n");
		
	b = (int*)calloc(tam, sizeof(int));
	
	if(b){
		for(i = 0; i<tam; i++)
		printf("%d ", b[i]);
	}else
		printf("Erro ao alocar memoria.\n");
		
	free(b);
	b = NULL;
		
	return 0;
}
