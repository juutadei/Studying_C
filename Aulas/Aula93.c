#include <stdio.h>

/*
	Chico tem 1,50 metro e cresce 2 centímetros por ano, 
	enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
	Construa um programa que calcule e imprima quantos anos serão 
	necessários para que Zé seja maior que Chico.
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

