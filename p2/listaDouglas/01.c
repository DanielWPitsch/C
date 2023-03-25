#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero qualquer: ");
	scanf("%d", &numero);
	
	printf("O numero antecessor ao que foi digitado eh: %d", numero-1);
	return 0;
}

