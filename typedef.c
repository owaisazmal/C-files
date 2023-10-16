#include <stdio.h>

//typedef char user[25];

typedef struct {
    char name[25];
    char pwd[12];
    int id;

} user;

    // typedef = reserved keyword that gives an existing datatype a "nickname"  
int main(){

   // char user[25] = "Owais";
   // user user1 = "Owais";
   user user1 = {"Owais", "Password123", 17862187};
   user user2 = {"Ahmed", "Pwd4321", 65465454};

    printf("%s\n", user1.name);
    printf("%s\n", user1.pwd);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.pwd);
    printf("%d\n", user2.id);



   return 0;
}