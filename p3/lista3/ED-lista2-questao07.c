/*
** Função : Ordenação por quicksort
** Autor : Daniel Warella Pitsch
** Data : 22/05/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define MAX 10
 
void quick_sort(int *a, int left, int right);
 
int main(){
	int i, vetor[MAX];
	srand(time(NULL));
	
	printf("Vetor inicial:\n");
	for(i=0; i<MAX; i++){
		vetor[i] = rand() % 100;
		printf("%d ", vetor[i]);
	}
 
	quick_sort(vetor, 0, MAX - 1);
 
	printf("\n\nValores ordenados:\n");
	for(i = 0; i < MAX; i++){
  		printf("%d ", vetor[i]);
 	}

	printf("\n\n-Fim-\n\n");
	return 0;
}

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}
