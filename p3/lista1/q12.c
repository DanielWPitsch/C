/*
 Fun��o : A fun��o calcula o somat�rio de um n�mero e todos os seus antecessores at� 1
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 25/03/2023
 Observa��es:
*/

#include<stdio.h>

int somatorio(int n){
	int i, soma=0;
	for (i=1; i<=n; i++){
		soma = soma + i;
	}
	return soma;
}
