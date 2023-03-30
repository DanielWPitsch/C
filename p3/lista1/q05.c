/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

float cubo(float n){	
	return n*n*n;
}

float quadrado(float n){
	return n*n;
}

int main (){
	float resultado, x, y;
	
	printf("Digite o valor de x:");
	scanf("%f", &x);
	
	printf("Digite o valor de y:");
	scanf("%f", &y);
	
	resultado = cubo(x) + (3 * quadrado(x) * y) + (3 * x * quadrado(y)) + cubo(y);
	printf("O resultado da funcao cubica eh: %0.2f", resultado); 
	
	return 1;
}
