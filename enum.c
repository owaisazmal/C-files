#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(){

enum Day today = Sat;

if(today == 1 || today == 7){

    printf("\nIt's the weekend, party time");

}
else{
    printf("\nIt's a weekday, work time");
}

return 0;
}