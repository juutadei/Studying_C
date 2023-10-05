#include <stdio.h>

/*
	Para uma turma de 45 alunos, construa um programa que determine:
	a) A idade média dos alunos com menos de 1,70m de altura;
	b) A altura média dos alunos com mais de 20 anos.
*/

int main(){
	
	int alunos, idade, i;
	int alunosMenores = 0, alunosVelhos = 0;
	float sumIdade = 0, sumAltura = 0;
	float altura;
	float mediaAltura, mediaIdade;
	
	printf("Quantidade de alunos: ");
	scanf("%d", &alunos);
	
	for(i = 0; i < alunos; i++){
		
		printf("Idade aluno %d: ", i + 1);
		scanf("%d", &idade);
			if(idade > 20){
				alunosVelhos++;
				sumIdade += idade;
			}
				
		
		printf("Altura aluno %d: ", i + 1);
		scanf("%f", &altura);
			if(altura < 1.7){
				alunosMenores++;
				sumAltura += altura;
			}
	}
	
	mediaIdade = sumIdade / alunosVelhos;
	printf("Media de idade: %.2f\n", mediaIdade);
	
	mediaAltura = sumAltura / alunosMenores;
	printf("Media de altura: %.2f\n", mediaAltura);
	
	return 0;
}
