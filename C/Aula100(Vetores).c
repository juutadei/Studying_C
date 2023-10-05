#include <stdio.h>

int main(){
	
	int notas[5], i;
	int soma = 0;
	float media;
	
	printf("Entre com a nota dos alunos:\n");
	
	for(i = 0; i < 5; i++){
		printf("Nota %d\n", i + 1);
		scanf("%d", &notas[i]);
		soma += notas[i];
	}
	
	printf("\nNotas:\n");
	for(i = 0; i < 5; i++)
		printf("%d ", notas[i]);
	
	media = (float)soma / 5;
	
	printf("\n\nA media eh: %.2f\n", media);
	
	for(i = 0; i < 5; i++)
		notas[i] = notas[i] * 5;
		
	printf("\nNotas multiplicadas por 5:\n");	
	for(i = 0; i < 5; i++)
		printf("%d ", notas[i]);
	
	return 0;
}
