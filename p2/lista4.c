//soma dos elementos de uma matriz

#include <stdio.h>

int main(void){
    int matriz[][2]={1,2,3,4};
    int soma = 0;
	int linha, coluna;
	
    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 2; coluna++ ){ 
            soma = soma + matriz[linha][coluna]; 
        }
    }
    printf("A soma dos elementos da matriz eh: %d", soma);
    return 0;
}
