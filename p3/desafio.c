#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
	float x, g, g2, res;
	float raiz;
	bool loop = true;
	
	printf("Digite um valor:");
	scanf("%f", &x);
	x = fabs(x);
	
	raiz = sqrt(x);
	g = x/2;
	g2 = g*g;
	
	
	while(loop){
		printf("\nG: %f", g);
		res = g2 / raiz;
		if(res <= 0.001){
			printf("\nA resposta eh essa: %f", g);
			loop = false;
		}else{
			g = (g+g/x)/2;
			g2 = g*g;
		}
	}
	printf("\nFim");
	
	return 0;
}
