#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create1dByRef(int size, int** p);

int main(){
	int i, size;
	int *ptr;
	
	printf("Enter size: ");
	scanf("%d", &size);
	
	create1dByRef(size, &ptr);
	
	for(i = 0; i < size; i++)
		printf("%d ", ptr[i]);
	
	return 0;
}

void create1dByRef(int size, int** p){
	int i;
	
	srand(time(NULL));
	
	*p = (int*)malloc(size * sizeof(int));
	
	for(i = 0; i < size; i++){
		(*p)[i] = 1 + rand() % 20;
	}
}
