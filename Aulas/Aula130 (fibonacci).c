#include <stdio.h>
#include <stdlib.h>

/*
	Calcular fatorial com funcao recursiva (fibonacci)
*/

int fibonacci(int n);

int main(){
	
	int num, res;
	
	printf("Enter a number: ");
	scanf("%d", &num);
		
	res = fibonacci(num);
	
	printf("%d\n", res);
	
	return 0;
}

int fibonacci(int n){
	int res;
	
	if(n == 0 || n == 1)  
		return 1;
	else{
		return n * fibonacci(n - 1);
	}
}
