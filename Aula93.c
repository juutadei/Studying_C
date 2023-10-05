#include <stdio.h>

/*
	Chico tem 1,50 metro e cresce 2 cent�metros por ano, 
	enquanto Z� tem 1,10 metro e cresce 3 cent�metros por ano. 
	Construa um programa que calcule e imprima quantos anos ser�o 
	necess�rios para que Z� seja maior que Chico.
*/

int main(){
	
	int count = 0;
	float z = 1.10, c = 1.50;
	
	while(z < c){
		count++;
		z += 0.03;
		c += 0.02;
		printf("ze: %.2f\n", z);
		printf("Chico: %.2f\n", c);
	}
	
	printf("Anos: %d\n", count);
	
	return 0;
}

