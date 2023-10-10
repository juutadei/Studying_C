#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Descobrir se uma frase eh um palindromo
	
	Ex: roma me tem amor
		a grama e amarga
		anotaram a data da maratona
		...
*/

int main(){
	
	int i, j, tam, diferente = 0;
	char frase[50], copia[50];
	
	printf("Digite: ");
	scanf("%50[^\n]", frase);
	
	j = 0;
	for(i = 0; i < strlen(frase); i ++){
		if(frase[i] != ' ')
			copia[j++] = frase[i];
	}
	copia[j] = '\0';
	
	tam = strlen(copia);
	tam--;
	
	i = 0;
	while(tam >= i){
		if(copia[i] != copia[tam])
			diferente++;
		i++;
		tam--;
	}
	
	printf("\nOriginal: %s\nCopia: %s\n", frase, copia);
	
	if(diferente == 0)
		printf("\nEh palindroma...");
	else
		printf("\nNao eh palindroma...");
	
	return 0;
}
