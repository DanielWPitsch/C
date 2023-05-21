/*
** Função : o programa receber um numero e retorna sua raiz quadrada usando o método de Newton-Raphson
** Autor : Daniel Warella Pitsch
** Data : 20/05/2023
** Observações: f(x) = x - cos(x); x0= 1; f'(x) = 1 + sin(x); xn = x - f(x) / f'(x).
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float raiz_quadrada(float n);

int main() {
  float n, raiz; 
  printf("Digite o valor de n: "); 
  scanf("%f", &n); 

  raiz = raiz_quadrada(n); 

  printf("\nA raiz quadrada %.1f eh %.5f", n, raiz); ;
	
	printf("\n-Fim-");
	return 0;
}

float raiz_quadrada(float n) {
  float x0 = 1.0, x1, e = 0.0001, dif; 

  do {
    x1 = x0 - (x0 * x0 - n) / (2 * x0); 
    dif = fabs(x1 - x0); 
    x0 = x1; 
    //printf("dif: %f e x1: %f\n", dif, x1);
  } while (dif > e); 

  return x1;
}
