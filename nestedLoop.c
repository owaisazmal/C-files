#include <stdio.h>

int main(){

    int rows;
    int columns;
    int symbol;

    printf("\nEnter # of row: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j <= columns; j++){
            printf("%d", j);
        }

        printf("\n");
        //break;
    }

}