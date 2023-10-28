#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old\n", *pAge);
}

int main(){
    int age = 28;
    int *pAge = &age;

   // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
   //           some tasks are performed more easily with pointers
   //           * = indirection operator (value at address)

    printAge(pAge);

    printf("address of the age %p\n", &age);
    printf("value of the age %p\n", pAge);

    printf("value of the age %d\n", age);
    printf("value of the address %d\n", pAge);      //dereferencing
    return 0;
}