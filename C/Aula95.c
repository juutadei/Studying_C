#include <stdio.h>

/*
	Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
	I=1 J=7 -> Ponto de partida: i + 6 = 7
	I=1 J=6
	I=1 J=5 -> Ponto de parada: i + 4 = 5

	I=3 J=9 -> Ponto de partida: i + 6 = 9
	I=3 J=8
	I=3 J=7 -> Ponto de parada: i + 4 = 7

	I=5 J=11 -> Ponto de partida: i + 6 = 11
	I=5 J=10
	I=5 J=9 -> Ponto de parada: i + 4 = 9
	
	I=7 J=13 -> Ponto de partida: i + 6 = 13
	I=7	J=12
	I=7	J=11 -> Ponto de parada: i + 4 = 11

	I=9 J=15 -> Ponto de partida: i + 6 = 15
	I=9 J=14
	I=9 J=13 -> Ponto de parada: i + 4 = 13
*/

#include <stdio.h>

int main(){
	
	int i, j;
	
	for(i = 1; i <= 9; i += 2){
		for(j = 6 + i; j >= 4 + i; j--)
			printf("I = %d  J = %d\n", i, j);
		printf("\n");
	}
	
	return 0;
}
