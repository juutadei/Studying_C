#include <stdio.h>
#include <stdlib.h>

/*
	Alocacao dinamica de memoria - malloc
	retorna um ponteiro para a regiao de memoria alocada ou NULL
*/

int main(){
	
	int *x;
	
	x = (int*)malloc(sizeof(int));
	
	if(x){ //if x != NULL
		printf("Memoria alocada com sucesso\n");
		printf("x = %d\n", *x);
		*x = 20;
		printf("x = %d\n", *x);
	}else{
		printf("Erro ao alocar memoria\n");
	}
	
	return 0;
}
