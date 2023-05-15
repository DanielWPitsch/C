#include <stdio.h>
#include <stdlib.h>

int fat(int n);

int main(){
	int numero;

	printf("Informe um numero pra recerber seu fatorial: ");
	scanf("%d", &numero);
	
	printf("O fatorial eh: %d", fat(numero));
	
	return 0;
}

int fat(int n){
	if(n ==0){
		return 1;
	}else{
		return n*fat(n-1);
	}
}
