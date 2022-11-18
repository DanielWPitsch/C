//Faça um programa que receba um nome e crie uma string "Bem vindo, NOME", 
//onde o nome digitado deve aparecer no lugar da palavra "NOME". Depois printe a string resultante.

#include<stdio.h>
#include<string.h>

int main(){
	int i,k;
	char palavra[10];
	char saudacao[20] = {"Bem vindo, NOME"};
	
	printf("Digite seu nome: ");
	fgets(palavra, 10, stdin);
	
	for(i=0; i<strlen(saudacao); i++){
		if(saudacao[i] == 'N'){
			for(k=0; k<strlen(palavra); k++){
				saudacao[i] = palavra[k];
				i++;
			}
		}
	}
	
	printf("%s", saudacao);
	
	return 0;
}
