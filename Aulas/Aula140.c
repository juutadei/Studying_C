#include <stdio.h>
#include <stdlib.h>

/*
	Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
	ser: void troca(float *a, float *b);
*/

void troca(float *a, float *b){
	float aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}

int main(){
	
	float a = 10, b = 5;
	
	printf("Antes da funcao:\n");
	printf("a = %.2f\tb = %.2f\n", a, b);
	
	troca(&a, &b);
	
	printf("Depois da funcao:\n");
	printf("a = %.2f\tb = %.2f\n", a, b);
	
	return 0;
}
