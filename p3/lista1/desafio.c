/*
 Fun��o : 
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 30/03/2023
 Observa��es:
 
 EntradaA primeira linha da entrada cont�m um �nico inteiro T, 
 indicando o n�mero de casos de teste (1 = T = 3000).Cada caso de teste cont�m 4 n�meros: 
 dois inteiros PA e PB (100 = PA < 1000000, PA < PB = 1000000)indicando respectivamente a 
 popula��o de A e B, e dois valores G1 e G2 (0.1 = G1 = 10.0, 0.0 = G2 =10.0, G2 < G1) com 
 um digito ap�s o ponto decimal cada, indicando respectivamente o crescimentopopulacional de 
 A e B (em percentual).Aten��o: A popula��o � sempre um valor inteiro, portanto, um crescimento 
 de 2.5 % sobre uma popula��ode 100 pessoas resultar� em 102 pessoas, e n�o 102.5 pessoas, 
 enquanto um crescimento de 2.5% sobre umapopula��o de 1000 pessoas resultar� em 1025 pessoas. 
 Al�m disso, n�o utilize vari�veis de precis�o simplespara as taxas de crescimento.
 
 Sa�daImprima, para cada caso de teste, quantos anos levar� para que a cidade A ultrapasse a cidade B 
 em n�mero dehabitantes. Obs.: se o tempo for mais do que 100 anos o programa deve apresentar a 
 mensagem: Mais de 1 s�culo.Neste caso, acredito que seja melhor interromper o programa imediatamente 
 ap�s passar de 100 anos, casocontr�rio voc� poder� receber como resposta da submiss�o deste problema 
 "Time Limit Exceeded".
 
*/

#include<stdio.h>

int main(){
	int T, PA, PB, GA, GB;
	
	printf("Informe a quantidade de testes a ser realizado: ");
	scanf("%d", &T);
	
	for(i=0; i<T; i++){
		printf("Informe populacao de A, populacao de B, o crescimento de A e o crescimento de B respectivamente: ");
		scanf("%d%d%d%d", &PA, &PB, &GA, &GB);
		
		//outro for
	}  
	
	return 1;
}
