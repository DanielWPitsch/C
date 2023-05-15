#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	printf("\n\n%d", divisores(n));
	
	return 0;
}
