#include<stdio.h>

typedef struct{
	int dia;
	char mes[10];
	int ano;
}Data;

typedef struct{
	char nome[30];
	int cpf;
	float nota[3];
	Data nascimento;
}Aluno;

int main(){
	Aluno Daniel;
	int i;
	
	printf("Informe o nome do aluno: ");
	scanf("%s", &Daniel.nome);
	
	printf("Informe o cpf do aluno: ");
	scanf("%d", &Daniel.cpf);
	
	printf("Informe a data de nascimento: ");
	scanf("%d %s %d", &Daniel.nascimento.dia, &Daniel.nascimento.mes, &Daniel.nascimento.ano);
	
	for (i=0; i<3 ;i++){
		printf("Informe a nota %d do aluno: ", i+1);
		scanf("%f", &Daniel.nota[i]);
	}

	printf("\nDados do Aluno: \n");
	
	printf("Nome: %s", Daniel.nome);
	printf("\nCPF: %d", Daniel.cpf);
	printf("\nData de Nacimento: %d/%s/%d", Daniel.nascimento.dia, Daniel.nascimento.mes, Daniel.nascimento.ano);
	
	for (i=0; i<3 ;i++){
		printf("\nA nota %d eh: %.2f", i+1, Daniel.nota[i]);
	}
	
	return 0;
}
