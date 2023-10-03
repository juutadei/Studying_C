#include <stdio.h>

/*
	Escreva um programa para ler as coordenadas (X,Y) de uma quantidade 
	indeterminada de pontos no sistema cartesiano. 
	Para cada ponto escrever o quadrante a que ele pertence. 
	O algoritmo será encerrado quando pelo menos uma das coordenadas for NULA 
	(nesta situação sem escrever mensagem alguma).
	
	Exemplo de entrada:
	2 2
	3 -2
	-8 -1
	-7 1
	0 2
	
	Exemplo de saída:
	primeiro quadrante
	quarto quadrante
	terceiro quadrante
	segundo quadrante
*/

int main(){
	
	int x, y;
	
	do{
		
		printf("Entre com as cordenadas (X, Y): ");
		scanf("%d%d", &x, &y);
		if(x != 0 && y != 0){
		
			if(x > 0 && y > 0){
				printf("(%d, %d) Quadrante 1\n", x, y);
			}else if(x < 0 && y > 0){
				printf("(%d, %d) Quadrante 2\n", x, y);
			}else if(x < 0 && y < 0){
				printf("(%d, %d) Quadrante 3\n", x, y);
			}else{
				printf("(%d, %d) Quadrante 4\n", x, y);
			}
		}
		
	}while(x != 0 && y != 0);
	
	return 0;
}
