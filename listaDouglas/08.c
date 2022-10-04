#include <stdio.h>

int main(){
	
	int N, i;
	
	printf("Digite um numero maior que zero: ");
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++){
		printf("%d ", i);
	}
	
	return 0;
}
