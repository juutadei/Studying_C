#include <stdio.h>
#include <stdlib.h>

void recursiveFunc(int num);

int main(){
	
	int num;
	
	printf("Digite um num. maior que 0: ");
	scanf("%d", &num);
	
	recursiveFunc(num);
	
	return 0;
}

void recursiveFunc(int num){
	
	if(num == 0){
		printf("%d\n", num);
	}else{
		recursiveFunc(num - 1);
		printf("%d\n", num);
	}
}
