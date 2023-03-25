/*
 Função :
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 24/03/2023
 Observações:
*/

#include<stdio.h>

int main(){
	int numero, i;
	
	do{
		printf("\nDigite um valor qualquer: ");
		scanf("%d", &numero);
		
		for(i=1; i<=numero; i++){
			if(numero % i == 0){
				printf("%d ", i);
			}	
		}
		
	}while(numero>=0);
	
	return 1;
}
