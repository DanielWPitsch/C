//Ler n números inteiros e exibir o maior, o menor, a média e quantos são maiores que a média;

#include <stdio.h>
#include <stdlib.h>

int main(){
	float *numeros, soma, media, menor, maior;
	int quantidade, i, maiorQmedia;
	
	printf("Informe a quantidade de numeros da amostra: ");
	scanf("%d", &quantidade);
	
	numeros = (float *)malloc(quantidade*sizeof(float));
	
	if(numeros == NULL){
		printf("Erro ao alocar memoria\n");
	}
	
	for(i=0; i<quantidade;i++){
		printf("Numero %d: ", i+1);
		scanf("%f", &numeros[i]);
		soma += numeros[i];
		if(i == 0){
			maior = numeros[i];
			menor = numeros[i];
		}
		if(numeros[i] > maior){
			maior = numeros[i];
		}
		if(numeros[i] < menor){
			menor = numeros[i];
		}
		
	}
	media = soma/quantidade;
	
	for(i=0; i<quantidade;i++){
		if(numeros[i] > media){
			maiorQmedia++;
		}
	}
	
	printf("\n\nO maior numero eh: %.2f", maior);
	printf("\nO menor numero eh: %.2f", menor);
	printf("\nA media eh: %.2f", media);
	printf("\nA quantidade de numeros maior que a media sao: %d", maiorQmedia);

	return 0;
}
