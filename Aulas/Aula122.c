#include <stdio.h>
#include <stdlib.h>

/*
	Ler uam string com fgets
	É a função recomendada para leitura de strings
	
	fgets(word, 80, stdin) -> Espera três argumentos, o primeiro sendo a varíavel que vai guardar a string,
	o segundo o tamanho do vetor (quanto carac. aceita) e o terceiro é da onde você vai inserir os dados, 
	a entrada padrão (teclado).
	
	fgets(...) Insere caracteres até que encontre '\n' ou EOF, ou que n - 1 bytes sejam lidos. Um caractere
	nulo de finalização (\0) é anexado no vetor para indicar o último elemento, logo a função só vai ler
	até a posição n - 1 do vetor.
*/

int main(){
	
	char palavra[10];
	
	printf("Digite seu nome: ");
	fgets(palavra, 10, stdin); //Ex -> entrada: Julia Tadei | saída: Julia Tad
	
	printf("%s", palavra);
	
	return 0;
}
