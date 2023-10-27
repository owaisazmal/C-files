#include <stdio.h>
#include <omp.h>

int main() {

    int x = 12; //00000110
    int y = 6;  //00001100
    int z = 0;  //00000000

    z = x & y;

    printf("AND = %d", z); // 00000100

    return 0;
}