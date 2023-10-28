#include <stdio.h>
#include <omp.h>

int main() {

    int x = 12; //00000110
    int y = 6;  //00001100
    int z = 0;  //00000000

    z = x & y;

    printf("AND = %d", z); // 00000100

    z = x | y;
   printf("OR = %d\n", z);  //00001110

   z = x ^ y;
   printf("XOR = %d\n", z); //00001010

   z = x << 2;
   printf("SHIFT LEFT = %d\n", z);      //00001100

   z = x >> 2;
   printf("SHIFT RIGHT = %d\n", z);     //00011000

    return 0;
}