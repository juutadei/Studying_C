#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Criar a propia funcao realloc
	- deve aceitar todo tipo de variavel
	- nao usar realloc dentro da funcao
*/

void* myRealloc(void *srcblock, unsigned oldSize, unsigned newSize);

int main()
{
    int* myArr;
	int* newArr = NULL;
    int i, newSize;
    
    printf("Enter new size: ");
    scanf("%d", &newSize);
    
    myArr = (int*)malloc(3 * sizeof(int));
    
    if(!myArr)
    	return 1;
    else{
	    myArr[0] = 3;
	    myArr[1] = 5;
	    myArr[2] = 7;
	        
	    for(i = 0; i < 3; i++)
			printf("%d ", myArr[i]);
	}
    
    printf("\n");
    
	newArr = (int*)myRealloc(myArr, 3 * sizeof(int), newSize * sizeof(int));
	
	if(newArr)
		for(i = 0; i < newSize; i++)
			printf("%d ", newArr[i]);
	
    return 0;
}

void* myRealloc(void *srcblock, unsigned oldSize, unsigned newSize){
    
    int i;
    int smallSize;
    
    char* resultArr = (char*)malloc(newSize); //Alocar como char, para que possa contar byte por byte na hora da realocacao
    
    if(oldSize < newSize)
    	smallSize = oldSize;
    else
    	smallSize = newSize;
	
	if(!resultArr) return NULL;
	for(i = 0; i < smallSize; i++)
		resultArr[i] = ((char*)srcblock)[i]; //casting para char, se nao nenhum valor vai ser passado - definir a quantidade de bytes para passar
	free(srcblock);
	return resultArr;
}

