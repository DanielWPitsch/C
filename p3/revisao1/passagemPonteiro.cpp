#include <stdio.h>
#include <stdlib.h>

void mudaValor(int *numero){
	int i;
	
	for(i=0;i<3;i++){
		printf("\nDigite os novos valores de n: ");
		scanf("%d", &numero[i]);
	}
}
void imprime(int n[]){
	int i;
	for (i = 0; i <3; i++) {
		printf("\n %d \n", n[i]);
	}
}

int mudaUmValor(int n1){
	return n1*2;
}

int main(){
	
	int n[3];
	int i;

	int *n2 = n;
	mudaValor(n2);
	imprime(n);
	
	printf("dobro do numero na posicao [0]: %d", mudaUmValor(n[0]));
	
	imprime(n);
	
	return 0;
}
