#include <stdio.h>

int main(){
	int matriz[][2]={1,2,3,4,5,6,7,8,9,10};
	char texto[]="Linguagem C.";
	
	for(int i=0; i < sizeof(texto); i++){
	    printf("%c", texto[i]);
	}
	printf("\n");
	for(int i=0; i<5; i++){
	    for(int j=0; j<2; j++){
	        printf("%d ", matriz[i][j]);   
	    }
	    printf("\n");
	}
	return 0;
}