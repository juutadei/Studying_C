#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para usar a biblioteca de string (função strlen())

/*
	Como descobrir o tamanho de uma string?
*/

int main(){
	
	int i, tam = 0;;
	char palavra[50];
	
	printf("Entre com dados: ");
	fgets(palavra, 50, stdin);
	
	//Aqui vc altera o valor de '\n' para '\0, forçando o final da string
	i = 0;
	while(palavra[i] != '\0'){
		if(palavra[i] == '\n')
			palavra[i] = '\0';	
		i++;
	}
	
	/*
	i = 0;
	//Sem o bloco de cima, a string vai ter tamanho n + 1, pois vai contar com o caractere '\n' (enter)
	while(palavra[i] != '\0'){
		tam++; ///Conta os caract. na string
		i++;
	}
	*/
	
	//Função strlen() conta quantos caracteres tem uma string
	printf("Tamanho da string: %d\n", strlen(palavra));
	
	return 0;
}
