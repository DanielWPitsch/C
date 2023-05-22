/*
** Fun��o : TAD de numeros complexos
** Autor : Daniel Warella Pitsch
** Data : 22/05/2023
** Observa��es:
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct complexo {
  double real; 
  double imag; 
} Complexo;


Complexo* cria_complexo(double real, double imag) {
  Complexo* c = (Complexo*) malloc(sizeof(Complexo)); 
  if (c == NULL) { 
    printf("Erro de alocacao de memoria\n"); 
    exit(1); 
  }
  c->real = real; 
  c->imag = imag; 
  return c; 
}


void destroi_complexo(Complexo* c) {
  free(c); 
}


Complexo* le_complexo() {
  double real, imag; 
  printf("Digite a parte real do numero complexo: "); 
  scanf("%lf", &real); 
  printf("Digite a parte imagin�ria do numero complexo: "); 
  scanf("%lf", &imag); 

  return cria_complexo(real, imag); 
}


Complexo* soma_complexos(Complexo* c1, Complexo* c2) {
  double real = c1->real + c2->real; 
  double imag = c1->imag + c2->imag; 

  return cria_complexo(real, imag); 
}

Complexo* subtrai_complexos(Complexo* c1, Complexo* c2) {
  double real = c1->real - c2->real; 
  double imag = c1->imag - c2->imag; 

  return cria_complexo(real, imag); 
}

Complexo* multiplica_complexos(Complexo* c1, Complexo* c2) {
  double real = c1->real * c2->real - c1->imag * c2->imag; 
  double imag = c1->real * c2->imag + c1->imag * c2->real; 

  return cria_complexo(real, imag); 
}

Complexo* divide_complexos(Complexo* c1, Complexo* c2) {
  if (c2->real == 0 && c2->imag == 0) { 
    printf("\nErro: Impossivel divisao por zero!"); 
    exit(1); 
  }

  double denom = c2->real * c2->real + c2->imag * c2->imag; 
  double real = (c1->real * c2->real + c1->imag * c2->imag) / denom; 
  double imag = (c1->imag * c2->real - c1->real * c2->imag) / denom; 

  return cria_complexo(real, imag); 
}

void mostra_complexo(Complexo* c) {
  printf("(%lf,%lf)", c->real, c->imag); 
}

int main() {
	printf("Informe dois numeros complexos");
	Complexo* c1 = le_complexo(); 
	Complexo* c2 = le_complexo(); 

	printf("\nO primeiro numero complexo eh: "); 
	mostra_complexo(c1); 
  
	printf("\nO segundo numero complexo eh: "); 
	mostra_complexo(c2); 
  
	Complexo* soma = soma_complexos(c1, c2); 
	printf("\nA soma dos numeros complexos eh: ");
	mostra_complexo(soma); 
  
	Complexo* subtracao = subtrai_complexos(c1, c2); 
	printf("\nA subtracao dos numeros complexos eh: "); 
	mostra_complexo(subtracao); 
  
	Complexo* multiplicacao = multiplica_complexos(c1, c2); 
	printf("\nA multiplicacao dos numeros complexos eh: "); 
	mostra_complexo(multiplicacao); 
  
	Complexo* divisao = divide_complexos(c1, c2); 
	printf("\nA divisao dos numeros complexos eh: "); 
	mostra_complexo(divisao); 

	destroi_complexo(c1); 
	destroi_complexo(c2); 
	destroi_complexo(soma); 
	destroi_complexo(subtracao); 
	destroi_complexo(multiplicacao); 
	destroi_complexo(divisao); 
	
	printf("\n\n-Fim-");
	return 0; 
}

