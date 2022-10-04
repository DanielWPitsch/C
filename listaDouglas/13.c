#include <stdio.h>

int main(){
	
	int i;
	float vetor[5];
	float acumulador = 0;
	float media;
	
	printf("Digite 5 numeros\n");
	for (i = 0; i < 5; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%f", &vetor[i]);
		acumulador = acumulador + vetor[i]; 
	}
	
	media = acumulador / 5;
	
	printf("A soma dos numeros eh: %.2f\n", acumulador);
	printf("A media dos numeros eh: %.2f\n", media);
	printf("O numeros maiores do que a media sao: ");
	for(i = 0; i < 5; i++){
		if(vetor[i] > media){
			printf("%.2f ", vetor[i]);
		}
	}
	printf("\nO numeros menores do que a media sao: ");
	for(i = 0; i < 5; i++){
		if(vetor[i] < media){
			printf("%.2f ", vetor[i]);
		}
	}
	
	return 0;
}
