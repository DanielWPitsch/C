#include <stdio.h>

int main(){
	
	float indice;
	
	printf("Informe o indice de poluicao: ");
	scanf("%f", &indice);
	
	if(indice >= 0.05 && indice <= 0.25){
		printf("Indice de poluicao aceitavel");
	}else if(indice > 0.25 && indice < 0.3){
		printf("Indice acima do aceitavel");
	}else if(indice >= 0.3 && indice < 0.4 ){
		printf("Indice de poluicao inaceitavel para as industrias do primeiro grupo sao intimadas a suspenderem suas atividades");
	}else if(indice >= 0.4 && indice < 0.5){
		printf("Indice de poluicao inaceitavel para as industrias do primeiro e segundo grupo sao intimadas a suspenderem suas atividades");
	}else if(indice >= 0.5){
		printf("Indice de poluicao inaceitavel para as todos os 3 grupos devem ser notificados e paralisarem suas atividades");
	}else{
		printf("Indice muito puro, fora da escala");
	}
	
	return 0;
}
