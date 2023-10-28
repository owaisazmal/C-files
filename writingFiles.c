#include <stdio.h>

int main(){
    FILE *pF = fopen("test.txt", "w");

    printf(pF, "Owais Khan");

    fclode(pF);

       // DELETE A FILE
   /*
   if(remove("test.txt") == 0)
   {
      printf("That file was deleted successfully!");
   }
   else
   {
      printf("That file was NOT deleted!");
   }
   */

    return 0;
}