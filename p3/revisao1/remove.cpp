#include <stdio.h>
#include <stdlib.h>

int removeElemento(int indice, int vector[], int tamanho);
int insereElemento(int indice, int elemento, int vector[], int tamanho);

int main(){

	int vetor[5]= {1,2,3,4,5};
	int i;
	int tamanhoVetor = sizeof(vetor) / sizeof(vetor[0]);
	
	printf("Array original: \n\n");
	
	for(i=0; i < tamanhoVetor; i++){
		printf("%d \n", vetor[i]);
	}
	
	tamanhoVetor = removeElemento(2, vetor, tamanhoVetor);
	
	printf("\n\nDepois de remover o valor do indice 2 teremos: \n\n");
	for(i=0; i<tamanhoVetor; i++){
		printf("%d \n", vetor[i]);
	}
	
	tamanhoVetor = insereElemento(3, 87, vetor, tamanhoVetor);
	
	printf("\n\nDepois de inserir elemento no indice 3 teremos: \n\n");
	for(i=0; i<tamanhoVetor; i++){
		printf("%d \n", vetor[i]);
	}
	
	return 0;
}

int removeElemento(int indice, int vector[], int tamanho){
	int j;
	
	for(j=indice;j < tamanho-1; j++){
		vector[j] = vector[j+1];
	}
	return tamanho-1;
}

int insereElemento(int indice, int elemento, int vector[], int tamanho){
	int j;
	
	for(j=tamanho; j > indice; j--){
		vector[j] = vector[j-1];
	}
	
	vector[indice] = elemento;
	return tamanho+1;
}
