#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 25

/* Escrever fun��o rand() que n�o tenha repeti��o de n�meros */

int main(){
	
	int i, j, flag, vet[TAM];
	
	srand(time(NULL));
	
	do{
		
		vet[i] = rand() % 50;
		flag = 0;
		for(j = 0; j < i; j++){
			if(vet[i] == vet[j])
				flag = 1;
		}
		
		if(flag == 0)
			i++;
		
	}while(i < TAM);
	
	for(i = 0; i < TAM; i ++){
		printf("%d ", vet[i]);
	}	
	return 0;
}
