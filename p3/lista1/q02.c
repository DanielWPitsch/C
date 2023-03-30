/*
 Função : O programa calculo o salário líquido de um professor
 Autor : Daniel Warella Pitsch, p3, noite, CC
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
