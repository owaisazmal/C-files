#include<stdio.h>
#include<ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temprature in (F) or in (C): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit=='C'){
        printf("Enter the Temp. in C: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in F is: %1f", temp);
    }

    else if(unit=='F'){
        printf("Enter the Temp. in F: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in C is: %1f", temp);
    }
    else{
        printf("%c is not a valid temprature", unit);
    }

    return 0;
}