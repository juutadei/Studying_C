#include <stdio.h>

/*
	Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o 
	resultado na multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o.
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
