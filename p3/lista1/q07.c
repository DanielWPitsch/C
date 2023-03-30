/*
 Função : O programa calcula a distância entre dois pontos
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

int main(){
	float x1,x2,y1,y2, distancia;
		
	printf("Digite o valor de x1:");
	scanf("%f", &x1);
	
	printf("Digite o valor de y1:");
	scanf("%f", &y1);
	
	printf("Digite o valor de x2:");
	scanf("%f", &x2);
	
	printf("Digite o valor de y2:");
	scanf("%f", &y2);	
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	printf("A distancia entre os dois pontos eh: %f", distancia);
	
	return 1;
	
}
