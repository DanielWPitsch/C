/*
 Fun��o : O programa calcula a diferen�a entre dois hor�rios e retorna o intervalo entre eles
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observa��es:
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
