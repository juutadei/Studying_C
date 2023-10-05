#include <stdio.h>

/*
	Faça um programa que peça números ao usuário. 
	Quando o usuário digitar o número 0 (zero) o programa deve 
	imprimir na tela quantos números positivos e negativos foram digitados.
*/

int main(){
	
	int num;
	int neg = 0, pos = 0;
	
	printf("To leave enter 0.\n");
	
	do{
		printf("Enter a number: ");
		scanf("%d", &num);
		
		if(num > 0)
			pos++;
		else if(num < 0)
			neg++;
	}while(num != 0);
	
	printf("\n");
	printf("Positive numbers: %d\n", pos);
	printf("Negative numbers: %d\n", neg);
	
	return 0;
}
