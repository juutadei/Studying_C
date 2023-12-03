#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

/*
	implementar uma funcao que cria um vetor com alocacao dinamica de memoria
*/

int *createArr();

int main(){
	int *arr;
	int i;
	arr = createArr();
	
	for(i = 0; i < SIZE; i++)
		printf("%d ", *(arr + i)); //arr[i]
	
	return 0;
}

int *createArr(){
	int *myArr;
	int i;
	
	myArr = (int*)malloc(sizeof(int) * SIZE);
	
	if(!myArr)
		printf("Erro ao alocar memoria.\n");
	else{
		printf("Preencha o vetor com %d valores.\n", SIZE);
		for(i = 0; i < SIZE; i++){
			printf("Elemento %d: ", i);
			scanf("%d", &myArr[i]);
		}
	}
	return myArr;
}
