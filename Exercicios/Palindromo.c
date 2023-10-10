#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	PALINDROMO
	Leia uma palavra e diga se ela é palindroma.
*/

int main(){
	
	
	int i, tam, iguais = 0;
	char palavra[20];
	
	printf("Digite: ");
	scanf("%s", palavra);
	
	//strlen() passa o tamanho da string para 'tam' e depois subtrai 1, pois strlen le '\0'
	tam = strlen(palavra);
	tam--;
	
	//Se a palavra na posicao i for igual a palavra na posicao tam, vai somar 1 em igual
	//o laco roda ate que tam atinja o mesmo valor de i, ou seja, alcanca o meio da string
	i = 0;
	while(tam >= i){
		if(palavra[i] != palavra[tam])
			iguais++;
		i++;
		tam--;
	}
	
	//Se iguais permanecer 0 quer dizer q os caracteres sao iguais de tras para frente
	if(iguais == 0)
		printf("Eh palindroma...\n");
	else
		printf("Nao eh palindroma...\n");
	
		
	/*
	//METODO USANDO O FOR
	int i, tam, iguais = 0;
	char palavra[20], copia[20];
	
	printf("Digite: ");
	scanf("%s", palavra);
	
	tam = strlen(palavra);
	
	for(i = 0; i < strlen(palavra); i++){
		copia[i] = palavra[tam - 1];
		tam--;
	}
	
	
	for(i = 0; i < strlen(palavra); i++){
		if(copia[i] == palavra[i])
			iguais++;
	}
	
	if(iguais == strlen(palavra))
		printf("\nEh palindroma...");
	else
		printf("\nNao eh palindroma...");
		*/
	
	return 0;
}
