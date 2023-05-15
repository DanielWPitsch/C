#include <stdio.h>

//#define PI 3.14

int main(){
	int array1[5];
	int matriz[2][2];
	char string[2];
	int i, linha, coluna;
	
	printf("%.2f", PI);
	
	//for (i=0;i<5;i++){
	//	printf("Digite o numero %d: ", i);
	//	scanf("%d", &array1[i]);
	//	printf("%d\n", array1[i]);
	//}
	
	/*for (linha=0;linha<2;linha++){
		for (coluna=0;coluna<2;coluna++){
			printf("Digite o numero [%d] [%d]: ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	for (linha=0;linha<2;linha++){
		printf("| ");
		for (coluna=0;coluna<2;coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
		printf("|\n");
	}*/
	
	for (i=0;i<2;i++){ //BIZU
		printf("Informe um caractere %d: ", i);
		scanf(" %c", &string[i]);
		printf("%c\n", string[i]);
	}
	
	
	return 0;
}
