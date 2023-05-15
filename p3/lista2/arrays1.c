//Usando Arrays, Ler 10 números e exibir todos na tela;    

#include <stdio.h>

int main(){
	
	int array[10], i;

	printf("-Informe 10 numeros-\n");
	
	for(i=0;i<10;i++){
		printf("-Informe numeros %d-\n", i+1);
		scanf("%d", &array[i]);
	}
	
	printf("-Os numeros sao: ");
	for(i=0;i<10;i++){
		printf("%d ", array[i]);
	}

	return 0;
}

