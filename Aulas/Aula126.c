#include <stdio.h>
#include <stdlib.h>

#define tam 3

/*
	Matriz de strings
	
	Para ler uma matriz de srtings, nomes por exemplo, a primeira entrada (de linhas) deve ser a quantidade de 
	nomes que vc ir� entrar, dps a parte de colunas deve ser o limite de caracteres por linha.
	
	A leitura de dados n�o � feita esclusivamente com scanf, pode utlizar fgets() tbm. No entando, utilizando scanf()
	� preciso ler algum caractere depois do '\n' para que a fun��o entenda que vai ter mais entrada de dados.
	Se vc n�o fizer esse tratamento, como o scanf l� at� vc pressionar enter, na segunda vez que vc for entrar
	com dados, ele vai perceber que vc j� apertou enter e vai continuar lendo o c�digo sem a entrada de dados.
*/

int main(){
	
	char nome[tam][30];
	int i;
	
	for(i = 0; i < tam; i++){
		printf("\nNome %d: ", i);
		scanf(" %30[^\n]", nome[i]); //Espa�o para ter um caractere diferente de '\n' antes da prx entrada de dados
		//scanf("%c"); //ou ler um outro caractere sem salvar em lugar nenhum
	}
	
	for(i = 0; i < tam; i++){
		printf("Nome %d: %s\n", i, nome[i]);
	}
}
