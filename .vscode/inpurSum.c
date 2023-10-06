#include <stdio.h>

int main(){

    int a, b;
    int c = 0;

    printf("please enter 1st num: ");
    scanf("%d", &a);
    printf("please enter 2nd num: ");
    scanf("%d", &b);

    c = a + b;
    printf("Sum = %d", c);
    
    return 0;
}