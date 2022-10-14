#include <stdio.h>

int main(){

	float vetor[10];
	int i;
	int contador = 0;

	printf("Digite 10 numeros\n");
	for(i = 0; i < 10; i++) {

		printf("Digite o numero %d: ", i+1);
		scanf("%f", &vetor[i]);

		if(vetor[i] == 30){
			contador++;
		}
	} 

	printf("O numero 30 foi digitado: %d vezes", contador);
	return 0;
}