#include <stdio.h>

int main (){

	float total = 0.0;
	int opcao = 0;
	int quantidades [6] = {0,0,0,0,0,0};
	int quantidade = 0;
	int codigos [6] = {100,101,102,103,104,105};
	float valores [6] = {0.0,0.0,0.0,0.0,0.0,0.0};
	int i;
	
	printf("Digite os respectivos numeros para fazer seu pedido:\n100-Cachorro Quente\n101-Bauru Simples\n102-Bauru com ovo\n103-Hamburger\n104-Cheeseburger\n105-Refrigerante\n0-Encerrar pedido\n");
	scanf("%d", &opcao);
	printf("Qual a quantidade que deseja?\n");
	scanf("%d", &quantidade);
	
	while(opcao != 0){
		switch(opcao){
			case 100:
				quantidades[0] += quantidade; 
				valores[0] += 1.2 * quantidade;
				break;
			case 101:
				quantidades[1] += quantidade;
				valores[1] += 1.3 * quantidade;
				break;
			case 102:
				quantidades[2] += quantidade;
				valores[2] += 1.5 * quantidade;
				break;
			case 103:
				quantidades[3] += quantidade;
				valores[3] += 1.2 * quantidade;
				break;
			case 104:
				quantidades[4] += quantidade;
				valores[4] += 1.3 * quantidade;
				break;
			case 105:
				quantidades[5] += quantidade;
				valores[5] += 1 * quantidade;
				break;
			default:
				printf("Codigo invalido!\n");
				break;
		}
		
		printf("Digite os respectivos numeros para fazer seu pedido:\n100-Cachorro Quente\n101-Bauru Simples\n102-Bauru com ovo\n103-Hamburger\n104-Cheeseburger\n105-Refrigerante\n0-Encerrar pedido\n");
		scanf("%d", &opcao);
		if(opcao != 0){
			printf("Qual a quantidade que deseja?\n");
			scanf("%d", &quantidade);	
		}
	}
	printf("------------------------------------Nota Fiscal-----------------------------------------------\n");
	for (i = 0; i < 6; i++){
		if(quantidades[i] > 0){
			switch(codigos[i]){
				case 100:
					printf("Cachorro quente ----- cod: %d --- Quantidade: %d --- preco unitário: R$ 1.20  Subtotal: R$ %.2f\n", codigos[i], quantidades[i], valores[i]);
					break;
				case 101:
					printf("Bauru simples ------- cod: %d --- Quantidade: %d --- preco unitário: R$ 1.30  Subtotal: R$ %.2f\n", codigos[i], quantidades[i], valores[i]);
					break;
				case 102:
					printf("Bauru com ovo ------- cod: %d --- Quantidade: %d --- preco unitário: R$ 1.50  Subtotal: R$ %.2f\n", codigos[i], quantidades[i], valores[i]);
					break;
				case 103:
					printf("Hamburger ----------- cod: %d --- Quantidade: %d --- preco unitário: R$ 1.20  Subtotal: R$ %.2f\n", codigos[i], quantidades[i], valores[i]);
					break;
				case 104:
					printf("Cheeseburguer ------- cod: %d --- Quantidade: %d --- preco unitário: R$ 1.30  Subtotal: R$ %.2f\n", codigos[i], quantidades[i], valores[i]);
					break;
				case 105:
					printf("Refrigerante -------- cod: %d --- Quantidade: %d --- preco unitário: R$ 1.00  Subtotal: R$ %.2f\n", codigos[i], quantidades[i], valores[i]);
					break;
				default:
					printf("Nada\n");
			}
		}
	}
	for(i = 0; i < 6; i++){
		total += valores[i];
	} 	
	printf("Total ----------------------------------------------------------------------------------R$ %.2f", total);
	
	return 0;
}
