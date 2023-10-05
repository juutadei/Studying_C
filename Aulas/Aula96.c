#include <stdio.h>

/*
	Escreva um programa que leia dois valores X e Y. 
	A seguir, mostre uma sequ�ncia de 1 at� Y, passando para a pr�xima linha a cada X n�meros.
	Exemplo de entrada:
	3 99
	Exemplo de sa�da:
	1 2 3
	4 5 6
	7 8 9
	10 11 12
	...
	97 98 99
*/

int main(){
	
	int i, x, y;
	
	printf("Quantos numeros por linhas:\n");
	scanf("%d", &x);
	
	printf("Quantos numeros:\n");
	scanf("%d", &y);
	
	for(i = 1; i <= y; i++){
		printf("%2d ", i);
		if(i % x == 0)
			printf("\n");
	}
	
	return 0;
}
