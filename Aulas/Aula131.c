#include <stdio.h>
#include <stdlib.h>

/*
	calcular o enésimo termo da sequência de FIBONACCI com recursão.
	1 2 3 4 5 6
	0 1 1 2 3 5
*/

//
int termoFibonacci(int n);

int main(){
	int res, termo;
	
	printf("Qual termo: ");
	scanf("%d", &termo);
	
	res = termoFibonacci(termo);
	
	printf("%d\n", res);
	
	
	return 0;
}

int termoFibonacci(int n){
	if(n == 1)
		return 0;
	else{
		if(n == 2)
			return 1;
		else
			return termoFibonacci(n - 1) + termoFibonacci(n -2);
	}
}
