/*
** Função : Imprime todos os pares de primos somada que resiltam pares entre 700 e 1100
** Autor : Daniel Warella Pitsch
** Data : 20/05/2023
** Observações:
*/

#include<stdio.h>
#include <stdbool.h>

int aleatorio(int n);
bool ehPrimo(int numero);

int main(){
	
	int numero, i, soma=0, n1, n2, pares=700;
	
	for(i = pares; i<=1100; i+=2){
		while (soma != i){
			n1 = aleatorio(650);
			n2 = aleatorio(650);
			if(ehPrimo(n1) == 1 && ehPrimo(n2) == 1){
				soma = n1 + n2;
				if(n1+n2 == i){
					printf("%d + %d e a soma: %d \n", n1, n2, soma);
				}
			}
		
		}

	} 
	
	printf("-Fim-");
	return 0;
}

bool ehPrimo(int numero){
	int i;
	for (i=2; i<numero; i++){
		if(numero % i == 0 && i != numero){
			return false;
		}
	}
	if(i == numero){
		return true;
	}
}

int aleatorio(int n){ 
		return rand() % n;
}
