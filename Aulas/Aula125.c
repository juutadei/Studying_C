#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
STRINGS
	strcat() -> concatena strings
	strcmp() -> compara strings
	 - Obs: Retorna um valor de int
	 		Se retornar 0, quer dizer que as strings comparadas s�o iguais
	 		Se retornar -1, quer dizer que a primeira string na compara��o acontece ANTES da segunda (no abc)
	 		Se retornar 1, quer dizer que a primeira string na compara��o acontece DEPOIS da segunda (no abc)
	strcpy() -> copia strings
	
	//PROCURAR CARACTERES
	strchr() -> Procura a primeira ocorrencia do carac.
	strrchr() -> Procura a �ltima ocorr�ncia do carac.
*/

int main(){
	
	/*
	//CONCATENAR STRINGS strcat()
	char palavra[50] = {"Oi."};
	
	strcat(palavra, "Bom dia."); //Concatena a frase 'Bom dia' com a string 'palavra'
	
	printf("%s", palavra); //Fica sem espa�amento, pois strcat() substitui o '\0' pela nova string.
	printf("\n\n");
	
	char palavra2[50] = {"Como vai"};
	
	printf("%s", strcat(palavra, palavra2)); //Concatenar com outro vetor de string
	*/
	
	//COMPARAR STRINGS strcmp()
	/*
	char str1[20] = {"bola"};
	char str2[20] = {"bola"};
	
	printf("Resultado: %d\n", strcmp(str1, str2));
	*/
	
	//COPIAR STRINGS strcpy()
	/*
	char palavra[50] = {"Oi, tudo bem."};
	char palavra2[50] ={"Esta bem."};
	
	printf("Antes da copia:\n");
	printf("Palavra 1: %s\nPalavra 2: %s\n", palavra, palavra2);
	
	strcpy(palavra2, palavra); //strcpy(destino, origem)
	
	printf("\n\nDepois da copia:\n");
	printf("Palavra 1: %s\nPalavra 2: %s\n", palavra, palavra2);
	*/
	
	char palavra[20] = {"abacate"};
	char *letra; //� preciso declarar um ponteiro para guardar um aposi��o de uma string -> endere�o de mem�ria
	
	letra = strchr(palavra, 'a'); //busca a primeira letra 'a' dentro do vetor e salva em um endere�o de mem�ria 'letra'
	
	printf("%c\n", *letra); //para acessar o conte�do de 'letra' precisa chamar com um ponteiro
	printf("%c\n", *(letra + 1)); //acessa o pr�ximo endere�o da string de acordo com o que foi buscado
	
	char *letra2;
	
	letra2 = strrchr(palavra, 'a'); //Busca a �ltima ocorrencia da letra 'a'
	
	printf("%c\n", *(letra2 + 1));
	
	return 0;
}
