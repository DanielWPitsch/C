/*
 Função : O programa recebe duas populações e seus crescimentos dados pelo usuário e mostra o tempo que levaria para 
 população menor ultrapassar a maior, lembrando que a primeira população sempre será a menor e sempre terá maior crescimento 
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 31/03/2023
 Observações:
 
*/

#include<stdio.h>

int main(){
	int i, contadorAnos, T, PA, PB;
	float GA, GB;
	
	printf("Informe a quantidade de testes a ser realizado: ");
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		printf("OBS: a populacao de A deve ser menor do que a populacao de B e o crescimento de A maior que o crescimento de B\nInforme populacao de A, populacao de B, o crescimento de A e o crescimento de B respectivamente: ");
		scanf("%d%d%f%f", &PA, &PB, &GA, &GB);
		contadorAnos=0;
		
		while(PA <= PB){
			PA = PA + (PA * GA/100);
			PB = PB + (PB * GB/100);
			
			contadorAnos++;
		}
		
		if(contadorAnos > 100){
			printf("Mais de um seculo.");
		}else{
			printf("%d anos.\n\n", contadorAnos);
		}
		
	}  
		
	return 1;
}
