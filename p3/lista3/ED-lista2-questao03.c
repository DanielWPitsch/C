/*
** Fun��o : Algoritmo que l�, escreve e exclui uma struct em um vetor dinamico de structs
** Autor : Daniel Warella Pitsch
** Data : 17/05/2023
** Observa��es:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct aeroporto{
	char Sigla[3];
	char Cidade[50];
	char Pais[30];
	float Taxa;
	int Capacidade;
}Aeroporto;

void listarElementos();
void criarElemento(int quantidade, Aeroporto Aeroportos[]);
void removerElemento(int indice, int quantidade, Aeroporto Aeroportos[]);

int main(){
	int quantidade=0, loop=1, opcao, i, tamanho=0;
	Aeroporto* Aeroportos = (Aeroporto *)malloc(quantidade*sizeof(Aeroporto));
	
	if(Aeroportos == NULL){
		printf("Erro ao alocar memoria");
	}
	
	while(loop != 0){
		printf("Qual rotina voce deseja fazer?\nInforme digitando o numero referente a rotina");
		printf("\n1-Escrever(Criar)\n2-Ler\n3-Excluir\n4-Sair\n");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			quantidade++;
			if(quantidade > 1){
				Aeroporto* Aeroportos = (Aeroporto *)realloc(Aeroportos, quantidade*sizeof(Aeroporto));
				if(Aeroportos == NULL){
					printf("Erro ao realocar memoria");
					free(Aeroportos);
					exit(0);
				}
			}
			criarElemento(quantidade, Aeroportos);
		}else if(opcao == 2){
			listarElementos(quantidade, Aeroportos);
		}else if(opcao ==3){
			listarElementos(quantidade, Aeroportos);
			removerElemento(indice, quantidade, Aeroportos);
			quantidade--;
		}else if(opcao == 4){
			break;
		}else{
			printf("Opcao inv�lida!");
		}
		printf("\nDigite:\n1-Para fazer nova operacao\n0-Sair\n");
		scanf("%d", &loop);
	}
	printf("-Fim-");
	free(Aeroportos);
	return 0;
}

void listarElementos(int tamanho, Aeroporto Aeroportos[]){
	int i;
	printf("\n-Lista de Aeroportos-\n", i);
	if(tamanho > 0){
		for (i=0; i < tamanho; i++){
			printf("\nAeroporto %d\n", i);
			printf("\nSigla: %s", Aeroportos[i].Sigla);
			printf("\nCidade: %s", Aeroportos[i].Cidade);
			printf("\nPais: %s", Aeroportos[i].Pais);
			printf("\nTaxa: %.2f", Aeroportos[i].Taxa);
			printf("\nCapacidade: %d\n", Aeroportos[i].Capacidade);
		}
	}else{
		printf("Nenhum aeroporto cadastrado!");
	}
	
}
void criarElemento(int quantidade, Aeroporto Aeroportos[]){
	printf("Informe a Sigla: ");
	scanf("%s", &Aeroportos[quantidade-1].Sigla);
	
	printf("Informe a Cidade: ");
	scanf("%s", &Aeroportos[quantidade-1].Cidade);
	
	printf("Informe a Pais: ");
	scanf("%s", &Aeroportos[quantidade-1].Pais);
	
	printf("Informe a Taxa: ");
	scanf("%f", &Aeroportos[quantidade-1].Taxa);
	
	printf("Informe a Capacidade: ");
	scanf("%d", &Aeroportos[quantidade-1].Capacidade);
}

void removerElemento(int indice, int quantidade, Aeroporto Aeroportos[]){
	int j, indice;
	printf("\nInforme qual aeroporto voce deseja excluir?\n");
	scanf("%d", &indice);
	
	for(j=indice;j < quantidade; j++){
		strcpy(Aeroportos[j].Sigla, Aeroportos[j+1].Sigla);
		strcpy(Aeroportos[j].Cidade, Aeroportos[j+1].Cidade);
		strcpy(Aeroportos[j].Pais, Aeroportos[j+1].Pais);
		Aeroportos[j].Taxa = Aeroportos[j+1].Taxa;
		Aeroportos[j].Capacidade = Aeroportos[j+1].Capacidade;
	}
}
