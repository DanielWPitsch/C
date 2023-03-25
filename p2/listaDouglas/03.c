#include <stdio.h>

int main(){
	int quantidade;
	
	printf("Digite a quantidade de macas que deseja comprar: ");
	scanf("%d", &quantidade);
	
	if(quantidade < 12 && quantidade >= 1){
		printf("Voce comprou %d macas e o total a ser pago eh: %.2f", quantidade, quantidade*1.3);
	}else if(quantidade >= 12) {
		printf("Voce comprou %d macas e o total a ser pago eh: %.2f", quantidade, quantidade*1.0);
	}else{
		printf("Nao tem como comprar nada ou ficar devendo");
	}
	
	return 0;
}
