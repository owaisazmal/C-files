#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;

    int guess;
    scanf("%d", guess);
    int answer;

    srand(time(0));

    int randNum = (rand() % MAX) - MIN;

    if(guess == randNum){
        printf("You guessed it right");
    } 
    else{
        printf("wrong guess, correct num: %d", randNum);
    }


    return 0;
}