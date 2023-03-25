#include <stdio.h>

int main(){
	
	int vetor[15];
	int i, entrada;
	int contadorUm = 0; 
	int contadorDois = 0;
	int tamanho = (sizeof(vetor) / sizeof((vetor)[0]));
	
	for(i = 0; i < tamanho; i++){
		printf("Voce gosta de beterraba? \n1-Sim \n2-Nao\n");
		scanf("%d", &vetor[i]);
		if(vetor[i] == 1){
			contadorUm++;
		}else if(vetor[i] == 2){
			contadorDois++;
		}else{
			printf("entrada invalida");
		}
	}
	
	printf("A quantidade de pessoas que gostam de beterra sao: %d e as que nao gostam: %d", contadorUm, contadorDois);
	
	return 0;
}
