/*
** Função : TAD de numeros complexos
** Autor : Daniel Warella Pitsch
** Data : 22/05/2023
** Observações:
*/
#include <stdio.h>
#include <stdlib.h>
#include "Complexo.h"

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

