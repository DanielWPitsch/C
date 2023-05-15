#include <stdio.h>
#include <stdlib.h>

int aleatorio(int n);

int main(){
	printf("%d\n", RAND_MAX);
	
	int num4 = (rand() % 6) + 1;
	printf("%d\n", num4);
	
	for (int i = 0; i < 10; i++) {
		int num5 = rand() % 100;
		printf("%d ", num5);
	}
			
	printf("\nGerando aleatorios reais\n\n");
	
	for (int j = 1; j <= 10; j++){
		for (int i = 1; i <= 6; i++){
			printf("%.2f\t", (float)rand() / RAND_MAX * 100);
		}
		printf("\n");
	}
	
	printf("\nAleatorio por funcao de 0 a 50\n");
	for (int i = 0; i < 10; i++) {
		printf("\n %d \n", aleatorio(50));
	}
	
	
	return 0;
}

int aleatorio(int n){ //funcao para gerar aleatorios
		return rand() % n;
}
