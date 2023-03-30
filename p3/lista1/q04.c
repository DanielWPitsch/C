/*
 Função : A função retorna o resultado do produto notável quadrado de dois termos
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>
#include<math.h>

float funcaoQuadrado(float a, float b){
	return (pow(a, 2)) + (2*a*b) + (pow(b,2));
}
