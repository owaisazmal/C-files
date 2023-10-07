#include <stdio.h>

int main(){

    int x = 2;

    primeNo(x);
    return 0;

}

void primeNo(int x){
    int flag = 1;
    for(int i = 2; i <= x/2; i++){
        
        if (x %i == 0){
            flag = 0;
        }
    }
    if (flag){
        printf("The number %x is prime\n", x);
    }
    else{
        printf("The no. %x is not prime\n", x);
    }

    return;
}