#include <stdio.h>
#include <stdlib.h>

/*
	realocando memoria para um vetor de notas
*/

int main(){
	int *grades = NULL;
	int *temp = NULL;
	int totalGrades, i;
	
	printf("Enter total grades: ");
	scanf("%d", &totalGrades);
	
	//alocando memoria para as notas
	grades = (int*)malloc(totalGrades * sizeof(int));
	
	if(grades){
		printf("Enter grades:\n");
		for(i = 0; i<totalGrades; i++){
			printf("Grade %d: ", i + 1);
			scanf("%d", &grades[i]);
		}
	}else
		printf("Erro ao alocar memoria.\n");
		
	//Realocando memoria - mais memoria
	totalGrades = totalGrades + 2;
	temp = (int*)realloc(grades, sizeof(int) * totalGrades);
	
	if(temp){
		printf("Sucesso ao realocar memoria.\n");
		grades = temp;
		grades[totalGrades - 1] = 10;
		grades[totalGrades - 2] = 8;
		
		for(i = 0; i < totalGrades; i++)
			printf("%d ", grades[i]);
	}
	else
		printf("Erro ao realocar memoria.\n");
		
	//Realocando memoria - menos memoria
	totalGrades = totalGrades - 3;
	temp = (int*)realloc(grades, sizeof(int) * totalGrades);
	
	if(temp){
		printf("\nSucesso ao realocar memoria.\n");
		grades = temp;
		
		for(i = 0; i < totalGrades; i++)
			printf("%d ", grades[i]);
	}
	else
		printf("Erro ao realocar memoria.\n");
		
	free(grades);
	
	return 0;
}
