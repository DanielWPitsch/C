//Exibir os 50 primeiros números ímpares guardados em um array;
#include<stdio.h>

int main(){
	int numeros[200], i, impares[50], contador=0;
	
	for (i = 0; i < 200; i++) {
		numeros[i] = rand() % 100;
		if(numeros[i] % 2 != 0){
			impares[contador] = numeros[i];
			contador++;
		}
	}
	
	printf("\nOs 50 primeiros impares:\n");
	for(i = 0; i < 50; i++) {
		printf("%d ", impares[i]);
	}

	return 0;
}
