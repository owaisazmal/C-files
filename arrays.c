#include <stdio.h>

int main(){

    double prices[] = {5.0, 6.0, 10.0, 9.0};
    char name[] = {"Owais"};

//    prices[0] = 5.0;
//    prices[1] = 10.0;
//    prices[2] = 15.0;
//    prices[3] = 25.0;
//    prices[4] = 20.0;
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){

    printf("$%.2lf\n", prices[i]);
    
    }



return 0;
}