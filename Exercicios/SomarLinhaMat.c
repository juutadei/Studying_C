#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define tam 3

/*
	Fazer uma funcao que retorne a soma de uma linha de uma matriz
	Fazer uma funcao que retorne a soma de uma coluna de uma matriz
*/
int mat[tam][tam];

void imprimeMatriz();
int somaLinha(int linha);
int somaCol(int coluna);

int main(){
	
	int i, j, linha, res;
	
	srand(time(NULL));
	
	for(i = 0;  i < tam; i++){
		for(j = 0; j < tam; j++){
			mat[i][j] = 1 + rand() % 10;
		}
	}
	
	imprimeMatriz();
	
	printf("\n");
	for(i = 0; i < tam; i++)
		printf("Soma linha %d: %d\n", i, somaLinha(i));
	
	printf("\n");	
	for(i = 0; i < tam; i++)
		printf("Soma coluna %d: %d\n", i, somaCol(i));
	
	return 0;
}

void imprimeMatriz(){
	int i, j;
	
	for(i = 0;  i < tam; i++){
		printf("Linha %d: ", i);
		for(j = 0; j < tam; j++){
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

int somaLinha(int linha){
	int j;
	int soma = 0;
	
	for(j = 0; j < tam; j++)
		soma += mat[linha][j];
	
	return soma;
}

int somaCol(int coluna){
	int i;
	int soma = 0;
	
	for(i = 0; i < tam; i++)
		soma += mat[i][coluna];
		
	return soma;
}
