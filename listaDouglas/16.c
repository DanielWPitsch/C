#include <stdio.h>
int main(){
	float vetor[10];
	int inferior = 0;
	int entre = 0;
	int acima = 0;
	float precoAcumulador = 0;
	int i;
	int tamanho = sizeof(vetor) / sizeof((vetor)[0]);
	printf("10 produtos\n");
	for(i =0; i < tamanho; i++ ){
		printf("Digite o preco dos produtos: ");
		scanf("%f", &vetor[i]);
		precoAcumulador += vetor[i];
		if(vetor[i] < 50){
			inferior++;
		}else if(vetor[i] >= 50 && vetor[i] <= 80){
			entre++;
		}else{
			acima++;
		}
	}
	printf("A quantidade de precos inferior a 50 reais eh: %d\n", inferior);
	printf("A quantidade de precos entre 50 e 80 reais: %d\n", entre);
	printf("A quantidade de precos acima de 80 reais eh: %d\n", acima);
	printf("A media dos precos eh: %.2f", precoAcumulador / tamanho);
	return 0;
}