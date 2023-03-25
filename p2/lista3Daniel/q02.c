#include <stdio.h>
#include <stdlib.h>

void lehArquivo(char nomeArquivo[], FILE *fp, char leitura[]){
	if(fp == NULL){
		printf("Erro na abertura do arquivo. \n");
		system("pause");
		exit(1);
	}
	while(fgets(leitura, 20, fp) != NULL){
    	printf("%s", leitura);
	}
	fclose(fp);
}

int main(){
	
	FILE *fp;
	char leitura[20];
	int opcao;
	
	printf("Para abrir o arquivo que deseja digite: \n1-Clientes \n2-Produtos \n3-Funcionarios\n");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		fp = fopen("clientes.txt", "r");
		lehArquivo("clientes.txt", fp, leitura);
	}else if(opcao == 2){
		fp = fopen("produtos.txt", "r");
		lehArquivo("produtos.txt", fp, leitura);
	}else if(opcao == 3){
		fp = fopen("funcionarios.txt", "r");
		lehArquivo("funcionarios.txt", fp, leitura);
	}else{
		printf("Opcao invalida!");
	}
	
	system("pause");
	return 0;
}
