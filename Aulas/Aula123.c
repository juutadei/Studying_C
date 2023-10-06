#include <stdio.h>
#include <stdlib.h>

/*
	Como descobrir o fim de uma string?
	
	Olhando na tabela ASCII, cada caractere � representado por um inteiro, sendo assim, um vetor de 
	string n�o � nada mais que uma cadeia de inteiros representados em carac.
	fgets(...) vai ler sua string at� \n (10 na ASCII), ou seja, at� encontrar o caractere que indica o enter, que
	indica o fim da sua entrada de dados no vetor. Ap�s o enter, se a sua entrada de dados for 
	menor que o tamanho do vetor, n�o vai existir pr�ximo carac., ou seja, 0 na tabela ASCII. � ai que a
	fun��o fgets entende que a string chegou ao fim.
	
	0 na tabela ASCII representa o carac. '\0', ent�o se voc� quer achar o fim de sua string, basta ler
	at� encontrar o carac. '\0', tamb�m conhecido por NULL.
*/

int main(){
	
	int i;
	char palavra[50];
	
	printf("Digite: ");
	fgets(palavra, 50, stdin);
	
	i = 0;
	while(palavra[i] != '\0'){
		
		printf("%d = %d\n", i, palavra[i]); //L� o indice e o inteiro que representa o carac. no vetor
		i++;
	}
	
	return 0;
}
