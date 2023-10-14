#include <stdio.h>

int findMax(int x, int y){

    // if (x > y)
    // {
    //     return x;
    // }

    // if (x < y)
    // {
    //     return y;
    // }

    return (x > y) ? x : y;

}

int main(){

    int max = findMax(50, 10); 
    printf("%d", max);

    return 0;

}

