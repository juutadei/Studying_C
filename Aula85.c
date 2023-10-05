#include <stdio.h>

/*
	Faça um programa que peça ao usuário dois números inteiros e apresente o 
	resultado na multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/

int main(){
	
	int num1, num2, i;
	int res = 0;
	
	printf("Enter two number for the multiplication:\n");
	scanf("%d %d", &num1, &num2);
	
	for(i = 1; i <= num2; i++)
		res = res + num1;
		
	printf("%d x %d = %d\n", num1, num2, res);
	
	return 0;
}
