/*
 Função : O programa calcula a diferença entre dois horários e retorna o intervalo entre eles
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

int main(){
	int horasI, minutosI, horasF, minutosF, diferenca, horasDiferenca, minutosDiferenca;
	char dpontos;
	
	printf("\nInforme as horas e minutos iniciais: ");
    scanf("%d%c%d",&horasI, &dpontos, &minutosI);
    
    printf("\nInforme as horas e minutos finais: ");
    scanf("%d%c%d",&horasF, &dpontos, &minutosF);
    
    minutosI = minutosI + (horasI *60);
    minutosF = minutosF + (horasF *60);
    
    diferenca = abs(minutosF - minutosI);
    horasDiferenca = abs(diferenca / 60);
	minutosDiferenca =  abs(diferenca % 60);
	
	
	printf("a diferenca de hora eh: %d%c%d", horasDiferenca, dpontos, minutosDiferenca);
}
