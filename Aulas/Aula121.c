#include <stdio.h>
#include <stdlib.h>

/* 
	Ler uma string a partir de scanf
	Não é necessário o uso de &, pois uma string já é um ponteiro por si só
	A função scanf só lê caracteres até que encontre um espaço - É preciso usar %(número de carc.) de modo que
	ele leia a quantidade de caracteres limite, impedindo que ele sobrescreva espaço na memória
	
	scanf("%10[^\n]", word) [^\n] para que ele leia até quebrar a linha (enter).
	
	gets(word) -> não deve ser utilizada, também sobrescreve memória. - estouro de buffer
*/

int main(){
	
	char palavra[15];
	
	printf("Digite seu nome: ");
	scanf("%15[^\n]", palavra);
	//gets(palavra);
	
	printf("%s", palavra);
	
	return 0;
}
