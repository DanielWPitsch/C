/*
 Função : 
 Autor : Daniel Warella Pitsch, p3, noite, CC
 Data : 30/03/2023
 Observações:
 
 EntradaA primeira linha da entrada contém um único inteiro T, 
 indicando o número de casos de teste (1 = T = 3000).Cada caso de teste contém 4 números: 
 dois inteiros PA e PB (100 = PA < 1000000, PA < PB = 1000000)indicando respectivamente a 
 população de A e B, e dois valores G1 e G2 (0.1 = G1 = 10.0, 0.0 = G2 =10.0, G2 < G1) com 
 um digito após o ponto decimal cada, indicando respectivamente o crescimentopopulacional de 
 A e B (em percentual).Atenção: A população é sempre um valor inteiro, portanto, um crescimento 
 de 2.5 % sobre uma populaçãode 100 pessoas resultará em 102 pessoas, e não 102.5 pessoas, 
 enquanto um crescimento de 2.5% sobre umapopulação de 1000 pessoas resultará em 1025 pessoas. 
 Além disso, não utilize variáveis de precisão simplespara as taxas de crescimento.
 
 SaídaImprima, para cada caso de teste, quantos anos levará para que a cidade A ultrapasse a cidade B 
 em número dehabitantes. Obs.: se o tempo for mais do que 100 anos o programa deve apresentar a 
 mensagem: Mais de 1 século.Neste caso, acredito que seja melhor interromper o programa imediatamente 
 após passar de 100 anos, casocontrário você poderá receber como resposta da submissão deste problema 
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
