/*
 Função :
 Autor : Daniel Warella Pitsch
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>

int main(){
	float salarioLiquido, horaAula, horasAulasDadas, descontoINSS;
	
	printf("Informe o valor da hora aula:");
	scanf("%f", &horaAula);
	
	printf("Informe a quantidade de horas aulas dadas:");
	scanf("%f", &horasAulasDadas);
	
	printf("Informe o desconto do INSS:");
	scanf("%f", &descontoINSS);
	
	salarioLiquido = (horaAula * horasAulasDadas) - ((horaAula * horasAulasDadas)*(descontoINSS/100));
	
	printf("O salario liquido do professor eh: %f", salarioLiquido);
	
	return 1;
}
