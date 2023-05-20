/*
** Função : 
** Autor : Daniel Warella Pitsch
** Data : 17/05/2023
** Observações:
*/

#include<stdio.h>

void ehPrimo(int numero);

int main(){
	
	int numero;
	
	printf("Digite um valor qualquer para saber se eh primo: ");
	scanf("%d", &numero);
	
	ehPrimo(numero);
	
	return 0;
}

void ehPrimo(int numero){
	int i;
	for (i=2; i<numero; i++){
		if(numero % i == 0 && i != numero){
			printf("nao eh primo");
			break;
		}
	}
	if(i == numero){
		printf("eh primo");
	}
}
