//Mostrar os n primeiros números de Fibonacci usando Arrays.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *fib, quantidade, i, anterior=1, proximo=1, auxiliar;
	
	printf("Quantos dos primeiros numeros de fibonacci devem ser exibidos? ");
	scanf("%d", &quantidade);
	
	fib = (int *)malloc(quantidade*sizeof(int));
	
	if(fib == NULL){
		printf("Erro ao alocar memoria\n");
	}
	
	fib[0] = 1;
	fib[1] = 1;
	for (i=2; i<quantidade; i++){
		fib[i] = anterior + proximo;
		anterior = proximo;
		proximo = fib[i];
	}
	
	for(i=0; i<quantidade; i++){
		printf("%d ", fib[i]);
	}
	
	return 0;
}
