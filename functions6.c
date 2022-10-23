/*
Crie uma função que receba três valores, 'a', 'b' e 'c', 
que são os coeficientes de uma equação do segundo grau e 
retorne o valor do delta, que é dado por 'b² - 4ac'
*/

#include <stdio.h>

float delta(float a, float b, float c){
	return (b * b) - (4 * a * c);
}

int main(){
	
	float a, b, c;
	
	printf("Digite a, b, c para receber o delta\n");
	printf("Digite A: ");
	scanf("%f", &a);
	printf("Digite B: ");
	scanf("%f", &b);
	printf("Digite C: ");
	scanf("%f", &c);
	
	printf("Delta = %.2f", delta(a, b, c));
	
	return 0;	
}
