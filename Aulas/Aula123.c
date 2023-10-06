#include <stdio.h>
#include <stdlib.h>

/*
	Como descobrir o fim de uma string?
	
	Olhando na tabela ASCII, cada caractere é representado por um inteiro, sendo assim, um vetor de 
	string não é nada mais que uma cadeia de inteiros representados em carac.
	fgets(...) vai ler sua string até \n (10 na ASCII), ou seja, até encontrar o caractere que indica o enter, que
	indica o fim da sua entrada de dados no vetor. Após o enter, se a sua entrada de dados for 
	menor que o tamanho do vetor, não vai existir próximo carac., ou seja, 0 na tabela ASCII. É ai que a
	função fgets entende que a string chegou ao fim.
	
	0 na tabela ASCII representa o carac. '\0', então se você quer achar o fim de sua string, basta ler
	até encontrar o carac. '\0', também conhecido por NULL.
*/

int main(){
	
	int i;
	char palavra[50];
	
	printf("Digite: ");
	fgets(palavra, 50, stdin);
	
	i = 0;
	while(palavra[i] != '\0'){
		
		printf("%d = %d\n", i, palavra[i]); //Lê o indice e o inteiro que representa o carac. no vetor
		i++;
	}
	
	return 0;
}
