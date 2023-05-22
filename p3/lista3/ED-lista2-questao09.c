/*
** Fun��o : Faz ordena��o BubbleSort e conta a quantidade de vezes que entra na condi��o e as trocas em um array de elementos randomicos
** Autor : Daniel Warella Pitsch
** Data : 19/05/2023
** Observa��es:
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void bubble_sort (int *vetor, int tamanho);

int main(){
	srand(time(NULL));
	int *vetor;
	int tamanho, i;
	
	printf("Informe quantos elementos tem no vetor: ");
	scanf("%d", &tamanho);
	
	vetor = (int *)malloc(tamanho*sizeof(int));
	if(vetor == NULL){
		printf("erro ao alocar memoria");
	}
	printf("Vetor inicial: ");
	for(i=0; i<tamanho; i++){
		vetor[i] = rand() % 100;
		printf("%d ", vetor[i]);
	}
	
	bubbleSort(vetor, tamanho);
	
	printf("Vetor ordenado: ");
	for(i=0; i<tamanho; i++){
		printf("%d ", vetor[i]);
	}
	return 1;
}

void bubbleSort(int *vetor, int tamanho) {
    int k, j, aux, ifs=0, trocas=0;
	
    for (k = 0; k < tamanho-1; k++) {
        for (j = 0; j < tamanho-k-1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                trocas++;
                vetor[j + 1] = aux;
                trocas++;
                ifs++;
            }
        }
    }
    printf("\nifs: %d\n", ifs);
    printf("trocas: %d\n\n", trocas);
    
}
