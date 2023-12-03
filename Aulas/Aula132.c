#include <stdio.h>
#include <stdlib.h>

#define TAM 5

/*
	1 - Função potência recursiva que retorna o valor de x elevado n
	2 - Função recursiva que calcula a soma de 1 ate n
	3 - Somar os elementos de um vetor com recursão
	4 - Descobrir o maior elemento de um vetor com recursão
*/

int potencia(int x, int n);
int soma(int n);
int somaVetor(int vet[], int tam);
int maiorElem(int vet[], int tam, int indice);

int main(){
	
	int num, pot;
	int i, vet[TAM];
	
	printf("enter num e pot: ");
	scanf("%d %d", &num, &pot);
	
	//potencia
	printf("Potencia: %d\n", potencia(num, pot));
	
	//soma
	printf("Soma: %d\n", soma(num));
	
	for(i = 0; i < TAM; i++){
		printf("Valores do vetor: ");
		scanf("%d", &vet[i]);
	}
	
	printf("Soma do vetor: %d\n", somaVetor(vet, TAM));
	
	//maior elemento
	printf("Maior elemento: %d\n", maiorElem(vet, TAM, 0));
	
	return 0;
}

int potencia(int x, int n){ 
	
	if(n == 0)
		return 1;
	else
		return x * potencia(x, n - 1);	
}

int soma(int n){
	
	if(n == 0)
		return 0;
	else
		return n + soma(n - 1);
}

int somaVetor(int vet[], int tam){
	
	if(tam == 0)
		return 0;
	else
		return vet[tam - 1] + somaVetor(vet, tam - 1);
}

int maiorElem(int vet[], int tam, int indice){
	
	if(tam == 0)
		return vet[indice];
	else{
		if(vet[tam - 1] > vet[indice])
			return maiorElem(vet, tam - 1, tam - 1);
		else
			return maiorElem(vet, tam - 1, indice);
	}
}
