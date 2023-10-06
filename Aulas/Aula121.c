#include <stdio.h>
#include <stdlib.h>

/* 
	Ler uma string a partir de scanf
	N�o � necess�rio o uso de &, pois uma string j� � um ponteiro por si s�
	A fun��o scanf s� l� caracteres at� que encontre um espa�o - � preciso usar %(n�mero de carc.) de modo que
	ele leia a quantidade de caracteres limite, impedindo que ele sobrescreva espa�o na mem�ria
	
	scanf("%10[^\n]", word) [^\n] para que ele leia at� quebrar a linha (enter).
	
	gets(word) -> n�o deve ser utilizada, tamb�m sobrescreve mem�ria. - estouro de buffer
*/

int main(){
	
	char palavra[15];
	
	printf("Digite seu nome: ");
	scanf("%15[^\n]", palavra);
	//gets(palavra);
	
	printf("%s", palavra);
	
	return 0;
}
