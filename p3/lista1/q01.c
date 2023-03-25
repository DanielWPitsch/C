/*
 Função :
 Autor : Daniel Warella Pitsch
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

int main(){
	float a, b, h;
	
	printf("Digite o valor de A:");
	scanf("%f", &a);
	
	printf("Digite o valor de B:");
	scanf("%f", &b);
	
	h = sqrt(pow(a, 2) + pow(b, 2));
	
	printf("O valor da hipotenusa eh: %0.3f", h);
	return 1;
}
