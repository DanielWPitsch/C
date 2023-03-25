#include <stdio.h>

int main(void){
	
	float n1,n2;
	char opc;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n2);
	
	printf("Digite qual operacao deseja fazer: \n1> + \n2> - \n3> * \n4> /\n");
	scanf("%1s", &opc);
	
	switch(opc){
		case '+':
			printf("%.2f", n1+n2);
			break;
		case '-':
			printf("%.2f", n1-n2);
			break;
		case '*':
			printf("%.2f", n1*n2);
			break;
		case '/':
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