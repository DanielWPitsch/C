/*
** Função : Algoritmo que usa estruturas aninhadas tendo funções de ler, escrever e excluir
** Autor : Daniel Warella Pitsch
** Data : 18/05/2023
** Observações:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int dia;
	char mes[10];
	int ano;	
}Data;

typedef struct empregado{
	char nome[30];
	Data nascimento;
	char RG[9];
	Data admissao;
	float salario;
}Empregado;

void listarElementos();
int removeElemento(int indice, Empregado** Empregados, int tamanho);

int main(){
	int quantidade = 0, loop=1, opcao, indice;
	Empregado* Empregados = (Empregado*)malloc(quantidade * sizeof(Empregado));
	
	if(Empregados == NULL){
		printf("Erro ao alocar memoria");
		exit(1);
	}
	
	while(loop != 0){
		printf("\nQual rotina voce deseja fazer?\nInforme digitando o numero referente a rotina");
		printf("\n1-Escrever(Criar)\n2-Ler\n3-Excluir\n4-Sair\n");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			quantidade++;
			if(quantidade > 1){
				Empregado* Empregados = (Empregado *)realloc(Empregados, quantidade*sizeof(Empregado));
				if(Empregados == NULL){
					printf("Erro ao realocar memoria");
					free(Empregados);
					return 1;
				}
			}
			
			printf("Informe a dia nasicmento: ");
			scanf("%d", &Empregados[quantidade-1].nascimento.dia);
			
			printf("Informe o mes nasicmento: ");
			scanf("%s", &Empregados[quantidade-1].nascimento.mes);
			
			printf("Informe o ano nasicmento: ");
			scanf("%d", &Empregados[quantidade-1].nascimento.ano);
			
			printf("Informe o RG: ");
			scanf("%s", &Empregados[quantidade-1].RG);
		
			printf("Informe a dia admissao: ");
			scanf("%d", &Empregados[quantidade-1].admissao.dia);
			
			printf("Informe o mes admissao: ");
			scanf("%s", &Empregados[quantidade-1].admissao.mes);
			
			printf("Informe o ano admissao: ");
			scanf("%d", &Empregados[quantidade-1].admissao.ano);
			
			printf("Informe o salario: ");
			scanf("%f", &Empregados[quantidade-1].salario);
			
		}else if(opcao == 2){
			listarElementos(quantidade, Empregados);
						
		}else if(opcao ==3){
			listarElementos(quantidade, Empregados);
			printf("\nInforme qual empregado voce deseja excluir?\n");
			scanf("%d", &indice);
			int j;
			for(j=indice;j < quantidade; j++){
				strcpy(Empregados[j].nome, Empregados[j+1].nome);
				Empregados[j].nascimento.dia = Empregados[j+1].nascimento.dia;
				strcpy(Empregados[j].nascimento.mes, Empregados[j+1].nascimento.mes);
				Empregados[j].nascimento.ano = Empregados[j+1].nascimento.ano;
				strcpy(Empregados[j].RG, Empregados[j+1].RG);
				Empregados[j].admissao.dia = Empregados[j+1].admissao.dia;
				strcpy(Empregados[j].admissao.mes, Empregados[j+1].admissao.mes);
				Empregados[j].admissao.ano = Empregados[j+1].admissao.ano;
				Empregados[j].salario = Empregados[j+1].salario;
			}
			quantidade--;
			
		}else if(opcao == 4){
			break;
		}else{
			printf("Opcao inválida!");
		}
		printf("\n\nDigite:\n1-Para fazer nova operacao\n0-Sair\n");
		scanf("%d", &loop);
	}
	free(Empregados);
	printf("-Fim-");
	return 0;
}

void listarElementos(int tamanho, Empregado Empregados[]){
	int i;
	printf("\n-Lista de Empregados-", i);
	if(tamanho > 0){
		for (i=0; i < tamanho; i++){
			printf("\n\nEmpregado %d", i);
			printf("\nData de nascimento: %d/%s/%d", Empregados[i].nascimento.dia, Empregados[i].nascimento.mes, Empregados[i].nascimento.ano);
			printf("\nRG: %s", Empregados[i].RG);
			printf("\nData de Admissao: %d/%s/%d", Empregados[i].admissao.dia, Empregados[i].admissao.mes, Empregados[i].admissao.ano);
			printf("\nSalario: %.2f", Empregados[i].salario);
		}
	}else{
		printf("Nenhum funcionario cadastrado!");
	}
	
}
