
#include <stdio.h>
#include <locale.h>

struct loja{
        char nomeLoja[123];
        char cidade[123];
        float faturamento;
};

int main() {
    setlocale(0, "Portuguese");
    struct loja loja1;
    
    printf("Digite o nome da loja, cidade e faturamento\n: ");
    scanf("%s %s %f", &loja1.nomeLoja, &loja1.cidade, &loja1.faturamento);
    
    printf("Os dados informado são: %s, %s e %.2f", loja1.nomeLoja, loja1.cidade, loja1.faturamento);
    
    return 0;
}