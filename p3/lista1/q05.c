/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

float cubo(float numero){	
	return pow(numero, 3);
}

float funcaoQuadrado(float a, float b){
	return (pow(a, 2)) + (2*a*b) + (pow(b,2));
}

int main (){
	float resultado, x, y;
	
	printf("Digite o valor de x:");
	scanf("%f", &x);
	
	printf("Digite o valor de y:");
	scanf("%f", &y);
	
	resultado = cubo(x) + (funcaoQuadrado(x,y) * 10) + cubo(y);
	printf("O resultado da funcao cubica eh: %0.2f", resultado); 
	
	return 1;
}
