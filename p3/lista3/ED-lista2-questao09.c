/*
** Função : Faz ordenação BubbleSort e conta a quantidade de vezes que entra na condição e as trocas 
** Autor : Daniel Warella Pitsch
** Data : 19/05/2023
** Observações:
*/

#include<stdio.h>

void bubble_sort (int vetor[], int n);

int main(){
	int vetor[] = {7,6,3,23,222,1,2,3,4,5};
	int tamanho = sizeof(vetor) / sizeof(vetor[0]);
	int i, ifs;
	
	bubbleSort(vetor, tamanho);
	
	for(i=0; i<tamanho; i++){
		printf("vetor[%d]: %d\n",i, vetor[i]);
	}
	return 1;
}

void bubbleSort(int vetor[], int tamanho) {
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
    printf("ifs: %d\n", ifs);
    printf("trocas: %d\n\n", trocas);
    
}
