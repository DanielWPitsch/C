#include <stdio.h>

int main (){

	float total = 0.0;
	int contador = 0;
	int quantidades [6] = {0,0,0,0,0,0};
	int codigos [6] = {1,1,1,1,1,1};
	float valores [6] = {0.0,0.0,0.0,0.0,0.0,0.0};
	float valorParcial = 0;
	
	printf("Digite os respectivos numeros para fazer seu pedido:\n100-Cachorro Quente\n101-Bauru Simples\n102-Bauru com ovo\n103-Hamburger\n104-Cheeseburger\n105-Refrigerante\n0-Encerrar pedido\n");
	scanf("%d", &codigos[contador]);
	printf("Qual a quantidade que deseja?\n");
	scanf("%d", &quantidades[contador]);
	
	while(codigos[contador] != 0){
		switch(codigos[contador]){
			case 100:
				quantidades[0] += quantidades[contador]; 
				valores[0] += 1.2 * quantidades[0];
				total = valores[0];
				break;
			case 101:
				quantidades[1] += quantidades[contador];
				total += 1.3 * quantidades[1];
				break;
			case 102:
				quantidades[2] += quantidades[contador];
				total += 1.5 * quantidades[2];
				break;
			case 103:
				quantidades[3] += quantidades[contador];
				total += 1.2 * quantidades[3];
				break;
			case 104:
				quantidades[4] += quantidades[contador];
				total += 1.3 * quantidades[4];
				break;
			case 105:
				quantidades[5] += quantidades[contador];
				total += 1.0 * quantidades[5];
				break;
			default:
				printf("Codigo invalido!");
				break;
		}
		valores[contador] = total;
		contador++;
		printf("Seu pedido deu %.2f\n", total);
		printf("Digite os respectivos numeros para fazer seu pedido:\n100-Cachorro Quente\n101-Bauru Simples\n102-Bauru com ovo\n103-Hamburger\n104-Cheeseburger\n105-Refrigerante\n0-Encerrar pedido\n");
		scanf("%d", &codigos[contador]);
		if(codigos[contador] != 0){
			printf("Qual a quantidade que deseja?\n");
			scanf("%d", &quantidades[contador]);	
		}
	}
	printf("-Nota Fiscal-\n");
	for (int i = 0; i < contador; i++){
		printf("Voce pediu cod: %d , quantidade: %d , valores %.2f \n", codigos[i], quantidades[i], valores[i]);
	}	
}