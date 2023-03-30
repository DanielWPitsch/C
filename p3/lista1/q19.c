/*
 Função : O programa calcula o tempo necessario para que uma massa se torne menor que 0.05 gramas
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>

int main(){

	float massa;
	int contador=0;
	
	printf("Dada a massa inicial em gramas, digite um valor: ");
	scanf("%f", &massa);
	
	while(massa >= 0.05){
		massa = massa / 2;
		contador = contador + 50;
	}
	printf("O tempo que a massa levou para ficar menor que 0.05 gramas, foi: %d segundos", contador);
		
	return 1;
}
