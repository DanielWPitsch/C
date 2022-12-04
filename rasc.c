#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ler(){
	
}

void escrever(int retorno){
	FILE *arq;
	printf("\n\n%d     %c", retorno, retorno);
	arq = fopen("partida.txt", "w");
	
	if(arq == NULL){
		printf("Erro na abertura do arquivo!");
	}else{		
		fprintf(arq, "%d", retorno);
		fclose(arq);
	}
}

int main(){
	int retorno;
	int partida;
	FILE *arq;
	int ler[1];
	int recebe;
	
	arq = fopen("partida.txt", "r");
	if(arq != NULL){
		recebe = fgetc(arq);
		printf("recebe: %d", recebe);	
		fclose(arq);
	}else{
		printf("Erro ao Abrir rank.txt");
	}

	recebe++;
	printf("\nretorno: %c", recebe);
	
	escrever(recebe);
	
	arq = fopen("partida.txt", "r");
	if(arq != NULL){
		recebe = fgetc(arq);
		printf("recebe: %d", recebe);	
		fclose(arq);
	}else{
		printf("Erro ao Abrir rank.txt");
	}
	
	printf("\narquivo: %c", recebe);

	return 0;
}
