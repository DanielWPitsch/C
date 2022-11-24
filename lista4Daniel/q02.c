// Online C compiler to run C program online
#include <stdio.h>
#include <locale.h>

enum semana{
        domingo = 1 ,
        segunda =2 ,
        terca=3 ,
        quarta=4,
        quinta=5,
        sexta=6,
        sabado=7
};

int main() {
    setlocale(0, "Portuguese");
    enum semana dia;
    
    printf("Digite \n1-Domingo \n2-Segunda \n3-Terça \n4-Quarta \n5-Quinta \n6-Sexta \n7-Sábado\n");
    scanf("%d", &dia);
    
    switch(dia){
        case domingo:
            printf("Domingo!");
            break;
        case segunda:
            printf("Segunda!");
            break;
        case terca:
            printf("Terça!");
            break;
        case quarta:
            printf("Quarta!");
            break;
        case quinta:
            printf("Quinta!");
            break;
        case sexta:
            printf("Sexta!");
            break;
        case sabado:
            printf("Sábado!");
            break;
        default:
            printf("Opção inválida!");
    }
    return 0;
}
