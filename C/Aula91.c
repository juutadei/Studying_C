#include <stdio.h>

/*
	Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer pre�o. 
	O monge, necessitando de alimentos, indagou � rainha sobre o pagamento, 
	se poderia ser feito com gr�os de trigo dispostos em um tabuleiro de xadrez 
	(que possui 64 casas), de tal forma que o primeiro quadro deveria conter 
	apenas um gr�o e os quadros subsequentes, o dobro do quadro anterior. 
	Crie um programa para calcular o total de gr�os de trigo que o monge recebeu.
	
	long long int %d -> %lld ou %lli
	long double %f -> %Lf
	_mingw_printf();
*/

int main(){
	
	short int i;
	long double inicio = 1, soma = 1;
	
	for(i = 1; i < 64; i++){
		inicio = inicio * 2;
		soma += inicio;
		__mingw_printf("%.1Lf\n", inicio);
	}
	
	__mingw_printf("O valor total eh: %.1Lf\n", soma);
	
	return 0;
}
