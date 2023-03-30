#include <stdio.h>
#include<stdlib.h>


int main() {
    int a;
    int *aPtr;
    
    a = 7;
    aPtr=&a;
    
    printf("\nO endereco de a eh: %p\n", &a);
    printf("\nO valor de aPtr eh: %p\n\n", aPtr);
    
    printf("\nO endereco de a eh: %p\n", a);
    printf("\nO valor de *aPtr eh: %p\n\n", *aPtr);
    
    printf("Sabendo que * e & complementam-se mutuamente");
    printf(".\n&*aPtr= %p\n*&aPtr= %p\n", &*aPtr, *&aPtr);
    
    return 0;
}