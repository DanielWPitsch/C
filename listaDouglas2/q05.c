//Escreva um programa que receba uma string e informe se ela é igual a "bom dia"

#include<string.h>
#include<stdio.h>

int main(){
	int i;
	char palavra[10];
	char teste[] = {"bom dia"};
	int iguais =0;
	
	printf("Digite uma palavra qualquer: ");
	fgets(palavra, 10, stdin);
	
	for(i=0; i<strlen(palavra); i++){
		if(teste[i] == palavra[i]){
			iguais++;
		}
	}

	if(iguais == 7 && palavra[8] == '\0'){
		printf("sao iguais");
	}else{
		printf("Nao sao iguais");
	}	
	
	return 0;
}
