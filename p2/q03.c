#include <stdio.h>

int main(void){
	
	int anoAtual;
	int anoNascimento;
	int idade;
	
	printf("Digite o ano que voce nasceu: ");
	scanf("%d", &anoNascimento);
	
	
	printf("Digite o ano corrente: ");
	scanf("%d", &anoAtual);
	
	idade=anoAtual-anoNascimento;
	printf("Sua idade eh: %d", idade);
	
	if(idade>17){
		printf("\nVoce eh de maior!");
	}
	
	return 0;
}