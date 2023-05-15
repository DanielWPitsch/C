//Calcular a variância e o desvio-padrão de 20 temperaturas guardadas em um array (que foram digitadas pelo usuário);

#include<stdio.h>
#include<math.h>
#define TAMANHO 20

int main(){
	
	float temperaturas[20], variancia, soma=0, media, desvioPadrao, soma2=0;
	int i;

	for(i=0; i<TAMANHO; i++){
		printf("Digite a temperatura %d: ", i+1);
		scanf("%f", &temperaturas[i]);
		soma += temperaturas[i];
	}
	media = soma / TAMANHO;
		
	for(i=0; i<TAMANHO; i++){
		soma2 += pow(temperaturas[i] - media, 2); 
	}

	variancia = soma2 / (TAMANHO-1);
	desvioPadrao = sqrt(variancia);
	
	printf("\nA variancia eh: %.2f", variancia);
	printf("\nO desvio padrao eh: %.2f", desvioPadrao);
	
	return 0;
}
