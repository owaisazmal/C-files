#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(0));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);



return 0;
}