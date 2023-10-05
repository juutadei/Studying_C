#include <stdio.h>

/*
	Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. 
	Para tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 
	4 centavos no terceiro dia, 8 centavos no quarto dia, e assim por diante. 
	Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main(){
	
	double sum = 0.01, total = 0;
	int i;
	
	for(i = 1; i <= 30; i++){
		printf("Dia %d: R$ %.2f\n", i, sum);
		sum = sum * 2;
	}
	
	printf("O valor final eh: R$ %.2f\n", sum);
	
	return 0;
}
