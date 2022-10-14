#include <stdio.h>

int main(){
	float salarios[8];
	int contador = 0;
	int i;

	while (contador < 8){
		printf("Digite o salario %d: ", contador+1);
		scanf("%f", &salarios[contador]);
		
		if(salarios[contador] > 0){
			contador++;
		}else{
			printf(" valor para salario invalido! Por favor insira um salario positivo");
		}
		
	}
	
	for (i=0; i<8;i++){
		printf("\nsalario %d antigo: %.2f \n",i+1, salarios[i]);
		salarios[i] = salarios[i] * 1.08;
		printf("salario %d reajustado: %.2f \n",i+1, salarios[i]);
	}
	
	return 0;
}