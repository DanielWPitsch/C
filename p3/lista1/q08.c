/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

int main(){
	
	float raio, area;
	float pi = 3.1415;
	
	printf("Informe o valor do raio:");
	scanf("%f", &raio);
	
	area = 4 * pi * pow(raio, 2);
	printf("A area do esfera eh: %0.3f", area);
	
	return 1;
	
}
