/*
** Função : Algoritmo que lê, escreve e exclui uma struct em um vetor dinamico de structs
** Autor : Daniel Warella Pitsch
** Data : 17/05/2023
** Observações:
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct aeroporto{
	char Sigla[3];
	char Cidade[50];
	char Pais[30];
	float Taxa;
	int Capacidade;
}Aeroporto;

void listarAeroportos();
void criarAeroporto(int quantidade, Aeroporto **Aeroportos);

int main(){
	Aeroporto* Aeroportos;
	int quantidade=0, loop=1, opcao, i, tamanho=0, indice;
	Aeroportos = (Aeroporto *)malloc(quantidade*sizeof(Aeroporto));
	
	if(Aeroportos == NULL){
		printf("Erro ao alocar memoria");
	}
	
	while(loop != 0){
		printf("Qual rotina voce deseja fazer?\nInforme digitando o numero referente a rotina");
		printf("\n1-Escrever(Criar)\n2-Ler\n3-Excluir\n");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			quantidade++;
	
			if(quantidade > 1){
				Aeroportos = (Aeroporto *)realloc(Aeroportos, quantidade*sizeof(Aeroporto));
		
				if(Aeroportos == NULL){
					printf("Erro ao realocar memoria");
					free(Aeroportos);
					return 1;
				}
			}
			printf("Informe a Sigla: ");
			scanf("%s", &Aeroportos[quantidade-1].Sigla);
			//printf("\n%s\n", Aeroportos[quantidade-1].Sigla);
			
			printf("Informe a Cidade: ");
			scanf("%s", &Aeroportos[quantidade-1].Cidade);
			
			printf("Informe a Pais: ");
			scanf("%s", &Aeroportos[quantidade-1].Pais);
			
			printf("Informe a Taxa: ");
			scanf("%f", &Aeroportos[quantidade-1].Taxa);
			
			printf("Informe a Capacidade: ");
			scanf("%d", &Aeroportos[quantidade-1].Capacidade);
			
		}else if(opcao == 2){
			listarAeroportos(quantidade, Aeroportos);
		}else if(opcao ==3){
			listarAeroportos(quantidade, Aeroportos);
			printf("Informe qual aeroporto voce deseja excluir?\n");
			scanf("%d", &indice);
			//funcao remove elemento pelo indice
		}else{
			printf("Opcao inválida!");
		}
		printf("\nDigite:\n1-Para fazer nova operacao\n0-Sair\n");
		scanf("%d", &loop);
	}
	printf("-Fim-");
	return 0;
}

void listarAeroportos(int tamanho, Aeroporto Aeroportos[]){
	int i;
	printf("\n-Lista de Aeroportos-\n\nAeroporto %d\n", i);
	for (i=0; i < tamanho; i++){
		printf("\nSigla: %s", Aeroportos[i].Sigla);
		printf("\nCidade: %s", Aeroportos[i].Cidade);
		printf("\nPais: %s", Aeroportos[i].Pais);
		printf("\nTaxa: %.2f", Aeroportos[i].Taxa);
		printf("\nCapacidade: %d\n", Aeroportos[i].Capacidade);
	}
}
