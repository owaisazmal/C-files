#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"Mustang", "BMW", "Merc"};

    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }

return 0;
}