//criar um vetor de 5 inteiros
//encontrar o maior valor no vetor

#include <stdio.h>

int main(void){
    int vetor[5] = {12, 33, 56, 22, 2};
    int maior = 0;
    int tamanho = (sizeof(vetor)/sizeof((vetor)[0]));
	int i;
	
    for(i = 0; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("O maior valor do vetor eh: %d", maior);
    return 0;
}
