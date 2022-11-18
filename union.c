
#include <stdio.h>
#include <locale.h>

union documento{
        char cpf[11];
        char cnpj[14];
};

int main() {
    setlocale(0, "Portuguese");
    union documento doc;
    
    printf("Digite seu cpf: ");
    scanf("%s", &doc.cpf);
    printf("cpf: %s \n", doc.cpf);
    
    printf("Digite seu cnpj: ");
    scanf("%s", &doc.cnpj);
    printf("cnpj: %s ", doc.cnpj);
    
    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>
#include <locale.h>
