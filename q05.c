#include <stdio.h>

int main(void){
	
	float n1,n2;
	int opc;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n2);
	
	printf("Digite qual operacao deseja fazer: \n1-Soma \n2-Subtracao \n3-Multiplicacao \n4-Divisao\n");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			printf("%.2f", n1+n2);
			break;
		case 2:
			printf("%.2f", n1-n2);
			break;
		case 3:
			printf("%.2f", n1*n2);
			break;
		case 4:
			if(n2 ==0){
				printf("Operacao indevida");
			}else{
				printf("%.2f", n1/n2);
			}
			break;
		default:
			printf("Entrada invalida!");
	}
	return 0;
}