//Exercicio 1
//Crie um programa em C com um vetor de 5 posições. Nele, crie uma condição 
//que some o valor de cada posição e imprima na tela o total da soma.

#include <stdio.h>

int main(void){
    int vetor[5];
    int acumulador=0;
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o numero %d :", i+1);
        scanf("%d", &vetor[i]);
        acumulador += vetor[i];
    }
    printf("A soma dos numeros digitados eh: %d", acumulador);
    return 0;
}
