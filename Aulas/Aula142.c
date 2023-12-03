#include <stdio.h>
#include <stdlib.h>

/*
	Considere a seguinte declara��o: int A, *B, **C, ***D
	Escreva um programa que leia a vari�vel A e calcule e exiba o dobro, o triplo e o qu�druplo desse
	valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
	o triplo e D o qu�druplo.
*/

int main(){
	
	int A;
	int *B, **C, ***D;
	
	B = &A;
	C = &B;
	D = &C; //No fim todos os ponteiros est�o apontando para A
	
	printf("Valor de A: ");
	scanf("%d", &A);
	
	printf("\nDobro: %d", *B * 2);
	
	printf("\nDobro: %d", **C * 3);
	
	printf("\nDobro: %d", ***D * 4);
	
	return 0;
}
