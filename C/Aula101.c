#include <stdio.h>
#include <time.h>

/*
	Imprimir números aleatórios com rand e srand
*/

int main(){
	
	int num[10], i;
	
	srand(time(NULL)); //Utiliza a biblioteca da hora do computador para gerar números aleatórios
	
	for(i = 0; i <= 10; i++)
		num[i] = 1 + rand() % 99;
		
	for(i = 0; i <= 10; i++)
		printf("%d ", num[i]);	
	
	return 0;
}
