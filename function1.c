#include <stdio.h>

int menor(n1, n2){
	if(n1<n2){
		return n1;
	}else{
		return n2;
	}
}

int main(){
	
	int n1, n2;
	
	printf("Digite dois numeros\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1 == n2){
		printf("Os numeros sao iguais!\n");
	}else{
		printf("o menor numero eh: %d\n", menor(n1, n2));
	}
	
	return 0;
	
}
