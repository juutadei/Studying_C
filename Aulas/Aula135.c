#include <stdio.h>
#include <stdlib.h>

/*
	Como passar um ponteiro como parametro
*/

void imprimir(int *num){ //Recebe o endereco de uma variavel que aponta para um inteiro
	printf("Idade: %d\n", *num);
	*num = 80; //Aletera o valor da variavel apontada por num. *num -> endereco de num -> idade
}

int main(){
	
	int idade = 10;
	
	imprimir(&idade); //como a funcao recebe um pont., deve passar o endereco da variavel
	printf("Idade: %d\n", idade); //O valor apontado por idade eh alterado na funcao imprimir()
	
	return 0;
}
