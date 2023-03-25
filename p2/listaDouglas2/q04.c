//Escreva um programa que receba uma string e printe a quantidade de palavras que existem nela

#include<stdio.h>
#include<string.h>

int main(){
	int i;
	int qtdPalavras=0;
	char palavra[20];
	
	printf("Digite uma palavra qualquer: ");
	fgets(palavra, 20, stdin);
	
	if(palavra[0] != '\n'){
		qtdPalavras++;
	}
	
	for(i=0; i<strlen(palavra); i++){
		if(palavra[i] ==' '){
			qtdPalavras++;
		}
	}
	
	if(qtdPalavras > 0){
		printf("Quantidade de palavras eh: %d", qtdPalavras);	
	}else{
		printf("Quantidade de palavras eh: %d", qtdPalavras);
	}
	
	return 0;
}
