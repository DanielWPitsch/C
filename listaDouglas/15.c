#include <stdio.h>

int main(){
	
	int vetor[6];
	int i;
	int tamanho = sizeof(vetor) / sizeof((vetor)[0]);
	
	printf("Digite 6 numeros \n");
	for(i = 0; i < tamanho; i++){
		printf("Digite numero: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("Os valores positivos sao: ");
	for(i = 0; i < tamanho; i++){
		if(vetor[i] > 0){
			printf("%d ", vetor[i]);
		}
	}
	
	return 0;
}
