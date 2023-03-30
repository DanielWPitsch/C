/*
 Função : O programa calcula a área de uma esfera
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>
#define pi 3.14159265

int main(){
	
	float raio, area;
	
	printf("Informe o valor do raio:");
	scanf("%f", &raio);
	
	area = 4 * pi * pow(raio, 2);
	printf("A area do esfera eh: %0.3f", area);
	
	return 1;
	
}
