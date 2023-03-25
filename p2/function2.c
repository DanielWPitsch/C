#include <stdio.h>

void parImpar(n1){
	if(n1 % 2 == 0){
		printf("Eh par");
	}else{
		printf("Eh impar");
	}
}

int main(){
	
	int numero;
	
	printf("informe umm numero para saber se ele eh par ou impar: ");
	scanf("%d", &numero);
	
	parImpar(numero);
	return 0;
}
