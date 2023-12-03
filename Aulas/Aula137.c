#include <stdio.h>
#include <stdlib.h>

/*
	Como criar ponteiros para uma struct
*/

typedef struct{
	int dia, mes, ano;
}Data;

void imprimirP(Data *x){ //Uma variavel do tipo pont. apontando para uma struct Data

	printf("%d/%d/%d\n", x->dia, x->mes, x->ano); //Eh preciso usar '->' para apontar
												  //um ponteiro para uma variavel de struct
}

int main(){

	Data *p; //Uma variavel do tipo pont. apontando para uma struct Data
	Data data;
	
	printf("Entre o dia, mes e ano (dd/mm/aaaa): ");
	scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
	
	printf("%d/%d/%d\n", data.dia, data.mes, data.ano);	
	
	p = &data; //O ponteiro p recebe o endereco de data para conseguir manipular dados dessa struct
	
	imprimirP(p); //'p' eh passado como parametro
	
	p->dia = 20; //ponteiro p altera o valor da varaivel 'dia' da struct
	
	imprimirP(p);
	
	return 0;
}
