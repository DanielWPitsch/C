#include <stdio.h>

int main(){
	
	float numero, i;
	
	printf("Digite um numero de 1 a 10: ");
	scanf("%f", &numero);
	
	printf("\nAdicao\n");
	for(i = 1; i < 11; i++){
		printf("%.2f + %.2f = %.2f\n", numero, i, numero + i);
	}
	printf("\nSubtracao\n");
	for(i = 1; i < 11; i++){
		printf("%.2f - %.2f = %.2f\n", numero + i, numero, (numero+i) - numero);
	}
	printf("\nMultiplicacao\n");
	for(i = 1; i < 11; i++){
		printf("%.2f * %.2f = %.2f\n", numero, i, numero * i);
	}
	printf("\nDivisao\n");
	for(i = 1; i < 11; i++){
		printf("%.2f / %.2f = %.2f\n", numero * i, numero, (numero * i) / numero);
	}
	
	return 0;
}
