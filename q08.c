#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, c, delta, x1, x2;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	delta=pow(b, 2)-4*a*c;   // b²-4ac
	
	x1= (-b + sqrt(delta))/2*a;
	x2= (-b - sqrt(delta))/2*a;
	
	printf("delta= %.2f \n", delta);
	
	if(delta < 0){
		printf("Não existem raizes reais.");
	}else if (delta == 0){
		printf("As raizes sao identicas no valor: %.2f", x1);
	}else{
		printf("Existem duas raizes, x1= %.2f e x2= %.2f", x1, x2);
	}
	
	return 0;
}