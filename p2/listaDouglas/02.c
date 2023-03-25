#include <stdio.h>

int main(){
	int A = 10;
	int B = 20;
	int C;
	
	C = A;
	A = B;
	B = C;
	
	printf("O valor de A era 10 e agora eh = %d \nE o valor de B era 20 e agora eh = %d", A, B);
	
	return 0;
}