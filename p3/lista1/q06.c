/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b, c, d, mediaAritmetica, mediaHarmonica, mediaGeometrica, mediaQuadratica;
	
	printf("Digite o valor de A:");
	scanf("%f", &a);
	
	printf("Digite o valor de B:");
	scanf("%f", &b);
	
	printf("Digite o valor de C:");
	scanf("%f", &c);
	
	printf("Digite o valor de D:");
	scanf("%f", &d);
	
	mediaAritmetica = (a + b + c + d) / 4;
	mediaHarmonica = 4 / (1/a + 1/b + 1/c + 1/d);
	mediaGeometrica = pow((a * b * c *d), 0.25);
	mediaQuadratica = sqrt((pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2)) / 4); 
	
	printf("\nA media aritmetica eh: %0.3f", mediaAritmetica);
	printf("\nA media harmonica eh: %0.3f", mediaHarmonica);
	printf("\nA media geometrica eh: %0.3f", mediaGeometrica);
	printf("\nA media quadratica eh: %0.3f", mediaQuadratica);
	
	return 1;
}
