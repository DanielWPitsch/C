/*
 Fun��o : O programa diz se um n�mero qualquer � primo ou n�o
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observa��es:
*/

#include<stdio.h>

int main(){
	
	int numero, i;
	
	printf("Digite um valor qualquer para saber se eh primo: ");
	scanf("%d", &numero);
	
	for (i=2; i<numero; i++){
		if(numero % i == 0 && i != numero){
			printf("nao eh primo");
			break;
		}
	}
	if(i == numero){
		printf("eh primo");
	}
	
	return 1;
}
