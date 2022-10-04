#include <stdio.h>

int main(){
	int combustivel;
	int litros;
	float total;
	
	printf("Qual tipo de combustivel serah abastecido?\nDigite:\n1-Alcool\n2-Gasolina\n");
	scanf("%d", &combustivel);
	
	printf("Quantos litros? ");
	scanf("%d", &litros);
	
	if(combustivel == 1){
		if(litros <= 20){
			total = litros * (0.9 * 0.97);
			printf("O total deu: %.2f", total);		
		}else{
			total = litros * (0.9 * 0.95);
			printf("O total deu: %.2f", total);		
		}
	}else if( combustivel == 2){
		if(litros <= 20){
			total = litros * (1.2 * 0.96);
			printf("O total deu: %.2f", total);		
		}else{
			total = litros * (1.2 * 0.94);
			printf("O total deu: %.2f", total);		
		}
	}else{
		printf("Nao ha esse tipo de combustivel");
	}
	
	return 0;
}
