#include <stdio.h>

/*
	Faça um programa que calcule a média de salários de uma empresa, 
	pedindo ao usuário a quantidade de funcionários e o salário de cada funcionário. 
	Ao final, o programa deve imprimir a média dos salários informados, 
	o salário mais alto e o salário mais baixo.
*/

int main(){
	
	int numFuncionarios, i;
	float salario, mediaSalario, aux, salarioAnterior;
	float maiorSalario = 0, menorSalario = 99999, salarioTotal = 0;
	
	printf("Quantos funcionarios?\n");
	scanf("%d", &numFuncionarios);
	
	for(i = 1; i <= numFuncionarios; i++){
		printf("Salario funcionario %d: ", i);
		scanf("%f", &salario);
		salarioTotal += salario;
		
		if(salario > maiorSalario)
			maiorSalario = salario;
			
		if(salario < menorSalario)
			menorSalario = salario;
	}
	
	mediaSalario = salarioTotal / numFuncionarios;
	
	printf("A media salarial da empresa eh: R$ %.2f\n", mediaSalario);
	printf("O MENOR salario eh de: R$ %.2f\n", menorSalario);
	printf("O MAIOR salario eh de: R$ %.2f\n", maiorSalario);
	
	return 0;
}
