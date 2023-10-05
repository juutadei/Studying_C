#include <stdio.h>

/*
	Fa�a um programa que calcule a m�dia de sal�rios de uma empresa, 
	pedindo ao usu�rio a quantidade de funcion�rios e o sal�rio de cada funcion�rio. 
	Ao final, o programa deve imprimir a m�dia dos sal�rios informados, 
	o sal�rio mais alto e o sal�rio mais baixo.
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
