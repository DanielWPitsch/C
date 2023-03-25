#include <stdio.h>


int main(void){
	
	int n1,n2,n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3){
		printf("o numero %d eh maior!", n1);
	}else if(n2>n3){
		printf("o numero %d eh maior!", n2);
	}else{
		printf("o numero %d eh maior!", n3);
	}
}