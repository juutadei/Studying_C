#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void toUpper(char str1[], char str2[]);
void toLower(char str1[], char str2[]);

int main(){
	
	char str1[] = {"Ola. Bom dia."}, str2[20];
	
	printf("%s\n", str1);
	
	toUpper(str1, str2);
	printf("%s\n", str2);

	toLower(str1, str2);
	printf("%s\n", str2);
	
	return 0;
}

void toUpper(char str1[], char str2[]){
	int i = 0;
	
	while(str1[i] != '\0'){
		str2[i] = toupper(str1[i]);
		i++;
	}
	
	str2[i] = '\0';
}

void toLower(char str1[], char str2[]){
	int i = 0;
	
	while(str1[i] != '\0'){
		str2[i] = tolower(str1[i]);
		i++;
	}
	
	str2[i] = '\0';
}
