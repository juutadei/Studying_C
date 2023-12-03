#include <stdio.h>
#include <stdlib.h>

/*
	PONTEIROS - O que eh e como criar
*/

int main(){
	
	int num = 10; //Criando uma variavel int comum
	int *p; //Criando uma variavel int de um ponteiro -> o '*' indica que eh um ponteiro
	
	p = &num; //p, q eh um ponteiro, recebe o end. de mem. da variavel num. 
			  //(onde a variavel num esta salva na memoria do pc)
			  
	printf("Valor de num: %d\n", num); //Imprime o valor da variavel num
	
	printf("Endereco de num: %p\n", &num); //Imprime o end. de mem. da variavel num. -> '%p' para indicar
	
	printf("Valor de p: %p\n", p); //Como p eh um pont. e recebe o valor da variavel num, seu valor vai ser
								   //o end. de mem. de num.
								 
	printf("Endereco de p: %p\n", &p); //Vai ser diferente do valor de p, o endereço de p eh onde a varaivel p
									   //esta armazenada. o valor de p eh o endereco de num que ela recebe
									   
	printf("Valor apontado por p: %d\n", *p); //Para acessar o valor que p aponta, eh preciso acessar p com 
											  //o indicador de ponteiro '*'. como p -> num, vai imprimir o valor
											  //armazenado em num.
	
	printf("Tamanho de p: %d\n", sizeof(p));
	
	return 0;
}
