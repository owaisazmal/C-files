#include <stdio.h>
#include <string.h>

void sort(char arr[], int size){
    for(int i = 0; i < size - 1; i++){
        
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        
    }
    }
}

void printArr(char arr[], int size){

    for (int i = 0; i < size; i++){
        printf("%c ", arr[i]);
    }
}

int main(){

    //int arr[] = {1, 3, 2, 10, 11, 6, 7, 8, 9};
    char arr[] = {'F', 'A', 'D', 'B', 'C', 'E'};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    printArr(arr, size);

return 0;
}