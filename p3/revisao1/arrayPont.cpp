#include <stdio.h>
#include <stdlib.h>

//void* malloc(size_t quantidade de bytes);

int main(){
	int *ponteiro;
	int tamanho, i;
	
	printf("Quantidade de numeros: ");
	scanf("%d", &tamanho);
	
	ponteiro = (int *)malloc(tamanho*sizeof(int));
	
	if(ponteiro == NULL){
		printf("Erro ao alocar memoria\n");
	}
	
	for(i=0; i<tamanho; i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &ponteiro[i]);
	}
	for(i=0; i<tamanho; i++){
		printf("%d\n", ponteiro[i]);
	}
	
	printf("Novo tamanho de array: ");
	scanf("%d", &tamanho);
	
	ponteiro = (int *)malloc(tamanho*sizeof(int));
	
	if(ponteiro == NULL){
		printf("Erro ao alocar memoria\n");
	}
	
	for(i=0; i<tamanho; i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &ponteiro[i]);
	}
	
	for(i=0; i<tamanho; i++){
		printf("%d\n", ponteiro[i]);
	}
	
	return 0;
}
