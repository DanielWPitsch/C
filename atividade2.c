#include <stdio.h>

int main (){
	
	int vetor[10];
	int i, numero, maior, menor;
	int contador = 0;
	int tamanho = sizeof(vetor) / sizeof((vetor)[0]);
	
	printf("Digite 10 numeros\n");
	for(i = 0; i < tamanho; i++){
		printf("Digite o valor %d: \n", i);
		scanf("%d", &vetor[i]);
		if(vetor[i] == 3){
			contador++;
		}
	}
	printf("A quantidade de vezes que o numero 3 aparece eh: %d\n", contador);
	printf("Qual numero novo voce deseja verificar? ");
	scanf("%d", &numero);
	contador = 0;
	for(i = 0; i < tamanho; i++){
		if(vetor[i] == numero){
			contador++;
		}
		if(i == 0 || vetor[i] > maior){
			maior = vetor[i];
		}
		if(i == 0 || vetor[i] < menor){
			menor = vetor[i];
		}
	}
	printf("A quantidade de vezes que o numero digitado aparece eh: %d\n", contador);
	printf("O maior numero do vetor eh: %d e o menor eh: %d", maior, menor);
	
	return 0;	
}
