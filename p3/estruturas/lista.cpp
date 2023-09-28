/*
** Função : Lista encadeada
** Autor : Daniel Warella Pitsch
** Data : 18/05/2023
** Observações:
*/

#include<stdio.h>
#include<stdlib.h>

struct listaE{
	int info;
	struct listaE* proximo; 
};
typedef struct listaE listaEncadeada; 

listaEncadeada* criaLista(void){
	return NULL;
}

void inserirLista(listaEncadeada* l, int i){
	listaEncadeada* novo = (listaEncadeada*)malloc(sizeof(listaEncadeada));
	novo->info = i;
	novo->proximo = l;
	l* = novo;
}

int main(){
	listaEncadeada *listaNova;
	listaNova = criaLista();
	int opcao, num;
	
	do{
		system("cls");
		printf("-Lista encadeada-\n");
		printf("1-Inserir elemento");
		scanf("%d", &opacao);
		
		if(opcao == 1){
			printf("Digite o numero a ser inserido na lista");
			scanf("%d", &num);
			listaNova = inserirLista(listaNova, num);
		}
	}
}
