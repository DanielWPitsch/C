#include <stdio.h>
#include <stdlib.h>

int main (){
	float peso, altura, imc;
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	imc = peso/(pow(altura, 2));
	
	printf("%.2f", imc);
	
	if(imc <= 18.5){
		printf("Abaixo do peso");
	}else if(imc > 18.5 && imc <= 25){
		printf("Peso normal");
	}else if(imc > 25 && imc <= 30){
		printf("Acima do peso");
	}else{
		printf("Obeso");
	}
	
	return 0;
}