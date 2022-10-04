#include <stdio.h>

int main(){
	char time, time2;
	int gols, gols2;
	
	printf("Digite a primeira letra do time: ");
	scanf("%c", &time);
	
	printf("Digite a quantidade de gols do time %c: ", time);
	scanf("%d", &gols);
	
	getchar();
	printf("Digite a primeira letra segundo do time: ");
	scanf("%c", &time2);
	
	printf("Digite a quantidade de gols do time %c: ", time2);
	scanf("%d", &gols2);
	
	if(gols > gols2){
		printf("O time vencedor foi: %c", time);
	}else if(gols2 >gols){
		printf("O time vencedor foi: %c", time2);
	}else{
		printf("EMPATE");
	}
	
	return 0;
}
