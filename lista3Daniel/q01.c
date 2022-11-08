#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[10];
	char cpf[14];
	char rg[10];
	char email[25];
	char letra;
	int result;
	FILE *fp;
	char leitura[20];
	
 	printf("Escreva seu nome: ");
 	gets(nome);
 	
 	printf("Escreva seu CPF: ");
 	gets(cpf);
 	
 	printf("Escreva seu RG: ");
 	gets(rg);
 	
 	printf("Escreva seu email: ");
 	gets(email);
	
	fp = fopen("clientes.txt", "a");
	
	if(fp == NULL){
		printf("Erro na abertura do arquivo. \n");
		system("pause");
		exit(1);
	}
	
	result = fputs (nome, fp);
	result = fputs ("\n", fp);
	
	result = fputs (cpf, fp);
	result = fputs ("\n", fp);
	
	result = fputs (rg, fp);
	result = fputs ("\n", fp);
	
	result = fputs (email, fp);
	result = fputs ("\n", fp);

	if(result == EOF){
		printf("Erro na gravacao\n");
	}
	
	fclose(fp);
	
	printf("\n\n Listando registros\n\n");
	
    fp = fopen("clientes.txt", "r");
    while(fgets(leitura, 20, fp) != NULL){
        printf("%s", leitura);
    }
    fclose(fp);	
	system("pause");
	return 0;
}
