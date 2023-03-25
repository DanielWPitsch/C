//Escreva um programa que receba uma string e printe apenas as consoantes

#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char palavra[20];
	
	printf("Digite uma palavra qualquer: ");
	fgets(palavra, 20, stdin);
	
	for(i=0; i<strlen(palavra); i++){
		if(!(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i'|| palavra[i]=='o'|| palavra[i]=='u')){
			printf("%c", palavra[i]);
		}
	}
	
	return 0;
}
