#include <stdio.h>
#include <string.h>

struct students{
    char name[12];
    float gpa;

};

int main(){

    struct students student1 = {"Owais", 3.9};
    struct students student2 = {"Kokab", 3.8};
    struct students student3 = {"tariq", 3.6};
    struct students student4 = {"Ahmed", 3.5};

    struct students Student[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(Student)/sizeof(Student[0]); i++){

        printf("%-12s\t", Student[i].name);
        printf("%.2f\n", Student[i].gpa);

    }


    return 0;
}