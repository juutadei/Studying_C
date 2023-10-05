#include <stdio.h>
#include <stdlib.h>

#define MAX 3

/*
	Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
	diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
	vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
	vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
	receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
	determine e mostre:
	a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
	o valor total das vendas e o valor da comissão que será paga ao vendedor.
	b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
	empatados).
*/

int main(){
	
	int i, j, posicao, empate[MAX];
	int vendaObj[MAX], maisVendido = 0;
	float valorObj[MAX];
	float vendaTotal = 0, total, comissao, salario = 1100;
	
	//Informação dos produtos
	printf("De a quantidade e o valor dos produtos:\n\n");
	for(i = 0; i < MAX; i++){
		printf("PRODUTO %d:\n", i + 1);
		printf("Valor: ");
		scanf("%f", &valorObj[i]);
		printf("Vendas: ");
		scanf("%d", &vendaObj[i]);
		total = vendaObj[i] * valorObj[i];
		vendaTotal += total;
		printf("\n");
	}
	
	//Comissão do vendedor
	comissao = vendaTotal * 0.05;
	
	printf("\n\n-------INFORMACOES POR PRODUTO-------\n\n");
	
	for(i = 0; i < MAX; i++){
		printf("PRODUTO %d:\n", i + 1);
		printf("Vendeu: %d\n", vendaObj[i]);
		printf("Preco: R$ %.2f\n", valorObj[i]);
		printf("Total vendas: R$ %.2f\n", vendaObj[i] * valorObj[i]);
		printf("\n\n");
	}
	
	printf("\n\n-------INFORMACOES GERAIS-------\n\n");
	
		printf("TOTAL DAS VENDAS: %.2f\n", vendaTotal);
		printf("COMISSAO DO VENDEDOR: %.2f\n", comissao);
		printf("SALARIO FINAL DO VENDEDOR (R$ 1.100 + comissao): R$ %.2f\n\n", comissao + salario);
		
		for(i = 0; i < MAX; i++){
			if(vendaObj[i] > mais)
		}
	
	return 0;
}
