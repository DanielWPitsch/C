/*
Crie uma fun��o que receba tr�s valores, 'a', 'b' e 'c', 
que s�o os coeficientes de uma equa��o do segundo grau e 
retorne o valor do delta, que � dado por 'b� - 4ac'
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
