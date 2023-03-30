/*
 Função : O programa recebe um número e imprime o respectivo em fibonacci e também todos os anteriores
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>

void fibonacci(int n){
	int a=1, b=1, c=0, i;
	
	printf("0 ");
	for(i=2; i<=n; i++){
		if(n == 1){
			break;
		}
		a = b + c;  		// 1 + 1 ; 1 + 2; 2 + 3; 3 + 5;
		b = c;      		//   1;      2;     3;     5;
		c = a;      		//   2;      3;     5;     8;
		printf("%d ", c);
	}
}

int main(){
	int numero;
	
	printf("Informe o numero de fibonacci que deseja saber: ");
	scanf("%d", &numero);

	fibonacci(numero);
	
	return 1;
}
