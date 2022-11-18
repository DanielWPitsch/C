// Escreva um programa em C para encontrar o tamanho de uma string digitada pelo 
// usuário sem usar nenhuma função da biblioteca string.h

#include<stdio.h>

int main(){
	int i=0;
	char palavra[20];
	
	printf("Digite uma palavra qualquer: ");
	fgets(palavra, 20, stdin);
	
	while(palavra[i] != NULL){
		i++;
	}
	printf("A quantidade de letras da palavra eh: %d", i-1);
	
	return 0;
}
