//vetor de 5 inteiros
//tirar a média do vetor

#include <stdio.h>

int main(void){
    int vetor[5] = {12, 33, 56, 22, 2};
    int tamanho = (sizeof(vetor)/sizeof((vetor)[0]));
    int acumulador=0;
    int i;

    for(i = 0; i < tamanho; i++){
        acumulador += vetor[i];
    }
    int media = acumulador/tamanho;
    printf("A media dos inteiros no vetor eh: %d", media);
    return 0;
}
