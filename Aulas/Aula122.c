#include <stdio.h>
#include <stdlib.h>

/*
	Ler uam string com fgets
	� a fun��o recomendada para leitura de strings
	
	fgets(word, 80, stdin) -> Espera tr�s argumentos, o primeiro sendo a var�avel que vai guardar a string,
	o segundo o tamanho do vetor (quanto carac. aceita) e o terceiro � da onde voc� vai inserir os dados, 
	a entrada padr�o (teclado).
	
	fgets(...) Insere caracteres at� que encontre '\n' ou EOF, ou que n - 1 bytes sejam lidos. Um caractere
	nulo de finaliza��o (\0) � anexado no vetor para indicar o �ltimo elemento, logo a fun��o s� vai ler
	at� a posi��o n - 1 do vetor.
*/

int main(){
	
	char palavra[10];
	
	printf("Digite seu nome: ");
	fgets(palavra, 10, stdin); //Ex -> entrada: Julia Tadei | sa�da: Julia Tad
	
	printf("%s", palavra);
	
	return 0;
}
