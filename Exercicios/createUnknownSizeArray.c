#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printArr(int* arr, int size);
int* createUnknownSizeArray(int* arrSize);
int* adjustableRealloc(int* arrSize);

int main()
{
	int size;
	int* myArr = adjustableRealloc(&size);
	printArr(myArr, size);
}


void printArr(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// finally we can pass its size... Afterwards..
int* createUnknownSizeArray(int *arrSize)
{
	int num, lastIndex = 0, size = 0;
	int* arr = NULL;
	int* temp = NULL;

	printf("Enter num: ");
	scanf("%d", &num);
	while (num != -1)
	{
		size++;
		temp = (int*)realloc(arr, size * sizeof(int));
		if (!temp) return NULL;
		arr = temp;
		arr[lastIndex] = num;
		lastIndex++;
		printf("Enter num: ");
		scanf("%d", &num);
	}
	*arrSize = size;
	return arr;
}



// finally we can pass its size... Afterwards..
int* adjustableRealloc(int* arrSize)
{
	int num, lastIndex = 0, size = 2;
	int* arr = NULL;
	int* temp = NULL;

	printf("Enter num: ");
	scanf("%d", &num);
	if (num == -1) // Empty Array
	{
		*arrSize = 0;
		return NULL;
	}
	else
	{
		temp = (int*)malloc(size * sizeof(int));
		if (!temp) return NULL;
		arr = temp;
	}
	while (num != -1)
	{
		if (lastIndex == size) // no other place to add values..
		{
			size = size * 2;
			temp = (int*)realloc(arr, size * sizeof(int));
			if (!temp) return NULL;
			arr = temp;
		}
		arr[lastIndex] = num;
		lastIndex++;
		printf("Enter num: ");
		scanf("%d", &num);
	}
	arr = (int*)realloc(arr, lastIndex * sizeof(int));
	// assert...
	*arrSize = lastIndex;
	return arr;
}
