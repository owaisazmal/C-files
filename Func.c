#include <stdio.h>

void birthday(char name[], int age){

    printf("\nHappy birthday %s!", name);
    printf("\nYou are %d years Old", age);

}


int main(){

    char name[] = "Owais";
    int age = 69;

    birthday(name, age);

    return 0;
}