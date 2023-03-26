/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>

int main(){

	float peso, altura, imc;
	
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);

	imc = peso / (altura * altura);
	printf("\nSeu imc eh: %0.1f\n", imc);
	printf("\nVALORES DE IMC\nAbaixo do peso: menor que 18,5\nNormal: entre 18,5 e 24,9\nAcima do peso: entre 25 e 29,9\nObeso: 30 ou mais");
	
	/*
	if(imc <18.5){
		printf("Estah abaixo do peso");
	}else if(imc < 24.9){
		printf("Estah no peso normal");
	}else if(imc < 29.9){
		printf("Estah acima do peso");
	}else{
		printf("Estah obeso");
	}*/
	
	return 1;
}
