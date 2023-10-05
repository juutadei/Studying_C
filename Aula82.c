#include <stdio.h>

/*
	Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 1 e 
	diga se o n�mero informado � primo ou n�o.
*/

int main(){
	int num, i;
	int qntDivisores = 0;
	
	do{
		printf("Enter a number greater than 1:\n");
		scanf("%d", &num);
	}while(num <= 1);
	
	for(i = 1; i <= num; i++){
		if(num % i == 0)
			qntDivisores++;
	}
	
	if(qntDivisores > 2)
		printf("%d Not a prime number!\n", num);
	else
		printf("%d Prime Number!\n", num);
		
	return 0;
}
