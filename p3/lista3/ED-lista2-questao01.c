/*
** Função : Ordenação crescente dos elementos de um vetor
** Autor : Daniel Warella Pitsch
** Data : 17/05/2023
** Observações:
*/

#include<stdio.h>

int main(){
	int i, vetor[] = {8, 4, 7, 9, 1, 3, 2, 6};
	int tamanho = sizeof(vetor)/sizeof(vetor[0]);
	int menor = vetor[0];
	
	for(i=0; i<tamanho; i++){
		if(menor > vetor[i]){
			menor = vetor[i];	
		}
	}
	
	printf("menor: %d", menor);
	
	return 0;
}
