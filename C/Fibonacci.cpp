#include <stdio.h>

/*
	Fa�a um programa que calcule o valor de A, dado por:
	A = 1 + 2 + 3 + 4 + � + n, onde n � um n�mero inteiro, maior que zero informado pelo usu�rio.
*/

int main(){
	
	int num;
	int i, sum = 0;
	
	do{
		printf("Enter a number: ");
		scanf("%d", &num);
	}while(num < 1);
	
	for(i = 0; i <= num; i++)
		sum += i;
			
	printf("\nA soma de A ate %d eh: %d\n", num, sum);
	
	return 0;
}
