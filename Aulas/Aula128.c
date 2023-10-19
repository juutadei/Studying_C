#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
	Converter um numero em um texto (para entrada de dados de string em scanf)
*/

int main(){
	
	char str[10];
	int tam;
	
	printf("Digite o tamanho da string: ");
	scanf("%d", &tam);
	scanf("%c"); //Liberar buffer
	
	snprintf(str, 10, "%%%d[^\n]", tam); //(destino, tamanho max, formatacao, origem)
	
	printf("%s\n", str);
	
	char palavra[tam];
	
	printf("Digite na string: ");
	scanf(str, palavra); //le a partir o conteudo que foi salvo em snprintf()
	printf("%s\n", palavra);
	
	return 0;
}
