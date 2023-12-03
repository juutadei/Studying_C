#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
*/

int strcopy(char *destino, char *origem){
	int i = 0;
	
	while(*(origem + i) != '\0'){
		*(destino + i) = *(origem + i);
		i++;
	}
	*(destino + i) = '\0';
	
	return i;
}

int main(){
	char destino[20] = {"Tudo bem."};
	char origem[20] = {"oi, tudo bem."};
	
	printf("Destino antes: %s\n", destino);
	
	printf("Tamanho: %d\n", strcopy(destino, origem));
	printf("Destino Depois: %s\n", destino);
	
	return 0;
}
