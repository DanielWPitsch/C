/*
 Função : O programa calcula o capital acumulado por juros composto pelos tempo dado em anos
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>

float capitalAcumulado(){
	float capital, juros, anos, acumulado=0;
	int i;
	
	printf("\nInforme o valor do capital: ");
	scanf("%f", &capital);
	
	printf("\nInforme a taxa de juros: ");
	scanf("%f", &juros);
	
	printf("\nInforme a quantidade de anos que deseja saber: ");
	scanf("%f", &anos);
	
	acumulado = (capital + (capital * (juros/100)));
	for (i=1; i<anos; i++){
		acumulado = acumulado + (acumulado * (juros/100));
	}
	return  acumulado;
}

int main(){
	printf("acumulado: %0.3f", capitalAcumulado());
	return 1;
}
