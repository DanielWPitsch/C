//Escreva um programa que receba uma string e printe-a na ordem inversa

#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char palavra[20];
	
	printf("Digite uma palavra qualquer: ");
	fgets(palavra, 20, stdin);
	
	for(i=strlen(palavra); i>=0; i--){
		printf("%c", palavra[i]);
	}
	
	return 0;
}
