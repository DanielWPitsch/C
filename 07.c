#include <stdio.h>

int main(){
	
	int destino;
	char idaVolta;
	
	printf("Escolha seu destino, digite: \n1-Regiao Norte \n2-Regiao Nordeste \n3-Regiao Centro-Oeste \n4-Regiao Sul \n");
	scanf("%d", &destino);
	
	getchar();
	printf("Eh ida e volta, Digite? \n s-sim \n n-nao\n");
	scanf("%c", &idaVolta);
	
	if(destino == 1){
		if(idaVolta == 's'){
			printf("Preco da passagem: R$ 900.00");
		}else{
			printf("Preco da passagem: R$ 500.00");
		}
	}else if(destino == 2){
		if(idaVolta == 's'){
			printf("Preco da passagem: R$ 650.00");
		}else{
			printf("Preco da passagem: R$ 350.00");
		}
	}else if(destino == 3){
		if(idaVolta == 's'){
			printf("Preco da passagem: R$ 600.00");
		}else{
			printf("Preco da passagem: R$ 350.00");
		}
	}else if(destino == 4){
		if(idaVolta == 's'){
			printf("Preco da passagem: R$ 550.00");
		}else{
			printf("Preco da passagem: R$ 300.00");
		}
	}	
	return 0;	
}