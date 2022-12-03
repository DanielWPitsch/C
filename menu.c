#include<stdio.h>

int main(){
	int i, k;
	int menu[17][158];
	menu [0][0]= 201;
	menu [0][157] = 187;
	
	for	(i=0;i<18;i++){
		for	(k=1;k<120;k++){
			menu [i][k] = 205;
			printf("%c", menu[i][k]);
		}
		printf("\n");
	}
	
	for	(i=0;i<120;i++){
		for	(k=0;k<120;k++){
			printf("%c", menu[i][k]);
		}
		printf("\n");
	}
	
	
	return 0;
}
