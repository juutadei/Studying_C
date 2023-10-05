#include <stdio.h>

/*
	 Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
	 Dada a massa inicial, em gramas, faça um programa que determine o tempo necessário 
	 para que essa massa se torne menor que 0,05 gramas.	
*/

int main(){
	
	float massa;
	int temp = 0;
	
	printf("Valor da massa: ");
	scanf("%f", &massa);
	
	while(massa >= 0.05){
		massa = massa / 2;
		temp += 50;
		printf("Segundos: %d\tMassa: %f\n", temp, massa);
	}
	
	return 0;
}
