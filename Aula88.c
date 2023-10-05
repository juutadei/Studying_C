#include <stdio.h>

/*
	Foi feita uma pesquisa entre os habitantes de uma região e 
	foram coletados os dados de idade, sexo (M/F) e salário de X pessoas 
	(x deve ser informado pelo usuário). Faça um programa que informe:
	
	a) a média de salário do grupo;
	b) a maior e a menor idade do grupo;
	c) a quantidade de mulheres com salário até R$2000,00.

*/

int main(){
	
	int age, hab, qntW, i;
	int menorIdade = 99, maiorIdade = 0;
	float salary, salAvg = 0;
	char sex;
	
	printf("Digite a quantidade de habitantes: ");
	scanf("%d", &hab);
	
	for(i = 1; i <= hab; i++){
		printf("\nDigite seu salario, sexo (F ou M), e idade:\n");
		
		printf("Salario: ");
		scanf("%f", &salary);
		salAvg += salary;
		
		printf("Sexo: ");
		scanf(" %c", &sex);
		if(sex == 'F' || sex == 'f' && salary <= 2000)
			qntW++;
			
		printf("Idade: ");
		scanf("%d", &age);
		if(age < menorIdade)
			menorIdade = age;
		if(age > maiorIdade)
			maiorIdade = age;
	}
	
	printf("Media dos salarios: %.2f\n", salAvg / hab);
	printf("A maior idade: %d\nA menor idade: %d\n", maiorIdade, menorIdade);
	printf("Quantidade de mulheres que recebem menos que R$ 2.000,00: %d\n", qntW);
	
	
	return 0;
}
