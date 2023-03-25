#include <stdio.h>

int main(){
	
	float vetor[10];
	float acumulador = 0;
	int i;
	int tamanho = (sizeof(vetor)/sizeof((vetor)[0]));
	float media;
	
	printf("Digite 10 valores para tirar a media deles\n");
	for (i = 0; i < 10; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%f", &vetor[i]);
		acumulador = acumulador + vetor[i]; 
	}
	
	media = acumulador / tamanho;
	printf("A media eh: %.2f", media);	
	
	return 0;
}
