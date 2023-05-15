//Preencher um array de 100 elementos com elementos aleatórios (inteiros) e calcular e exibir, a média, o maior, o menor 
//	e quantos (e quais são) os menores que a média.

#include<stdio.h>

int main(){
	int i, menorQmedia; 
	float numeros[100], maior, menor, menores[10], media, soma=0;
	int tamanho = (sizeof numeros) / (sizeof numeros[0]);
	
	for (i = 0; i < tamanho; i++) {
		numeros[i] = rand() % 100;
		soma += numeros[i];
		if(i == 0){
			maior = numeros[i];
			menor = numeros[i];
		}
		if(numeros[i] > maior){
			maior = numeros[i];
		}
		if(numeros[i] < menor){
			menor = numeros[i];
		}
	}
	media = soma/tamanho;
	
	for(i=0; i<tamanho;i++){
		if(numeros[i] < media){
			menorQmedia++;
		}
	}
	//array deve receber esse tamanho
	
	printf("\n\nO maior numero eh: %.2f", maior);
	printf("\nO menor numero eh: %.2f", menor);
	printf("\nA media eh: %.2f", media);
	printf("\nA quantidade de numeros menor que a media sao: %d", menorQmedia);

	return 0;
}
