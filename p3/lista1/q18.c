/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>

int main(){
	float valorBruto, desconto, valorLiquido;
	int opcao;
	
	printf("Informe o tipo de combstivel do veiculo, digite: \n1-Alcool \n2-Gasolina \n3-Diesel\n");
	scanf("%d", &opcao);
	
	printf("Informe o valor do veiculo zero: ");
	scanf("%f", &valorBruto);
	
	switch(opcao){
		case 1:
			desconto = valorBruto * 0.28;
			valorLiquido = valorBruto - desconto;
			printf("O desconto ficarah por: %0.2f e o veiculo sairah no preco de: %0.2f", desconto, valorLiquido);
			break;
		case 2:
			desconto = valorBruto * 0.22;
			valorLiquido = valorBruto - desconto;
			printf("O desconto ficarah por: %0.2f e o veiculo sairah no preco de: %0.2f", desconto, valorLiquido);
			break;
		case 3:
			desconto = valorBruto * 0.12;
			valorLiquido = valorBruto - desconto;
			printf("O desconto ficarah por: %0.2f e o veiculo sairah no preco de: %0.2f", desconto, valorLiquido);
			break;
		default:
			printf("Opcao invalida!");
			break;	
	}

	return 1;	
}
