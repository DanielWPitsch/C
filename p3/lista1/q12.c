/*
 Função : A função calcula o somatório de um número e todos os seus antecessores até 1
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observações:
*/

#include<stdio.h>

int somatorio(int n){
	int i, soma=0;
	for (i=1; i<=n; i++){
		soma = soma + i;
	}
	return soma;
}
