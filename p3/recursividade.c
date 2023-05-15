#include <stdio.h>

int mdc(int x, int y){
    if(y==0){
        return x;
    }else{
        if(x<y){
            return mdc(y,x);
        }else{
            return mdc(y, x % y);
        }
    }
}

int main() {
    // Write C code here
    int a,b;
    printf("digite dois numeros para tirar o mdc: ");
    scanf("%d%d", &a, &b);
    
    printf("mdc: %d", mdc(a, b));

    return 0;
}