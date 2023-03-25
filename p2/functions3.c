#include <stdio.h>

float soma(float n1,float n2){
	return n1+n2;
}
float subtracao(float n1,float n2){
	return n1-n2;
}
float multiplicacao(float n1, float n2){
	return n1*n2;
}
float divisao(float n1, float n2){
	if(n2 == 0){
		printf("nao eh possivel fazer a divisao por zero\n");
	}else{
		return n1/n2;	
	}
}

int main(){
	
	int opcao;
	float n1, n2;
	
	printf("Digite dois numeros\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite: \n1-Soma \n2-Subtracao \n3-Multiplicacao \n4-Divisao\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("soma: %.2f\n", soma(n1, n2));
			break;
		case 2:
			printf("subtracao: %.2f\n", subtracao(n1, n2));
			break;
		case 3:
			printf("multiplicacao: %.2f\n", multiplicacao(n1, n2));
			break;
		case 4:
			printf("divisao: %.2f\n", divisao(n1, n2));
			break;
		default:
			printf("Opcao invalida!");
	}
	
	return 0;
}
