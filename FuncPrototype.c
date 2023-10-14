#include <stdio.h>

void hello(char[], int); //function prototype

int main(){

char name[] = "Owais";
int age = 21;

hello(name, age);

return 0;
}

void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou're age years old");
}
