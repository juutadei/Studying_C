#include <stdio.h>

/*
	Escreva um programa que gere a sa�da abaixo.
	Restri��es:
	- A instru��o �printf� pode ser utilizada no m�ximo 2 vezes;
	- O \n para saltar linha pode ser utilizado no m�ximo 2 vezes.
	
	*
	**
	***
	****
	*****
	******
	*******
	********
*/

int main(){
	
	int i, j;
	
	for(i = 1; i <= 8; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
