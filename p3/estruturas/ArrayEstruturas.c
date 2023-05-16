#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 3

typedef struct{
	char nome[30];
	int cpf;
	float nota[3];
	float media;
}Aluno;

int main(){
	Aluno alunos[2];
	int i, k;
	float sum;
	int lenAlunos = sizeof(alunos)/sizeof(alunos[0]);
	
	for (i=0; i<lenAlunos; i++){
		printf("Informe o nome do aluno: ");
		scanf("%s", &alunos[i].nome);
	
		printf("Informe o cpf do aluno: ");
		scanf("%d", &alunos[i].cpf);
		sum=0;
		for (k=0; k<TAMANHO; k++){
			printf("Informe a nota %d do aluno: ", k+1);
			scanf("%f", &alunos[i].nota[k]);
			sum = sum + alunos[i].nota[k];
		}
		alunos[i].media = sum / TAMANHO;
	}
	
	printf("\nDados dos Alunos:");
	for(i=0; i<lenAlunos; i++){
		printf("\n\nNome: %s", alunos[i].nome);
		printf("\nCPF: %d", alunos[i].cpf);
		
		for (k=0; k<TAMANHO; k++){
			printf("\nA nota %d eh: %.2f", k+1, alunos[i].nota[k]);
		}
		printf("\nMedia: %.2f", alunos[i].media);
	}
	
	return 0;
}
