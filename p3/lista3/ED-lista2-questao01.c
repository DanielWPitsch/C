/*
** Função : Ordenação crescente dos elementos de um vetor com selection sort
** Autor : Daniel Warella Pitsch
** Data : 17/05/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int vetor[], int tamanho);

int main() {
	int vetor[10];
	int i = 0;
	
	for (i = 0; i < 10; i++) {
    	vetor[i] = rand() % 100;
	}
	
	printf("Vetor inicial: ");
	for (i = 0; i < 10; i++) {
    	printf("%d ", vetor[i]);
  	}
  
	selectionSort(vetor, 10);
	printf("\nOrdenado: ");
  
	for (i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}
  	
  	printf("\n-Fim-");
	return 0;
}

void selectionSort(int vetor[], int tamanho) {
	int i, j, menor, auxiliar;

	for (i = 0; i < tamanho - 1; i++) {
    	menor = i;
    	for (j = i + 1; j < tamanho; j++) {
    		if (vetor[j] < vetor[menor]) {
        		menor = j;
      		}
    	}
    	auxiliar = vetor[i];
    	vetor[i] = vetor[menor];
    	vetor[menor] = auxiliar;
	}
}
