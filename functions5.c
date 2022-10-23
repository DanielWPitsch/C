
#include <stdio.h>

float areaRetangulo(float base, float altura){
	return base * altura;
}

int main(){

	float base, altura;
	
	printf("Para saber a area do retangulo\n");
	printf("Digite a Base: ");
	scanf("%f", &base);
	printf("Digite a Altura: ");
	scanf("%f", &altura);

	printf("A area do retangulo eh: %.2f", areaRetangulo(base, altura));
	
	return 0;
}
