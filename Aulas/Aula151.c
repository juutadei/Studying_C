#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Inverter string passando por referencia
*/

char* inverter(char vet[]);

int main(){
	char vet[20] = {"Oi, tudo bem?"};
	
	printf("%s\n", vet);
	
	char *p = inverter(vet);
	
	printf("%s\n", p);
	
	return 0;
}

char* inverter(char vet[]){
	int i, fim, tam = strlen(vet);
	char *arr;
	
	arr = malloc(tam * sizeof(int));
	
	if(arr){
		fim = tam - 1;
		for(i = 0; i < tam; i ++){
			arr[fim] = vet[i];
			fim--;
		}
		arr[i] = '\0';
	}
	return arr;
}
