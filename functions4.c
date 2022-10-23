#include <stdio.h>

int main(){
	
	char opcao;
	float n1, n2, n3, media;
	
	printf("Digite dois numeros\n");
	printf("Digite o primeira nota: ");
	scanf("%f", &n1);
	printf("Digite o segunda nota: ");
	scanf("%f", &n2);
	printf("Digite o terceira nota: ");
	scanf("%f", &n3);
	getchar();
	printf("Digite: \na-Aritmetica \np-Ponderada\n");
	scanf("%c", &opcao);
	
	if(opcao == 'a'){
		media = (n1 + n2 + n3) / 3;
	}else if(opcao == 'p'){
		media = (n1 * 0.5) + (n2 * 0.3) + (n3 * 0.2);
	}
	
	printf("A media eh: %.2f", media);
	return 0;
}
	
