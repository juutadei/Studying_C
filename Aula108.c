#include <stdio.h>
#include <stdlib.h>

#define MAX 12

/*
	Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
	vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
	mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
*/

int main(){
	
	float max = 0, min = 999;
	float temp[MAX];
	int i, mesFrio, mesQuente;
	
	printf("Entre a temperatura media de cada mes:\n");
	for(i = 0; i < MAX; i++){
		printf("Mes %d: ", i + 1);
		scanf("%f", &temp[i]);
		if(temp[i] > max){
			max = temp[i];
			mesQuente = i + 1;
		}
		if(temp[i] < min){
			min = temp[i];
			mesFrio = i + 1;
		}
	}
	printf("\n");
	
	printf("O mes mais quente foi: ");
	
	switch (mesQuente){
		case 1:
			printf("Janeiro");
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Marco");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("Julho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembro");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
			break;
		default:
			printf("Mes invalido.\n");
			break;
	}
	
	printf(", com a temperatura de: %.2f\n\n", max);
	
	printf("O mes mais frio foi: ");
	
	switch (mesFrio){
		case 1:
			printf("Janeiro");
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Marco");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("Julho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembro");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
			break;
		default:
			printf("Mes invalido.\n");
			break;
	}
	
	printf(", com a temperatura de: %.2f\n\n", min);
	
	return 0;
}
