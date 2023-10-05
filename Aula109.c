#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

/*
	Fa�a um programa que leia 10 n�meros reais e os armazene em um vetor. Em seguida, leia um
	c�digo inteiro e fa�a uma das a��es abaixo:
	0 � finaliza o programa;
	1 � imprime o vetor na ordem do in�cio ao fim;
	2 � imprime o vetor na ordem inversa (do fim para o in�cio).
	O programa deve funcionar at� que o usu�rio digite 0 para finalizar.
*/

int main(){
	
	int i, opcao, num[MAX];
	
	srand(time(NULL));
	
	for(i = 0; i < MAX; i++)
		num[i] = rand() % 999;
		
	for(i = 0; i < MAX; i++){
		printf("%d ", num[i]);
	}
	printf("\n\n");
		
	do{
		printf("\nDigite uma das opcoes:\n");
		printf("0 - Finaliza o programa.\n");
		printf("1 - Imprime o vetor na ordem inserida.\n");
		printf("2 - Imprime o vetor na ordem contraria.\n");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 0:
				printf("\nFinalizando programa...\n");
				break;
			case 1:
				printf("\nVetor na ordem:\n");
				for(i = 0; i < MAX; i++)
					printf("%d ", num[i]);
				printf("\n");
				break;
			case 2:
				for(i = MAX - 1; i >= 0; i--)
					printf("%d ", num[i]);
				printf("\n");
				break;
			default:
				printf("\nEntrada invalida!\n");
		}
		
	}while(opcao != 0);
	
	return 0;
}
