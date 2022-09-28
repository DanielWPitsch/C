#include <stdio.h>

int main (){

	float total = 0.0;
	int contador = 0;
	int quantidades [6] = {0,0,0,0,0,0};
	int quantidade = 0;
	int codigos [6] = {1,1,1,1,1,1};
	float valores [6] = {0.0,0.0,0.0,0.0,0.0,0.0};
	float valorParcial = 0;
	int i;
	
	printf("Digite os respectivos numeros para fazer seu pedido:\n100-Cachorro Quente\n101-Bauru Simples\n102-Bauru com ovo\n103-Hamburger\n104-Cheeseburger\n105-Refrigerante\n0-Encerrar pedido\n");
	scanf("%d", &codigos[contador]);
	printf("Qual a quantidade que deseja?\n");
	scanf("%d", &quantidade);
	
	while(codigos[contador] != 0){
		switch(codigos[contador]){
			case 100:
				quantidades[0] += quantidade; 
				valores[0] += 1.2 * quantidades[0];
				total = valores[0];
				break;
			case 101:
				quantidades[1] += quantidade;
				total += 1.3 * quantidades[1];
				break;
			case 102:
				quantidades[2] += quantidade;
				total += 1.5 * quantidades[2];
				break;
			case 103:
				quantidades[3] += quantidade;
				total += 1.2 * quantidades[3];
				break;
			case 104:
				quantidades[4] += quantidade;
				total += 1.3 * quantidades[4];
				break;
			case 105:
				quantidades[5] += quantidade;
				total += 1.0 * quantidades[5];
				break;
			default:
				printf("Codigo invalido!\n");
				break;
		}
		valores[contador] = total;
		contador++;
		printf("Digite os respectivos numeros para fazer seu pedido:\n100-Cachorro Quente\n101-Bauru Simples\n102-Bauru com ovo\n103-Hamburger\n104-Cheeseburger\n105-Refrigerante\n0-Encerrar pedido\n");
		scanf("%d", &codigos[contador]);
		if(codigos[contador] != 0){
			printf("Qual a quantidade que deseja?\n");
			scanf("%d", &quantidade);	
		}
	}
	printf("-Nota Fiscal-\n");
	for (i = 0; i < 6; i++){
		if(quantidades[i] > 0){
			switch(codigos[i]){
				case 100:
					printf("Cachorro quente cod: %d , quantidade: %d , preco: %.2f \n", codigos[i], quantidades[i], valores[i]);
					break;
				case 101:
					printf("Bauru simples cod: %d , quantidade: %d , preco: %.2f \n", codigos[i], quantidades[i], valores[i]);
					break;
				case 102:
					printf("Bauru com ovo cod: %d , quantidade: %d , preco: %.2f \n", codigos[i], quantidades[i], valores[i]);
					break;
				case 103:
					printf("Hamburger cod: %d , quantidade: %d , preco: %.2f \n", codigos[i], quantidades[i], valores[i]);
					break;
				case 104:
					printf("Cheeseburguer cod: %d , quantidade: %d , preco: %.2f \n", codigos[i], quantidades[i], valores[i]);
					break;
				case 105:
					printf("Refrigerante cod: %d , quantidade: %d , preco: %.2f \n", codigos[i], quantidades[i], valores[i]);
					break;
				default:
					printf("Erro");
					break;
			}
		}
	}
	printf("Valor total a pagar de seu pedido R$ %.2f\n", total);	
}
