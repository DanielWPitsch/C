#include <stdio.h>

int main(){
	
	float salario = 1.0;
	float salarioAcumulador = 0;
	int filhos, media; 
	float salario100 = 0;
	float filhosAcumulador = 0;
	float contadorPessoas = 0;
	float maiorSalario = 1.0;	
	
	while(salario >= 0){
		
		printf("Para sair digite um salario negativo\n");
		printf("Digite o salario: ");
		scanf("%f", &salario);
		
		if(salario >= 0){
			printf("Digite a quantidade de filhos: ");
			scanf("%d", &filhos);
		
			if(maiorSalario < salario){
				maiorSalario = salario;
			}
			
			salarioAcumulador += salario;
			filhosAcumulador += filhos;
			contadorPessoas++;
			if (salario <= 100){
				salario100 ++;
			}	
		
		}
		
	}
	printf("A media dos salarios eh: %.2f\n", salarioAcumulador / contadorPessoas);
	printf("A media dos filhos eh: %.2f\n", filhosAcumulador / contadorPessoas);
	printf("O maior salario eh: %.2f\n", maiorSalario);
	printf("O percentual de salarios ateh 100 reais eh: %.2f", salario100 * 100 / contadorPessoas);
	
	return 0;
}
