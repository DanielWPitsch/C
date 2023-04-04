#include <stdio.h>

int main() {
    // Write C code here
    int numeros[10], i;
    for(i=0;i<10;i++){
        printf("digite o numero na posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }
    
    for(i=0; i<10;i++){
        printf("numero[%d] = %d\n",i, numeros[i]);
    }

    return 0;
}