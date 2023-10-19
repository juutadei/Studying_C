#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Functions
	1- Crie uma function que retorna o tamanho de uma string
	2- Crie uma function que imprima um caractere por vez
*/

//Declarando as functions (criando o prototipo)
int stringSize(char string[]);
void stringCarac(char string[]);

int main(){
	
	char string[20];
	
	printf("Digite: ");
	fgets(string, 20, stdin);
	
	//resultado recebe o valor de retorno da function
	int resultado = stringSize(string);
	
	printf("Tamanho: %d\n", resultado);
	
	//Caractere por caractere
	stringCarac(string);
		
	return 0;
}


//Criando o algoritmo das functions
int stringSize(char string[]){
	int tam = 0;
	
	while(string[tam] != '\0'){
		tam++;
	}
	
	return tam;	
}

void stringCarac(char string[]){
	int i, tam = 0;
	
	while(string[tam] != '\0'){
		printf("%c\n", string[tam]);
		tam++;
	}
	
}
