//exiba 5 vezes o termo "Linguagem C"
//usando os 3 tipos de estruturas de repetição

#include <stdio.h>

int main(void){
    char texto[]="Linguagem C.";
    int tamanho = (sizeof(texto)/sizeof((texto)[0]));
    int x = 0;
    int i,k;
    
    for(k = 0; k < 5; k++){
        for(i = 0; i < tamanho; i++){
            printf("%c", texto[i]);
        }
    }
    printf("\n");
    
    while(x < 5){
        int w = 0;
        while(w < tamanho){
            printf("%c", texto[w]);
            w++;
        }
        x++;
    }
    printf("\n");
    int a = 0;
    do{
        int z=0;
        do{
            printf("%c", texto[z]);
            z++;
        }while(z < tamanho);
        a++;
    }while(a < 5);

    printf("\n");
    return 0;
}
