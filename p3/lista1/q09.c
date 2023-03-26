/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações: Criar uma função que calcule a diferença entre duas horas distintas de um mesmo dia e retorne o
intervalo de tempo entre os dois horários (ler no formato hh:mm e imprimir no formato hh:mm)
*/

#include<stdio.h>

int main(){
	int horasI, minutosI, horasF, minutosF, diferenca, horasDiferenca, minutosDiferenca;
	char dpontos;
	
	printf("\nInforme as horas e minutos iniciais: ");
    scanf("%d%c%d",&horasI, &dpontos, &minutosI);
    
    printf("\nInforme as horas e minutos finais: ");
    scanf("%d%c%d",&horasF, &dpontos, &minutosF);
    
    minutosI = minutosI + (horasI *60);
    minutosF = minutosF + (horasF *60);
    
    diferenca = minutosF - minutosI;
    horasDiferenca = diferenca / 60;
	minutosDiferenca =  diferenca % 60;
	
	printf("a diferenca de hora eh: %d%c%d", horasDiferenca, dpontos, minutosDiferenca);
}
