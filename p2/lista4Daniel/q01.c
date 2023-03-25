
#include <stdio.h>
#include <locale.h>

union documento{
        char placaNumerica[11];
        char placaAlfaNumerica[11];
};

int main() {
    setlocale(0, "Portuguese");
    union documento doc;
    int tipo;
    
    printf("Digite \n1-Numerica \n2-AlfaNumerica\n");
    scanf("%d", &tipo);
    
    if(tipo ==1){
    	printf("Digite a placa de patrimônio: ");
    	scanf("%s", &doc.placaNumerica);
    	printf("placa de patrimonio: %s \n", doc.placaNumerica);
    	
	}else if(tipo == 2){
    	printf("Digite a placa de patrimônio: ");
    	scanf("%s", &doc.placaAlfaNumerica);
    	printf("placa de patrimonio: %s ", doc.placaAlfaNumerica);
	}else{
		printf("Opcao invalida");
	}
    
    return 0;
}

