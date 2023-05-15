//Ler n notas e calcular a média. O tamanho n é inserido pelo usuário;

#include <stdio.h>
#include <stdlib.h>

int main(){
	float *notas, soma, media;
	int quantidade, i;
	
	printf("Informe a quantidade de notas para tirar media: ");
	scanf("%d", &quantidade);
	
	notas = (float *)malloc(quantidade*sizeof(float));
	
	if(notas == NULL){
		printf("Erro ao alocar memoria\n");
	}
	
	for(i=0; i<quantidade;i++){
		printf("Nota %d: ", i+1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}		
	media = soma/quantidade;
	printf("\nA media das notas eh: %.2f", media);
	
	return 0;
}
