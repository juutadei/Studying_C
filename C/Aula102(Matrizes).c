#include <stdio.h>
#include <stdlib.h>

#define MAX 2

int main(){
	
	int i, j, k, l;
	int num1[MAX][MAX], num2[MAX][MAX], num3[MAX][MAX];
	
	//Preenchendo uma matriz com entradas do usúario
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++){
		printf("Preencha [%d][%d]: ", i, j);
		scanf("%d", &num1[i][j]);
		}
	printf("\n");
	}
	
	//Imprimindo a matriz
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++){
		printf("%3d ", num1[i][j]);
		}
	printf("\n");
	}
	
	//Multiplicando a matriz
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++)
		num1[i][j] = num1[i][j] * 2;
	}
	
	printf("\n");
	
	//Imprimindo a matriz multiplicada
	printf("Matriz 1 multiplicada:\n");
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++){
		printf("%3d ", num1[i][j]);
		}
	printf("\n");
	}
	
	printf("\n");
	
	//Somando o conteúdo de duas matrizes
		//Criando segunda matriz
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++){
		printf("Preencha [%d][%d]: ", i, j);
		scanf("%d", &num2[i][j]);
		}
	printf("\n");
	}
	
	//Imprimindo a segunda matriz
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++){
		printf("%3d ", num2[i][j]);
		}
	printf("\n");
	}
	
	printf("\n");
	
	//Somando as matrizes
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++){
			num3[i][j] = num1[i][j] + num2[i][j];
		}
	}
	
	printf("\n");
	
	//Imprimindo a matriz somada
	printf("Soma das matrizes:\n");
	for(i = 0; i < MAX; i++){	
		for(j = 0; j < MAX; j++){
		printf("%3d ", num3[i][j]);
		}
	printf("\n");
	}
		
	return 0;
}
