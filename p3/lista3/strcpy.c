#include<stdio.h>
#include<string.h>

int main(){
	char nome[] = {"daniel"};
	char nome2[] = {"elder"};
	int i;
	char* ponteiro = nome;
	
	printf("nome: %s", nome);
	printf("\nponteiro: %s", ponteiro);
	
	strcpy(nome2, nome);
	printf("\nnome2: %s", nome2);
	
	return 1;	
}
