#include <stdio.h>
#include <stdlib.h>

/*
	Ponteiro para ponteiro u-u
*/

int main(){
	
	int A = 10;
	int *B, **C;
	
	B = &A;
	C = &B;//C esta apontando para um um pont., portanto ele so pode receber um outro pont.
	
	printf("Endereco de A: %p\tValor de A: %d\n", &A, A);
	printf("Endereco de B: %p\tValor de B: %p\n", &B, B);
	printf("Valor apontado por B: %d\n", *B);
	printf("Endereco de C: %p\tValor de C: %p\n", &C, C);//C aponta para o endereco de B, portanto esse eh o seu valor
	
	printf("Valor apontado por C: %d\n", **C);//C eh pont de um pont, entao ele vai apontar para um pont, no caso B 
											  //E B eh um pont. que aponta para o endereco de A.
	
	return 0;
}
